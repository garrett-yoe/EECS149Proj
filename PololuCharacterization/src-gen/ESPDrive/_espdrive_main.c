#include "include/api/api.h"
#include "include/ESPDrive/ESPDrive.h"
#include "_espdrive_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _espdrive_mainreaction_function_0(void* instance_args) {
    _espdrive_main_main_self_t* self = (_espdrive_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 126 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    stdio_init_all();
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
    //UART setup
    uart_init(UART_ID, BAUD_RATE);
    gpio_set_function(UART_TX_PIN, GPIO_FUNC_UART);
    gpio_set_function(UART_RX_PIN, GPIO_FUNC_UART);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _espdrive_mainreaction_function_1(void* instance_args) {
    _espdrive_main_main_self_t* self = (_espdrive_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct uart {
        _uartrec_rec_t* rec;
    
    } uart;
    struct d {
        _display_line0_t* line0;
    
    } d;
    uart.rec = &(self->_lf_uart.rec);
    d.line0 = &(self->_lf_d.line0);
    #line 136 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    static char buf0[17];
    if (uart_is_readable(UART_ID)) {
      snprintf(buf0, 17, "Connected");
      lf_set(uart.rec, true);
    } else {
      lf_set(uart.rec, false);
      snprintf(buf0, 17, "No Connection");
    }
    lf_set(d.line0, buf0);
}
#include "include/api/set_undef.h"
_espdrive_main_main_self_t* new__espdrive_main() {
    _espdrive_main_main_self_t* self = (_espdrive_main_main_self_t*)_lf_new_reactor(sizeof(_espdrive_main_main_self_t));
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_uart_width = -2;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_d_width = -2;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.number = 0;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.function = _espdrive_mainreaction_function_0;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.self = self;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.name = "?";
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.number = 1;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.function = _espdrive_mainreaction_function_1;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.self = self;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.name = "?";
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t.last = NULL;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_1;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
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
