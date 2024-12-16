#include "include/api/api.h"
#include "include/SimpleLineFollow/RobotLineFollower.h"
#include "_robotlinefollower.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _robotlinefollowerreaction_function_0(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    #line 81 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    lf_set(notify1, "INIT");
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_1(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robotlinefollower_IR_1_val_t* IR_1_val = self->_lf_IR_1_val;
    int IR_1_val_width = self->_lf_IR_1_val_width; SUPPRESS_UNUSED_WARNING(IR_1_val_width);
    _robotlinefollower_IR_LEFT_val_t* IR_LEFT_val = self->_lf_IR_LEFT_val;
    int IR_LEFT_val_width = self->_lf_IR_LEFT_val_width; SUPPRESS_UNUSED_WARNING(IR_LEFT_val_width);
    _robotlinefollower_IR_RIGHT_val_t* IR_RIGHT_val = self->_lf_IR_RIGHT_val;
    int IR_RIGHT_val_width = self->_lf_IR_RIGHT_val_width; SUPPRESS_UNUSED_WARNING(IR_RIGHT_val_width);
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    _robotlinefollower_notify2_t* notify2 = &self->_lf_notify2;
    _robotlinefollower_notify3_t* notify3 = &self->_lf_notify3;
    _robotlinefollower_notify4_t* notify4 = &self->_lf_notify4;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 87 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int median_IR_val = 500;
    float P = 0.025/350.0*3;
    int real_IR_val = IR_1_val->value;
    float left_motor_power = 0.1+(real_IR_val-median_IR_val)*P;
    float right_motor_power = 0.1-(real_IR_val-median_IR_val)*P;
    
    lf_set(motors.left_power, left_motor_power);
    lf_set(motors.right_power, right_motor_power);
    
    static char buf0[17];
    static char buf1[17];
    static char buf2[17];
    static char buf3[17];
    snprintf(buf0, 17, "A: %d", real_IR_val);
    lf_set(notify1, buf0);  
    snprintf(buf1, 17, "left: %f", left_motor_power);
    lf_set(notify2, buf1);  
    snprintf(buf2, 17, "right: %f", right_motor_power);
    lf_set(notify3, buf2);
    snprintf(buf3, 17, "l: %d, r: %d", IR_LEFT_val->value, IR_RIGHT_val->value);
    lf_set(notify4, buf3);
}
#include "include/api/set_undef.h"
_robotlinefollower_self_t* new__robotlinefollower() {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)_lf_new_reactor(sizeof(_robotlinefollower_self_t));
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set input by default to an always absent default input.
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_drive = &self->_lf_default__drive;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set the default source reactor pointer
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_default__drive._base.source_reactor = (self_base_t*)self;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set input by default to an always absent default input.
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_IR_1_val = &self->_lf_default__IR_1_val;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set the default source reactor pointer
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_default__IR_1_val._base.source_reactor = (self_base_t*)self;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set input by default to an always absent default input.
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_IR_LEFT_val = &self->_lf_default__IR_LEFT_val;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set the default source reactor pointer
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_default__IR_LEFT_val._base.source_reactor = (self_base_t*)self;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set input by default to an always absent default input.
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_IR_RIGHT_val = &self->_lf_default__IR_RIGHT_val;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set the default source reactor pointer
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_default__IR_RIGHT_val._base.source_reactor = (self_base_t*)self;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_motors_width = -2;
    #line 80 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.number = 0;
    #line 80 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.function = _robotlinefollowerreaction_function_0;
    #line 80 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.self = self;
    #line 80 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 80 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 80 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.name = "?";
    #line 80 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 86 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.number = 1;
    #line 86 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.function = _robotlinefollowerreaction_function_1;
    #line 86 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.self = self;
    #line 86 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 86 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 86 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.name = "?";
    #line 86 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.mode = &self->_lf__modes[0];
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__drive.last = NULL;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__drive.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__drive.tmplt.type.element_size = sizeof(bool);
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val.last = NULL;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val_reactions[0] = &self->_lf__reaction_1;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val.reactions = &self->_lf__IR_1_val_reactions[0];
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val.number_of_reactions = 1;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val.physical_time_of_arrival = NEVER;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    self->_lf__IR_1_val.tmplt.type.element_size = sizeof(uint16_t);
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val.last = NULL;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val_reactions[0] = &self->_lf__reaction_1;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val.reactions = &self->_lf__IR_LEFT_val_reactions[0];
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val.number_of_reactions = 1;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val.physical_time_of_arrival = NEVER;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    self->_lf__IR_LEFT_val.tmplt.type.element_size = sizeof(bool);
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val.last = NULL;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val_reactions[0] = &self->_lf__reaction_1;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val.reactions = &self->_lf__IR_RIGHT_val_reactions[0];
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val.number_of_reactions = 1;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val.physical_time_of_arrival = NEVER;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    self->_lf__IR_RIGHT_val.tmplt.type.element_size = sizeof(bool);
    // Initialize modes
    self_base_t* _lf_self_base = (self_base_t*)self;
    #line 85 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[0].state = &_lf_self_base->_lf__mode_state;
    #line 85 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[0].name = "DRIVING";
    #line 85 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[0].deactivation_time = 0;
    #line 85 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[0].flags = 0;
    // Initialize mode state
    _lf_self_base->_lf__mode_state.parent_mode = NULL;
    _lf_self_base->_lf__mode_state.initial_mode = &self->_lf__modes[0];
    _lf_self_base->_lf__mode_state.current_mode = _lf_self_base->_lf__mode_state.initial_mode;
    _lf_self_base->_lf__mode_state.next_mode = NULL;
    _lf_self_base->_lf__mode_state.mode_change = no_transition;
    return self;
}
