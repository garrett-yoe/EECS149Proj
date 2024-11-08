#include "include/api/api.h"
#include "include/RobotSquareSolution/AngleToDistance.h"
#include "_angletodistance.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _angletodistancereaction_function_0(void* instance_args) {
    _angletodistance_self_t* self = (_angletodistance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct e {
        _encoders_trigger_t* trigger;
    
    } e;
    e.trigger = &(self->_lf_e.trigger);
    #line 31 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    lf_set(e.trigger, true);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _angletodistancereaction_function_1(void* instance_args) {
    _angletodistance_self_t* self = (_angletodistance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct e {
        _encoders_left_t* left;
    
    } e;
    e.left = self->_lf_e.left;
    _angletodistance_left_distance_t* left_distance = &self->_lf_left_distance;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    lf_set(left_distance, (3.175*M_PI*e.left->value) / 360);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _angletodistancereaction_function_2(void* instance_args) {
    _angletodistance_self_t* self = (_angletodistance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct e {
        _encoders_right_t* right;
    
    } e;
    e.right = self->_lf_e.right;
    _angletodistance_right_distance_t* right_distance = &self->_lf_right_distance;
    #line 37 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    lf_set(right_distance, (3.175*M_PI*e.right->value) / 360);
}
#include "include/api/set_undef.h"
_angletodistance_self_t* new__angletodistance() {
    _angletodistance_self_t* self = (_angletodistance_self_t*)_lf_new_reactor(sizeof(_angletodistance_self_t));
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_e_width = -2;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.left_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.left_reactions[0] = &self->_lf__reaction_1;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.left_trigger.reactions = self->_lf_e.left_reactions;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.left_trigger.last = NULL;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.left_trigger.number_of_reactions = 1;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    #ifdef FEDERATED
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.left_trigger.physical_time_of_arrival = NEVER;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    #endif // FEDERATED
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.right_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.right_reactions[0] = &self->_lf__reaction_2;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.right_trigger.reactions = self->_lf_e.right_reactions;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.right_trigger.last = NULL;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.right_trigger.number_of_reactions = 1;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    #ifdef FEDERATED
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    self->_lf_e.right_trigger.physical_time_of_arrival = NEVER;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
    #endif // FEDERATED
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.number = 0;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.function = _angletodistancereaction_function_0;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.self = self;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.name = "?";
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.number = 1;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.function = _angletodistancereaction_function_1;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.self = self;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.name = "?";
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.number = 2;
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.function = _angletodistancereaction_function_2;
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.self = self;
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.name = "?";
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.mode = NULL;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t.last = NULL;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #ifdef FEDERATED
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
