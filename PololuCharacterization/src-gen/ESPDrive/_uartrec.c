#include "include/api/api.h"
#include "include/ESPDrive/UARTrec.h"
#include "_uartrec.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _uartrecreaction_function_0(void* instance_args) {
    _uartrec_self_t* self = (_uartrec_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _uartrec_mess_t* mess = &self->_lf_mess;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    lf_set(mess, "WAITING");
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _uartrecreaction_function_1(void* instance_args) {
    _uartrec_self_t* self = (_uartrec_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _uartrec_rec_t* rec = self->_lf_rec;
    int rec_width = self->_lf_rec_width; SUPPRESS_UNUSED_WARNING(rec_width);
    _uartrec_mess_t* mess = &self->_lf_mess;
    #line 35 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    static char uart_buf[17];
    static int index = 0;
    if(rec->value) {
      while(uart_is_readable(UART_ID)) {
        char let = uart_getc(UART_ID);
        if (let == '\r' || let == '\n') {
          break;
        }
        uart_buf[index] = let;
        index++;
      }
      uart_buf[index] = '\0';
      index = 0;
    }
    lf_set(mess, uart_buf);
}
#include "include/api/set_undef.h"
_uartrec_self_t* new__uartrec() {
    _uartrec_self_t* self = (_uartrec_self_t*)_lf_new_reactor(sizeof(_uartrec_self_t));
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // Set input by default to an always absent default input.
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_rec = &self->_lf_default__rec;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // Set the default source reactor pointer
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_default__rec._base.source_reactor = (self_base_t*)self;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.number = 0;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.function = _uartrecreaction_function_0;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.self = self;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.name = "?";
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.number = 1;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.function = _uartrecreaction_function_1;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.self = self;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.name = "?";
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.mode = &self->_lf__modes[0];
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__rec.last = NULL;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__rec.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__rec_reactions[0] = &self->_lf__reaction_1;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__rec.reactions = &self->_lf__rec_reactions[0];
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__rec.number_of_reactions = 1;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__rec.physical_time_of_arrival = NEVER;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #endif // FEDERATED
    self->_lf__rec.tmplt.type.element_size = sizeof(bool);
    // Initialize modes
    self_base_t* _lf_self_base = (self_base_t*)self;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].state = &_lf_self_base->_lf__mode_state;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].name = "RECEIVING";
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].deactivation_time = 0;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].flags = 0;
    // Initialize mode state
    _lf_self_base->_lf__mode_state.parent_mode = NULL;
    _lf_self_base->_lf__mode_state.initial_mode = &self->_lf__modes[0];
    _lf_self_base->_lf__mode_state.current_mode = _lf_self_base->_lf__mode_state.initial_mode;
    _lf_self_base->_lf__mode_state.next_mode = NULL;
    _lf_self_base->_lf__mode_state.mode_change = no_transition;
    return self;
}
