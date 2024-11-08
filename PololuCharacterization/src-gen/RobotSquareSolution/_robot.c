#include "include/api/api.h"
#include "include/RobotSquareSolution/Robot.h"
#include "_robot.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _robotreaction_function_0(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robot_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 51 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    lf_set(notify, "Driving");
    lf_set(motors.left_power, 0.1f);
    lf_set(motors.right_power, 0.1f);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotreaction_function_1(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct gyro {
        _gyroangle_trigger_t* trigger;
    
    } gyro;
    gyro.trigger = &(self->_lf_gyro.trigger);
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    lf_set(gyro.trigger, true);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotreaction_function_2(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct a_to_d {
        _angletodistance_left_distance_t* left_distance;
    _angletodistance_right_distance_t* right_distance;
    
    } a_to_d;
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    struct gyro {
        _gyroangle_trigger_t* trigger;
    
    } gyro;
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    a_to_d.right_distance = self->_lf_a_to_d.right_distance;
    reactor_mode_t* TURNING = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_TURNING_change_type = reset_transition;
    _robot_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    gyro.trigger = &(self->_lf_gyro.trigger);
    #line 61 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    if (a_to_d.left_distance->value - start_dist> 50) {
      lf_set_mode(TURNING);
      lf_set(notify, "TURNING");
      lf_set(motors.left_power, 0.1f);
      lf_set(motors.right_power, -0.1f);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotreaction_function_3(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct gyro {
        _gyroangle_trigger_t* trigger;
    
    } gyro;
    gyro.trigger = &(self->_lf_gyro.trigger);
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    lf_set(gyro.trigger, true);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotreaction_function_4(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct gyro {
        _gyroangle_z_t* z;
    
    } gyro;
    struct a_to_d {
        _angletodistance_left_distance_t* left_distance;
    
    } a_to_d;
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    gyro.z = self->_lf_gyro.z;
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    reactor_mode_t* DRIVING = &self->_lf__modes[0];
    lf_mode_change_type_t _lf_DRIVING_change_type = reset_transition;
    _robot_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    static char buf[17];
    snprintf(buf, 17, "angle: %f, tot: %f", start_angle - gyro.z->value );
    lf_set(notify, buf);
    if (start_angle - gyro.z->value > 90) {
      lf_set_mode(DRIVING);
      lf_set(motors.left_power, 0.1f);
      lf_set(motors.right_power, 0.1f);
      start_angle = gyro.z->value;
      start_dist = a_to_d.left_distance->value;
    }
}
#include "include/api/set_undef.h"
_robot_self_t* new__robot() {
    _robot_self_t* self = (_robot_self_t*)_lf_new_reactor(sizeof(_robot_self_t));
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    // Set input by default to an always absent default input.
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_drive = &self->_lf_default__drive;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    // Set the default source reactor pointer
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_default__drive._base.source_reactor = (self_base_t*)self;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_motors_width = -2;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_gyro_width = -2;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_reactions[0] = &self->_lf__reaction_4;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.reactions = self->_lf_gyro.z_reactions;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.last = NULL;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.number_of_reactions = 1;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    #ifdef FEDERATED
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.physical_time_of_arrival = NEVER;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    #endif // FEDERATED
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_a_to_d_width = -2;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.left_distance_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.left_distance_reactions[0] = &self->_lf__reaction_2;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.left_distance_reactions[1] = &self->_lf__reaction_4;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.left_distance_trigger.reactions = self->_lf_a_to_d.left_distance_reactions;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.left_distance_trigger.last = NULL;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.left_distance_trigger.number_of_reactions = 2;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #ifdef FEDERATED
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.left_distance_trigger.physical_time_of_arrival = NEVER;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #endif // FEDERATED
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.right_distance_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.right_distance_reactions[0] = &self->_lf__reaction_2;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.right_distance_trigger.reactions = self->_lf_a_to_d.right_distance_reactions;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.right_distance_trigger.last = NULL;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.right_distance_trigger.number_of_reactions = 1;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #ifdef FEDERATED
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf_a_to_d.right_distance_trigger.physical_time_of_arrival = NEVER;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #endif // FEDERATED
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.number = 0;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.function = _robotreaction_function_0;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.self = self;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.name = "?";
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 57 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.number = 1;
    #line 57 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.function = _robotreaction_function_1;
    #line 57 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.self = self;
    #line 57 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 57 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 57 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.name = "?";
    #line 57 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_1.mode = &self->_lf__modes[0];
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.number = 2;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.function = _robotreaction_function_2;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.self = self;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.name = "?";
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_2.mode = &self->_lf__modes[0];
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_3.number = 3;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_3.function = _robotreaction_function_3;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_3.self = self;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_3.STP_handler = NULL;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_3.name = "?";
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_3.mode = &self->_lf__modes[1];
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_4.number = 4;
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_4.function = _robotreaction_function_4;
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_4.self = self;
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_4.STP_handler = NULL;
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_4.name = "?";
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__reaction_4.mode = &self->_lf__modes[1];
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t.last = NULL;
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_1;
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t_reactions[1] = &self->_lf__reaction_3;
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t.number_of_reactions = 2;
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #ifdef FEDERATED
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
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
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__drive.last = NULL;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__drive.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__drive.tmplt.type.element_size = sizeof(bool);
    // Initialize modes
    self_base_t* _lf_self_base = (self_base_t*)self;
    #line 56 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__modes[0].state = &_lf_self_base->_lf__mode_state;
    #line 56 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__modes[0].name = "DRIVING";
    #line 56 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__modes[0].deactivation_time = 0;
    #line 56 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__modes[0].flags = 0;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__modes[1].state = &_lf_self_base->_lf__mode_state;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__modes[1].name = "TURNING";
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__modes[1].deactivation_time = 0;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    self->_lf__modes[1].flags = 0;
    // Initialize mode state
    _lf_self_base->_lf__mode_state.parent_mode = NULL;
    _lf_self_base->_lf__mode_state.initial_mode = &self->_lf__modes[0];
    _lf_self_base->_lf__mode_state.current_mode = _lf_self_base->_lf__mode_state.initial_mode;
    _lf_self_base->_lf__mode_state.next_mode = NULL;
    _lf_self_base->_lf__mode_state.mode_change = no_transition;
    return self;
}
