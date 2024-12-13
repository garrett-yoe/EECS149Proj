#include "include/api/api.h"
#include "include/ESPDrive/Robot.h"
#include "_robot.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _robotreaction_function_0(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _robot_notify_t* notify = &self->_lf_notify;
    #line 61 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    lf_set(notify, "START");
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotreaction_function_1(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robot_com_t* com = self->_lf_com;
    int com_width = self->_lf_com_width; SUPPRESS_UNUSED_WARNING(com_width);
    reactor_mode_t* FORWARD = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_FORWARD_change_type = reset_transition;
    reactor_mode_t* RIGHT = &self->_lf__modes[2];
    lf_mode_change_type_t _lf_RIGHT_change_type = reset_transition;
    reactor_mode_t* LEFT = &self->_lf__modes[3];
    lf_mode_change_type_t _lf_LEFT_change_type = reset_transition;
    _robot_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    if (strcmp(com->value, "for") == 0) {
      lf_set_mode(FORWARD);
      lf_set(notify, "STO FOR");
      lf_set(motors.left_power, 0.1f);
      lf_set(motors.right_power, 0.1f);
    } else if (strcmp(com->value, "rig") == 0) {
      lf_set_mode(RIGHT);
      lf_set(notify, "STO RIG");
      lf_set(motors.left_power, 0.0f);
      lf_set(motors.right_power, 0.1f);
    } else if (strcmp(com->value, "lef") == 0) {
      lf_set_mode(LEFT);
      lf_set(notify, "STO LEF");
      lf_set(motors.left_power, 0.1);
      lf_set(motors.right_power, 0.0f);
    } else {
      lf_set(notify, com->value);
      lf_set(motors.left_power, 0.0f);
      lf_set(motors.right_power, 0.0f); 
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotreaction_function_2(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robot_com_t* com = self->_lf_com;
    int com_width = self->_lf_com_width; SUPPRESS_UNUSED_WARNING(com_width);
    reactor_mode_t* STOPPED = &self->_lf__modes[0];
    lf_mode_change_type_t _lf_STOPPED_change_type = reset_transition;
    reactor_mode_t* RIGHT = &self->_lf__modes[2];
    lf_mode_change_type_t _lf_RIGHT_change_type = reset_transition;
    reactor_mode_t* LEFT = &self->_lf__modes[3];
    lf_mode_change_type_t _lf_LEFT_change_type = reset_transition;
    _robot_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    if (strcmp(com->value, "sto") == 0) {
      lf_set_mode(STOPPED);
      lf_set(notify, "FOR STO");
      lf_set(motors.left_power, 0.0);
      lf_set(motors.right_power, 0.0f);
    } else if (strcmp(com->value, "rig") == 0) {
      lf_set_mode(RIGHT);
      lf_set(notify, "FOR RIG");
      lf_set(motors.left_power, 0.0f);
      lf_set(motors.right_power, 0.1f);
    } else if (strcmp(com->value, "lef") == 0) {
      lf_set_mode(LEFT);
      lf_set(notify, "FOR LEF");
      lf_set(motors.left_power, 0.1);
      lf_set(motors.right_power, 0.0f);
    } else {
      lf_set(notify, com->value);
      lf_set(motors.left_power, 0.1f);
      lf_set(motors.right_power, 0.1f); 
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotreaction_function_3(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robot_com_t* com = self->_lf_com;
    int com_width = self->_lf_com_width; SUPPRESS_UNUSED_WARNING(com_width);
    reactor_mode_t* FORWARD = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_FORWARD_change_type = reset_transition;
    reactor_mode_t* STOPPED = &self->_lf__modes[0];
    lf_mode_change_type_t _lf_STOPPED_change_type = reset_transition;
    reactor_mode_t* LEFT = &self->_lf__modes[3];
    lf_mode_change_type_t _lf_LEFT_change_type = reset_transition;
    _robot_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    if (strcmp(com->value, "for") == 0) {
      lf_set_mode(FORWARD);
      lf_set(notify, "RIG FOR");
      lf_set(motors.left_power, 0.1f);
      lf_set(motors.right_power, 0.1f);
    } else if (strcmp(com->value, "sto") == 0) {
      lf_set_mode(STOPPED);
      lf_set(notify, "RIG STO");
      lf_set(motors.left_power, 0.0);
      lf_set(motors.right_power, 0.0f);
    } else if (strcmp(com->value, "lef") == 0) {
      lf_set_mode(LEFT);
      lf_set(notify, "RIG LEF");
      lf_set(motors.left_power, 0.1);
      lf_set(motors.right_power, 0.0f);
    } else {
      lf_set(notify, com->value);
      lf_set(motors.left_power, 0.0f);
      lf_set(motors.right_power, 0.1f); 
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotreaction_function_4(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robot_com_t* com = self->_lf_com;
    int com_width = self->_lf_com_width; SUPPRESS_UNUSED_WARNING(com_width);
    reactor_mode_t* FORWARD = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_FORWARD_change_type = reset_transition;
    reactor_mode_t* RIGHT = &self->_lf__modes[2];
    lf_mode_change_type_t _lf_RIGHT_change_type = reset_transition;
    reactor_mode_t* STOPPED = &self->_lf__modes[0];
    lf_mode_change_type_t _lf_STOPPED_change_type = reset_transition;
    _robot_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 141 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    if (strcmp(com->value, "for") == 0) {
      lf_set_mode(FORWARD);
      lf_set(notify, "LEF FOR");
      lf_set(motors.left_power, 0.1f);
      lf_set(motors.right_power, 0.1f);
    } else if (strcmp(com->value, "rig") == 0) {
      lf_set_mode(RIGHT);
      lf_set(notify, "LEF RIG");
      lf_set(motors.left_power, 0.0f);
      lf_set(motors.right_power, 0.1f);
    } else if (strcmp(com->value, "sto") == 0) {
      lf_set_mode(STOPPED);
      lf_set(notify, "LEF STO");
      lf_set(motors.left_power, 0.0);
      lf_set(motors.right_power, 0.0f);
    } else {
      lf_set(notify, com->value);
      lf_set(motors.left_power, 0.1f);
      lf_set(motors.right_power, 0.0f); 
    }
}
#include "include/api/set_undef.h"
_robot_self_t* new__robot() {
    _robot_self_t* self = (_robot_self_t*)_lf_new_reactor(sizeof(_robot_self_t));
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // Set input by default to an always absent default input.
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_com = &self->_lf_default__com;
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // Set the default source reactor pointer
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_default__com._base.source_reactor = (self_base_t*)self;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_motors_width = -2;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.number = 0;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.function = _robotreaction_function_0;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.self = self;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.name = "?";
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.number = 1;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.function = _robotreaction_function_1;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.self = self;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.name = "?";
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.mode = &self->_lf__modes[0];
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.number = 2;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.function = _robotreaction_function_2;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.self = self;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.name = "?";
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_2.mode = &self->_lf__modes[1];
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_3.number = 3;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_3.function = _robotreaction_function_3;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_3.self = self;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_3.STP_handler = NULL;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_3.name = "?";
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_3.mode = &self->_lf__modes[2];
    #line 140 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_4.number = 4;
    #line 140 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_4.function = _robotreaction_function_4;
    #line 140 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_4.self = self;
    #line 140 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    #line 140 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_4.STP_handler = NULL;
    #line 140 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_4.name = "?";
    #line 140 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_4.mode = &self->_lf__modes[3];
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__com.last = NULL;
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__com.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__com_reactions[0] = &self->_lf__reaction_1;
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__com_reactions[1] = &self->_lf__reaction_2;
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__com_reactions[2] = &self->_lf__reaction_3;
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__com_reactions[3] = &self->_lf__reaction_4;
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__com.reactions = &self->_lf__com_reactions[0];
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__com.number_of_reactions = 4;
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__com.physical_time_of_arrival = NEVER;
    #line 55 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #endif // FEDERATED
    self->_lf__com.tmplt.type.element_size = sizeof(string);
    // Initialize modes
    self_base_t* _lf_self_base = (self_base_t*)self;
    #line 64 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].state = &_lf_self_base->_lf__mode_state;
    #line 64 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].name = "STOPPED";
    #line 64 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].deactivation_time = 0;
    #line 64 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].flags = 0;
    #line 89 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[1].state = &_lf_self_base->_lf__mode_state;
    #line 89 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[1].name = "FORWARD";
    #line 89 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[1].deactivation_time = 0;
    #line 89 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[1].flags = 0;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[2].state = &_lf_self_base->_lf__mode_state;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[2].name = "RIGHT";
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[2].deactivation_time = 0;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[2].flags = 0;
    #line 139 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[3].state = &_lf_self_base->_lf__mode_state;
    #line 139 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[3].name = "LEFT";
    #line 139 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[3].deactivation_time = 0;
    #line 139 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[3].flags = 0;
    // Initialize mode state
    _lf_self_base->_lf__mode_state.parent_mode = NULL;
    _lf_self_base->_lf__mode_state.initial_mode = &self->_lf__modes[0];
    _lf_self_base->_lf__mode_state.current_mode = _lf_self_base->_lf__mode_state.initial_mode;
    _lf_self_base->_lf__mode_state.next_mode = NULL;
    _lf_self_base->_lf__mode_state.mode_change = no_transition;
    return self;
}
