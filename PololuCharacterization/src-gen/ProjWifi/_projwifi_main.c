#include "include/api/api.h"
#include "include/ProjWifi/ProjWifi.h"
#include "_projwifi_main.h"
// *********** From the preamble, verbatim:
#line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
static void *action;
interval_t prev = 0;
interval_t dif = 0;

void external(uint gpio, uint32_t events) {
    interval_t cur = lf_time_physical_elapsed();
    dif = cur - prev;
    if (dif > 200000000) {
        lf_schedule(action, 0);
    }
    prev = cur;
}

// *********** End of preamble.
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _projwifi_mainreaction_function_0(void* instance_args) {
    _projwifi_main_main_self_t* self = (_projwifi_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _projwifi_main_blue_t* blue = &self->_lf_blue;
    #line 41 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    gpio_init(UART_RX);
    gpio_set_dir(UART_RX, GPIO_IN);
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_IN);
    action = blue;
    gpio_set_irq_enabled_with_callback(UART_RX, GPIO_IRQ_EDGE_FALL, true, external);
    gpio_put(LED_PIN, true);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _projwifi_mainreaction_function_1(void* instance_args) {
    _projwifi_main_main_self_t* self = (_projwifi_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct disp {
        _display_line0_t* line0;
    _display_line1_t* line1;
    
    } disp;
    // Expose the action struct as a local variable whose name matches the action name.
    _projwifi_main_blue_t* blue = &self->_lf_blue;
    // Set the fields of the action struct to match the current trigger.
    blue->is_present = (bool)self->_lf__blue.status;
    blue->has_value = ((self->_lf__blue.tmplt.token) != NULL && (self->_lf__blue.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)blue, (self->_lf__blue.tmplt.token));
    disp.line0 = &(self->_lf_disp.line0);
    disp.line1 = &(self->_lf_disp.line1);
    #line 51 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    // Check if received signal
    static char buf1[17];
    snprintf(buf1, 17, "Cmd Last Sent:");
    lf_set(disp.line0, buf1);
    static char buf[17];
    snprintf(buf, 17, "%lld\n", dif);
    lf_set(disp.line1, buf);
    
    // Check if pin voltage changed
    if (gpio_get(UART_RX)) {
        gpio_put(LED_PIN, true);
    } else {
        gpio_put(LED_PIN, false);
    }
}
#include "include/api/set_undef.h"
_projwifi_main_main_self_t* new__projwifi_main() {
    _projwifi_main_main_self_t* self = (_projwifi_main_main_self_t*)_lf_new_reactor(sizeof(_projwifi_main_main_self_t));
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf_blue._base.trigger = &self->_lf__blue;
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf_blue.parent = (self_base_t*)self;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_disp_width = -2;
    #line 40 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_0.number = 0;
    #line 40 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_0.function = _projwifi_mainreaction_function_0;
    #line 40 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_0.self = self;
    #line 40 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 40 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 40 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_0.name = "?";
    #line 40 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_1.number = 1;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_1.function = _projwifi_mainreaction_function_1;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_1.self = self;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_1.name = "?";
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__reaction_1.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__blue.last = NULL;
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__blue.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__blue_reactions[0] = &self->_lf__reaction_1;
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__blue.reactions = &self->_lf__blue_reactions[0];
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__blue.number_of_reactions = 1;
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    #ifdef FEDERATED
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    self->_lf__blue.physical_time_of_arrival = NEVER;
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    #endif // FEDERATED
    self->_lf__blue.is_physical = true;
    
    self->_lf__blue.tmplt.type.element_size = 0;
    self->_lf_blue.type.element_size = 0;
    return self;
}
