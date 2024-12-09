#include "include/api/api.h"
#include "include/Reverse/Reverse.h"
#include "_reverse_main.h"
// *********** From the preamble, verbatim:
#line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
float att = 0.0;

// *********** End of preamble.
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _reverse_mainreaction_function_0(void* instance_args) {
    _reverse_main_main_self_t* self = (_reverse_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 35 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    stdio_init_all();
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
    //UART setup
    uart_init(UART_ID, BAUD_RATE);
    gpio_set_function(UART_TX_PIN, GPIO_FUNC_UART);
    gpio_set_function(UART_RX_PIN, GPIO_FUNC_UART);
    uart_set_format(UART_ID, 8, 1, UART_PARITY_NONE);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _reverse_mainreaction_function_1(void* instance_args) {
    _reverse_main_main_self_t* self = (_reverse_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct d {
        _display_line0_t* line0;
    
    } d;
    d.line0 = &(self->_lf_d.line0);
    #line 46 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    static char buf0[17];
    snprintf(buf0, 17, "attempt:%1.0f", att);
    uart_puts(UART_ID, "polulu sent");
    att++;
    lf_set(d.line0, buf0);
}
#include "include/api/set_undef.h"
_reverse_main_main_self_t* new__reverse_main() {
    _reverse_main_main_self_t* self = (_reverse_main_main_self_t*)_lf_new_reactor(sizeof(_reverse_main_main_self_t));
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_d_width = -2;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_0.number = 0;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_0.function = _reverse_mainreaction_function_0;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_0.self = self;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_0.name = "?";
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_1.number = 1;
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_1.function = _reverse_mainreaction_function_1;
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_1.self = self;
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_1.name = "?";
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__t.last = NULL;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_1;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    #ifdef FEDERATED
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    return self;
}
