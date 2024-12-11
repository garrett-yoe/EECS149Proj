#include "include/api/api.h"
#include "include/ESPDrive/ESPDrive.h"
#include "_espdrive_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _espdrive_mainreaction_function_0(void* instance_args) {
    _espdrive_main_main_self_t* self = (_espdrive_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 79 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
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
    #line 89 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    static char buf0[17];
    if (uart_is_readable(UART_ID)) {
      snprintf(buf0, 17, "SENT");
      lf_set(uart.rec, true);
    } else {
      snprintf(buf0, 17, "Nothing");
    }
    lf_set(d.line0, buf0);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _espdrive_mainreaction_function_2(void* instance_args) {
    _espdrive_main_main_self_t* self = (_espdrive_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct uart {
        _uartrec_mess_t* mess;
    
    } uart;
    struct d {
        _display_line1_t* line1;
    
    } d;
    uart.mess = self->_lf_uart.mess;
    d.line1 = &(self->_lf_d.line1);
    #line 101 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    static char buf0[17];
    snprintf(buf0, 17, uart.mess->value);
    lf_set(d.line1, buf0);
}
#include "include/api/set_undef.h"
_espdrive_main_main_self_t* new__espdrive_main() {
    _espdrive_main_main_self_t* self = (_espdrive_main_main_self_t*)_lf_new_reactor(sizeof(_espdrive_main_main_self_t));
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_uart_width = -2;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_uart.mess_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_uart.mess_reactions[0] = &self->_lf__reaction_2;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_uart.mess_trigger.reactions = self->_lf_uart.mess_reactions;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_uart.mess_trigger.last = NULL;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_uart.mess_trigger.number_of_reactions = 1;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_uart.mess_trigger.physical_time_of_arrival = NEVER;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #endif // FEDERATED
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_d_width = -2;
    #line 78 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.number = 0;
    #line 78 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.function = _espdrive_mainreaction_function_0;
    #line 78 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.self = self;
    #line 78 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 78 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 78 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.name = "?";
    #line 78 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 88 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.number = 1;
    #line 88 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.function = _espdrive_mainreaction_function_1;
    #line 88 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.self = self;
    #line 88 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 88 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 88 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.name = "?";
    #line 88 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 100 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.number = 2;
    #line 100 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.function = _espdrive_mainreaction_function_2;
    #line 100 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.self = self;
    #line 100 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 100 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 100 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.name = "?";
    #line 100 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.mode = NULL;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t.last = NULL;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_1;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
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
