#include "include/api/api.h"
#include "include/SimpleLineFollow/RobotLineFollower.h"
#include "_robotlinefollower.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _robotlinefollowerreaction_function_0(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct gyro {
        _gyroangle_trigger_t* trigger;
    
    } gyro;
    gyro.trigger = &(self->_lf_gyro.trigger);
    #line 178 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    lf_set(gyro.trigger, true);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_1(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    #line 182 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    lf_set(notify1, "INIT");
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_2(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct a_to_d {
        _angletodistance_left_distance_t* left_distance;
    
    } a_to_d;
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
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    reactor_mode_t* SHORT_STRAIGHT = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_SHORT_STRAIGHT_change_type = reset_transition;
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    _robotlinefollower_notify2_t* notify2 = &self->_lf_notify2;
    _robotlinefollower_notify3_t* notify3 = &self->_lf_notify3;
    _robotlinefollower_notify4_t* notify4 = &self->_lf_notify4;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 187 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int median_IR_val = 500;
    float P = 0.025/350.0*3;
    int real_IR_val = IR_1_val->value;
    float left_motor_power = 0.25+(real_IR_val-median_IR_val)*P;
    float right_motor_power = 0.25-(real_IR_val-median_IR_val)*P;
    
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
    if (IR_LEFT_val->value  || IR_RIGHT_val->value) {
      lf_set_mode(SHORT_STRAIGHT);
      lf_set(motors.left_power, 0);
      lf_set(motors.right_power, 0);
      start_dist = a_to_d.left_distance->value;
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_3(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct a_to_d {
        _angletodistance_left_distance_t* left_distance;
    
    } a_to_d;
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    _robotlinefollower_IR_LEFT_val_t* IR_LEFT_val = self->_lf_IR_LEFT_val;
    int IR_LEFT_val_width = self->_lf_IR_LEFT_val_width; SUPPRESS_UNUSED_WARNING(IR_LEFT_val_width);
    _robotlinefollower_IR_RIGHT_val_t* IR_RIGHT_val = self->_lf_IR_RIGHT_val;
    int IR_RIGHT_val_width = self->_lf_IR_RIGHT_val_width; SUPPRESS_UNUSED_WARNING(IR_RIGHT_val_width);
    reactor_mode_t* MEDIUM_STRAIGHT = &self->_lf__modes[2];
    lf_mode_change_type_t _lf_MEDIUM_STRAIGHT_change_type = reset_transition;
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    _robotlinefollower_notify2_t* notify2 = &self->_lf_notify2;
    _robotlinefollower_notify4_t* notify4 = &self->_lf_notify4;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 222 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    lf_set(notify1, "SHORT STRAIGHT");
    static char buf1[17];
    snprintf(buf1, 17, "A: %f", a_to_d.left_distance->value - start_dist);
    lf_set(notify2, buf1);
    lf_set(motors.left_power, 0.2);
    lf_set(motors.right_power, 0.2);  
    
    if (a_to_d.left_distance->value - start_dist>1.5) {
      static char buf3[17];
      snprintf(buf3, 17, "l: %d, r: %d", IR_LEFT_val->value, IR_RIGHT_val->value);
      lf_set(notify4, buf3);
      if ((IR_LEFT_val->value) && !(IR_RIGHT_val->value)) {
        self->next_turn = -1; //left turn
      } else if (!(IR_LEFT_val->value) && (IR_RIGHT_val->value)) {
        self->next_turn = 1; //right turn
      } else {
        self->next_turn = 0; //wait for computer
      }
      start_dist = a_to_d.left_distance->value;
      lf_set(motors.left_power, 0);
      lf_set(motors.right_power, 0);
      lf_set_mode(MEDIUM_STRAIGHT);
    
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_4(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct a_to_d {
        _angletodistance_left_distance_t* left_distance;
    
    } a_to_d;
    struct gyro {
        _gyroangle_z_t* z;
    
    } gyro;
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    gyro.z = self->_lf_gyro.z;
    _robotlinefollower_external_turn_command_t* external_turn_command = self->_lf_external_turn_command;
    int external_turn_command_width = self->_lf_external_turn_command_width; SUPPRESS_UNUSED_WARNING(external_turn_command_width);
    _robotlinefollower_action_wait_t* action_wait = &self->_lf_action_wait;
    reactor_mode_t* LEFT_TURN = &self->_lf__modes[3];
    lf_mode_change_type_t _lf_LEFT_TURN_change_type = reset_transition;
    reactor_mode_t* RIGHT_TURN = &self->_lf__modes[4];
    lf_mode_change_type_t _lf_RIGHT_TURN_change_type = reset_transition;
    reactor_mode_t* SERVO_WAIT = &self->_lf__modes[5];
    lf_mode_change_type_t _lf_SERVO_WAIT_change_type = reset_transition;
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    _robotlinefollower_notify2_t* notify2 = &self->_lf_notify2;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 253 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    if (self->next_turn  == -1) {
      lf_set(notify1, "MS LEFT");
    
      }
      else if (self->next_turn == 1) {
        lf_set(notify1, "MS RIGHT");
    
      }
      else {
        lf_set(notify1, "MS WAIT");
    
      }
    
    static char buf1[17];
    snprintf(buf1, 17, "A: %f", a_to_d.left_distance->value - start_dist);
    lf_set(notify2, buf1);
    lf_set(motors.left_power, 0.2);
    lf_set(motors.right_power, 0.2);  
    if (a_to_d.left_distance->value - start_dist>7) {
    
      if (self->next_turn  == -1) {
        lf_set_mode(LEFT_TURN);
      //   lf_set(motors.left_power, 0);
      // lf_set(motors.right_power, 0);
        lf_set(motors.left_power, -0.35);
        lf_set(motors.right_power, 0.35);
        start_angle = gyro.z->value;
      }
      else if (self->next_turn == 1) {
      //   lf_set(motors.left_power, 0);
      // lf_set(motors.right_power, 0);
        lf_set(motors.left_power, 0.4);
        lf_set(motors.right_power, -0.4);
        lf_set_mode(RIGHT_TURN);
        start_angle = gyro.z->value;
      }
      else if (self->next_turn == 0){
        lf_set(motors.left_power, 0);
        lf_set(motors.right_power, 0);
        start_angle = gyro.z->value;
        lf_schedule(action_wait, MSEC(2000));
        lf_set_mode(SERVO_WAIT);
      }
    
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_5(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct a_to_d {
        _angletodistance_left_distance_t* left_distance;
    
    } a_to_d;
    struct gyro {
        _gyroangle_z_t* z;
    
    } gyro;
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    _robotlinefollower_IR_1_val_t* IR_1_val = self->_lf_IR_1_val;
    int IR_1_val_width = self->_lf_IR_1_val_width; SUPPRESS_UNUSED_WARNING(IR_1_val_width);
    gyro.z = self->_lf_gyro.z;
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    _robotlinefollower_notify2_t* notify2 = &self->_lf_notify2;
    reactor_mode_t* DRIVING = &self->_lf__modes[0];
    lf_mode_change_type_t _lf_DRIVING_change_type = reset_transition;
    #line 304 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    lf_set(notify1, "LEFT");
    static char buf[17];
    snprintf(buf, 17, "angle: %f, tot: %f", start_angle - gyro.z->value );
    lf_set(notify2, buf);
    if (IR_1_val->value > 500) {
      lf_set_mode(DRIVING);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_6(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct a_to_d {
        _angletodistance_left_distance_t* left_distance;
    
    } a_to_d;
    struct gyro {
        _gyroangle_z_t* z;
    
    } gyro;
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    _robotlinefollower_IR_1_val_t* IR_1_val = self->_lf_IR_1_val;
    int IR_1_val_width = self->_lf_IR_1_val_width; SUPPRESS_UNUSED_WARNING(IR_1_val_width);
    gyro.z = self->_lf_gyro.z;
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    _robotlinefollower_notify2_t* notify2 = &self->_lf_notify2;
    reactor_mode_t* DRIVING = &self->_lf__modes[0];
    lf_mode_change_type_t _lf_DRIVING_change_type = reset_transition;
    #line 316 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    lf_set(notify1, "RIGHT");
    static char buf[17];
    snprintf(buf, 17, "angle: %f, tot: %f", start_angle - gyro.z->value );
    lf_set(notify2, buf);
    if (IR_1_val->value > 500) {
      lf_set_mode(DRIVING);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_7(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    // Expose the action struct as a local variable whose name matches the action name.
    _robotlinefollower_action_wait_t* action_wait = &self->_lf_action_wait;
    // Set the fields of the action struct to match the current trigger.
    action_wait->is_present = (bool)self->_lf__action_wait.status;
    action_wait->has_value = ((self->_lf__action_wait.tmplt.token) != NULL && (self->_lf__action_wait.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)action_wait, (self->_lf__action_wait.tmplt.token));
    reactor_mode_t* TURN_180 = &self->_lf__modes[6];
    lf_mode_change_type_t _lf_TURN_180_change_type = reset_transition;
    #line 329 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    lf_set_mode(TURN_180);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_8(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct a_to_d {
        _angletodistance_left_distance_t* left_distance;
    
    } a_to_d;
    struct gyro {
        _gyroangle_z_t* z;
    
    } gyro;
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    gyro.z = self->_lf_gyro.z;
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    _robotlinefollower_notify2_t* notify2 = &self->_lf_notify2;
    reactor_mode_t* RIGHT_TURN = &self->_lf__modes[4];
    lf_mode_change_type_t _lf_RIGHT_TURN_change_type = reset_transition;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 336 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    lf_set(motors.left_power, 0.45);
    lf_set(motors.right_power, -0.45);
    lf_set(notify1, "180");
    static char buf[17];
    snprintf(buf, 17, "angle: %f, tot: %f", start_angle - gyro.z->value );
    lf_set(notify2, buf);
    if (start_angle - gyro.z->value > 100) {
      lf_set_mode(RIGHT_TURN);
      lf_set(motors.left_power, 0.4);
      lf_set(motors.right_power, -0.4);
    }
}
#include "include/api/set_undef.h"
_robotlinefollower_self_t* new__robotlinefollower() {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)_lf_new_reactor(sizeof(_robotlinefollower_self_t));
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_action_wait._base.trigger = &self->_lf__action_wait;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_action_wait.parent = (self_base_t*)self;
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set input by default to an always absent default input.
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_drive = &self->_lf_default__drive;
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set the default source reactor pointer
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_default__drive._base.source_reactor = (self_base_t*)self;
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set input by default to an always absent default input.
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_command = &self->_lf_default__command;
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set the default source reactor pointer
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_default__command._base.source_reactor = (self_base_t*)self;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set input by default to an always absent default input.
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_IR_1_val = &self->_lf_default__IR_1_val;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set the default source reactor pointer
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_default__IR_1_val._base.source_reactor = (self_base_t*)self;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set input by default to an always absent default input.
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_IR_LEFT_val = &self->_lf_default__IR_LEFT_val;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set the default source reactor pointer
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_default__IR_LEFT_val._base.source_reactor = (self_base_t*)self;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set input by default to an always absent default input.
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_IR_RIGHT_val = &self->_lf_default__IR_RIGHT_val;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set the default source reactor pointer
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_default__IR_RIGHT_val._base.source_reactor = (self_base_t*)self;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set input by default to an always absent default input.
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_external_turn_command = &self->_lf_default__external_turn_command;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Set the default source reactor pointer
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_default__external_turn_command._base.source_reactor = (self_base_t*)self;
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
    self->_lf_gyro.z_reactions[1] = &self->_lf__reaction_5;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_reactions[2] = &self->_lf__reaction_6;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_reactions[3] = &self->_lf__reaction_8;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.reactions = self->_lf_gyro.z_reactions;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.last = NULL;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.number_of_reactions = 4;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    #ifdef FEDERATED
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.physical_time_of_arrival = NEVER;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    #endif // FEDERATED
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_motors_width = -2;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_a_to_d_width = -2;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_reactions[0] = &self->_lf__reaction_2;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_reactions[1] = &self->_lf__reaction_3;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_reactions[2] = &self->_lf__reaction_4;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_reactions[3] = &self->_lf__reaction_5;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_reactions[4] = &self->_lf__reaction_6;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_reactions[5] = &self->_lf__reaction_8;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_trigger.reactions = self->_lf_a_to_d.left_distance_reactions;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_trigger.last = NULL;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_trigger.number_of_reactions = 6;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf_a_to_d.left_distance_trigger.physical_time_of_arrival = NEVER;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    #line 177 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.number = 0;
    #line 177 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.function = _robotlinefollowerreaction_function_0;
    #line 177 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.self = self;
    #line 177 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 177 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 177 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.name = "?";
    #line 177 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.number = 1;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.function = _robotlinefollowerreaction_function_1;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.self = self;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.name = "?";
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.number = 2;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.function = _robotlinefollowerreaction_function_2;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.self = self;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.name = "?";
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.mode = &self->_lf__modes[0];
    #line 221 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.number = 3;
    #line 221 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.function = _robotlinefollowerreaction_function_3;
    #line 221 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.self = self;
    #line 221 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    #line 221 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.STP_handler = NULL;
    #line 221 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.name = "?";
    #line 221 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.mode = &self->_lf__modes[1];
    #line 252 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_4.number = 4;
    #line 252 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_4.function = _robotlinefollowerreaction_function_4;
    #line 252 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_4.self = self;
    #line 252 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    #line 252 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_4.STP_handler = NULL;
    #line 252 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_4.name = "?";
    #line 252 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_4.mode = &self->_lf__modes[2];
    #line 303 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_5.number = 5;
    #line 303 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_5.function = _robotlinefollowerreaction_function_5;
    #line 303 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_5.self = self;
    #line 303 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    #line 303 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_5.STP_handler = NULL;
    #line 303 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_5.name = "?";
    #line 303 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_5.mode = &self->_lf__modes[3];
    #line 315 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_6.number = 6;
    #line 315 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_6.function = _robotlinefollowerreaction_function_6;
    #line 315 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_6.self = self;
    #line 315 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_6.deadline_violation_handler = NULL;
    #line 315 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_6.STP_handler = NULL;
    #line 315 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_6.name = "?";
    #line 315 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_6.mode = &self->_lf__modes[4];
    #line 328 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_7.number = 7;
    #line 328 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_7.function = _robotlinefollowerreaction_function_7;
    #line 328 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_7.self = self;
    #line 328 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_7.deadline_violation_handler = NULL;
    #line 328 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_7.STP_handler = NULL;
    #line 328 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_7.name = "?";
    #line 328 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_7.mode = &self->_lf__modes[5];
    #line 335 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_8.number = 8;
    #line 335 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_8.function = _robotlinefollowerreaction_function_8;
    #line 335 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_8.self = self;
    #line 335 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_8.deadline_violation_handler = NULL;
    #line 335 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_8.STP_handler = NULL;
    #line 335 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_8.name = "?";
    #line 335 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_8.mode = &self->_lf__modes[6];
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__t.last = NULL;
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_1;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__action_wait.last = NULL;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__action_wait.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__action_wait_reactions[0] = &self->_lf__reaction_7;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__action_wait.reactions = &self->_lf__action_wait_reactions[0];
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__action_wait.number_of_reactions = 1;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__action_wait.physical_time_of_arrival = NEVER;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    self->_lf__action_wait.is_physical = false;
    
    self->_lf__action_wait.tmplt.type.element_size = 0;
    self->_lf_action_wait.type.element_size = 0;
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__drive.last = NULL;
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__drive.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__drive.tmplt.type.element_size = sizeof(bool);
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__command.last = NULL;
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__command.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__command.tmplt.type.element_size = sizeof(string);
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val.last = NULL;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val_reactions[0] = &self->_lf__reaction_2;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val_reactions[1] = &self->_lf__reaction_5;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val_reactions[2] = &self->_lf__reaction_6;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val.reactions = &self->_lf__IR_1_val_reactions[0];
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val.number_of_reactions = 3;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_1_val.physical_time_of_arrival = NEVER;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    self->_lf__IR_1_val.tmplt.type.element_size = sizeof(uint16_t);
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val.last = NULL;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val_reactions[0] = &self->_lf__reaction_2;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val_reactions[1] = &self->_lf__reaction_3;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val.reactions = &self->_lf__IR_LEFT_val_reactions[0];
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val.number_of_reactions = 2;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_LEFT_val.physical_time_of_arrival = NEVER;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    self->_lf__IR_LEFT_val.tmplt.type.element_size = sizeof(bool);
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val.last = NULL;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val_reactions[0] = &self->_lf__reaction_2;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val_reactions[1] = &self->_lf__reaction_3;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val.reactions = &self->_lf__IR_RIGHT_val_reactions[0];
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val.number_of_reactions = 2;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__IR_RIGHT_val.physical_time_of_arrival = NEVER;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    self->_lf__IR_RIGHT_val.tmplt.type.element_size = sizeof(bool);
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__external_turn_command.last = NULL;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__external_turn_command.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__external_turn_command_reactions[0] = &self->_lf__reaction_4;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__external_turn_command.reactions = &self->_lf__external_turn_command_reactions[0];
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__external_turn_command.number_of_reactions = 1;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__external_turn_command.physical_time_of_arrival = NEVER;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    self->_lf__external_turn_command.tmplt.type.element_size = sizeof(int);
    // Initialize modes
    self_base_t* _lf_self_base = (self_base_t*)self;
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[0].state = &_lf_self_base->_lf__mode_state;
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[0].name = "DRIVING";
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[0].deactivation_time = 0;
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[0].flags = 0;
    #line 220 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[1].state = &_lf_self_base->_lf__mode_state;
    #line 220 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[1].name = "SHORT_STRAIGHT";
    #line 220 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[1].deactivation_time = 0;
    #line 220 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[1].flags = 0;
    #line 251 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[2].state = &_lf_self_base->_lf__mode_state;
    #line 251 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[2].name = "MEDIUM_STRAIGHT";
    #line 251 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[2].deactivation_time = 0;
    #line 251 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[2].flags = 0;
    #line 302 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[3].state = &_lf_self_base->_lf__mode_state;
    #line 302 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[3].name = "LEFT_TURN";
    #line 302 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[3].deactivation_time = 0;
    #line 302 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[3].flags = 0;
    #line 314 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[4].state = &_lf_self_base->_lf__mode_state;
    #line 314 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[4].name = "RIGHT_TURN";
    #line 314 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[4].deactivation_time = 0;
    #line 314 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[4].flags = 0;
    #line 327 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[5].state = &_lf_self_base->_lf__mode_state;
    #line 327 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[5].name = "SERVO_WAIT";
    #line 327 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[5].deactivation_time = 0;
    #line 327 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[5].flags = 0;
    #line 333 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[6].state = &_lf_self_base->_lf__mode_state;
    #line 333 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[6].name = "TURN_180";
    #line 333 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[6].deactivation_time = 0;
    #line 333 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__modes[6].flags = 0;
    // Initialize mode state
    _lf_self_base->_lf__mode_state.parent_mode = NULL;
    _lf_self_base->_lf__mode_state.initial_mode = &self->_lf__modes[0];
    _lf_self_base->_lf__mode_state.current_mode = _lf_self_base->_lf__mode_state.initial_mode;
    _lf_self_base->_lf__mode_state.next_mode = NULL;
    _lf_self_base->_lf__mode_state.mode_change = no_transition;
    return self;
}
