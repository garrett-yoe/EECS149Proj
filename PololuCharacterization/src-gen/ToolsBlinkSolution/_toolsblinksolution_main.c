#include "include/api/api.h"
#include "include/ToolsBlinkSolution/ToolsBlinkSolution.h"
#include "_toolsblinksolution_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _toolsblinksolution_mainreaction_function_0(void* instance_args) {
    _toolsblinksolution_main_main_self_t* self = (_toolsblinksolution_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _toolsblinksolution_mainreaction_function_1(void* instance_args) {
    _toolsblinksolution_main_main_self_t* self = (_toolsblinksolution_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 31 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    gpio_put(PICO_DEFAULT_LED_PIN, true);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _toolsblinksolution_mainreaction_function_2(void* instance_args) {
    _toolsblinksolution_main_main_self_t* self = (_toolsblinksolution_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 35 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    gpio_put(PICO_DEFAULT_LED_PIN, false);
}
#include "include/api/set_undef.h"
_toolsblinksolution_main_main_self_t* new__toolsblinksolution_main() {
    _toolsblinksolution_main_main_self_t* self = (_toolsblinksolution_main_main_self_t*)_lf_new_reactor(sizeof(_toolsblinksolution_main_main_self_t));
    #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_0.number = 0;
    #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_0.function = _toolsblinksolution_mainreaction_function_0;
    #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_0.self = self;
    #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_0.name = "?";
    #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_1.number = 1;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_1.function = _toolsblinksolution_mainreaction_function_1;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_1.self = self;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_1.name = "?";
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_2.number = 2;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_2.function = _toolsblinksolution_mainreaction_function_2;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_2.self = self;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_2.name = "?";
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__reaction_2.mode = NULL;
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_on.last = NULL;
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_on.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_on_reactions[0] = &self->_lf__reaction_1;
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_on.reactions = &self->_lf__t_on_reactions[0];
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_on.number_of_reactions = 1;
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    #ifdef FEDERATED
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_on.physical_time_of_arrival = NEVER;
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    #endif // FEDERATED
    self->_lf__t_on.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t_on.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_off.last = NULL;
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_off.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_off_reactions[0] = &self->_lf__reaction_2;
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_off.reactions = &self->_lf__t_off_reactions[0];
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_off.number_of_reactions = 1;
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    #ifdef FEDERATED
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    self->_lf__t_off.physical_time_of_arrival = NEVER;
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    #endif // FEDERATED
    self->_lf__t_off.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t_off.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
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
