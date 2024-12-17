#include "include/api/api.h"
#include "include/TestAvoidance/RobotLineFollower.h"
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
    #line 106 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    lf_set(gyro.trigger, true);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_1(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    #line 110 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    lf_set(notify1, "INIT");
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_2(void* instance_args) {
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
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
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
    // snprintf(buf1, 17, "left: %f", left_motor_power);
    // lf_set(notify2, buf1);  
    snprintf(buf2, 17, "right: %f", right_motor_power);
    lf_set(notify3, buf2);
    // snprintf(buf3, 17, "l: %d, r: %d", IR_LEFT_val->value, IR_RIGHT_val->value);
    // lf_set(notify4, buf3);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_3(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robotlinefollower_avoidReduceSpeed_t* avoidReduceSpeed = self->_lf_avoidReduceSpeed;
    int avoidReduceSpeed_width = self->_lf_avoidReduceSpeed_width; SUPPRESS_UNUSED_WARNING(avoidReduceSpeed_width);
    _robotlinefollower_notify2_t* notify2 = &self->_lf_notify2;
    _robotlinefollower_notify4_t* notify4 = &self->_lf_notify4;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 139 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    if (avoidReduceSpeed->value) {
      lf_set(notify2, "SLOWING");
      lf_set(motors.left_power, 0.15f);
      lf_set(motors.right_power, 0.15f);
      int AGA_next_val = self->AGA_next_action;
      static char buf1[17];
      snprintf(buf1, 17, "AGA: %d", AGA_next_val);
      lf_set(notify4, buf1);
    }
    else {
    
      lf_set(motors.left_power, 0.3f);
      lf_set(motors.right_power, 0.3f);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_4(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robotlinefollower_avoidGoAround_t* avoidGoAround = self->_lf_avoidGoAround;
    int avoidGoAround_width = self->_lf_avoidGoAround_width; SUPPRESS_UNUSED_WARNING(avoidGoAround_width);
    reactor_mode_t* AVOID_GO_AROUND = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_AVOID_GO_AROUND_change_type = reset_transition;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 155 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    if(avoidGoAround->value) {
      lf_set(motors.left_power, 0.2f);
      lf_set(motors.right_power, -0.2f);
      lf_set_mode(AVOID_GO_AROUND);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_5(void* instance_args) {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct gyro {
        _gyroangle_z_t* z;
    
    } gyro;
    struct a_to_d {
        _angletodistance_left_distance_t* left_distance;
    
    } a_to_d;
    gyro.z = self->_lf_gyro.z;
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    reactor_mode_t* RIGHT_TURN = &self->_lf__modes[3];
    lf_mode_change_type_t _lf_RIGHT_TURN_change_type = reset_transition;
    reactor_mode_t* STRAIGHT = &self->_lf__modes[4];
    lf_mode_change_type_t _lf_STRAIGHT_change_type = reset_transition;
    reactor_mode_t* LEFT_TURN = &self->_lf__modes[2];
    lf_mode_change_type_t _lf_LEFT_TURN_change_type = reset_transition;
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    if(self->AGA_next_action == -1) {
      start_angle = gyro.z->value;
      lf_set_mode(RIGHT_TURN);
    }
    else if(self->AGA_next_action == 0) {
      start_dist = a_to_d.left_distance->value;
      lf_set_mode(STRAIGHT);
    }
    else if(self->AGA_next_action == 1) {
      start_angle = gyro.z->value;
      lf_set_mode(LEFT_TURN);
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
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    gyro.z = self->_lf_gyro.z;
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    _robotlinefollower_notify2_t* notify2 = &self->_lf_notify2;
    _robotlinefollower_notify4_t* notify4 = &self->_lf_notify4;
    reactor_mode_t* AVOID_GO_AROUND = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_AVOID_GO_AROUND_change_type = reset_transition;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    lf_set(notify1, "LEFT");
    static char buf[17];
    snprintf(buf, 17, "angle: %f, tot: %f", start_angle - gyro.z->value );
    lf_set(notify2, buf);
    int AGA_next_val = self->AGA_next_action;
    static char buf1[17];
    snprintf(buf1, 17, "AGA: %d", AGA_next_val);
    lf_set(notify4, buf1);
    if (start_angle - gyro.z->value < -70) {
      lf_set(motors.left_power, 0.2);
      lf_set(motors.right_power, 0.2);
      self->AGA_next_action = 0;
      lf_set_mode(AVOID_GO_AROUND);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_7(void* instance_args) {
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
    _robotlinefollower_notify4_t* notify4 = &self->_lf_notify4;
    reactor_mode_t* AVOID_GO_AROUND = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_AVOID_GO_AROUND_change_type = reset_transition;
    reactor_mode_t* FOLLOWING = &self->_lf__modes[0];
    lf_mode_change_type_t _lf_FOLLOWING_change_type = reset_transition;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 205 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    lf_set(notify1, "RIGHT");
    static char buf[17];
    snprintf(buf, 17, "angle: %f, tot: %f", start_angle - gyro.z->value );
    lf_set(notify2, buf);
    int AGA_next_val = self->AGA_next_action;
    static char buf1[17];
    snprintf(buf1, 17, "AGA: %d", AGA_next_val);
    lf_set(notify4, buf1);
    if (start_angle - gyro.z->value > 70) {
      if(self->AGA_next_action == 2) {
        //trigger CV to flip avoidGoAround to false
        self->AGA_next_action = -1;   //prepare for next avoidance routine
        lf_set(notify1, "FOLLOWAGAIN");
        lf_set_mode(FOLLOWING);
      }
      else {
        lf_set(motors.left_power, 0.2);
        lf_set(motors.right_power, 0.2);
        self->AGA_next_action = 0;
        lf_set_mode(AVOID_GO_AROUND);
      }  
    }
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
    _robotlinefollower_IR_1_val_t* IR_1_val = self->_lf_IR_1_val;
    int IR_1_val_width = self->_lf_IR_1_val_width; SUPPRESS_UNUSED_WARNING(IR_1_val_width);
    _robotlinefollower_IR_LEFT_val_t* IR_LEFT_val = self->_lf_IR_LEFT_val;
    int IR_LEFT_val_width = self->_lf_IR_LEFT_val_width; SUPPRESS_UNUSED_WARNING(IR_LEFT_val_width);
    _robotlinefollower_IR_RIGHT_val_t* IR_RIGHT_val = self->_lf_IR_RIGHT_val;
    int IR_RIGHT_val_width = self->_lf_IR_RIGHT_val_width; SUPPRESS_UNUSED_WARNING(IR_RIGHT_val_width);
    a_to_d.left_distance = self->_lf_a_to_d.left_distance;
    gyro.z = self->_lf_gyro.z;
    _robotlinefollower_notify1_t* notify1 = &self->_lf_notify1;
    _robotlinefollower_notify2_t* notify2 = &self->_lf_notify2;
    _robotlinefollower_notify4_t* notify4 = &self->_lf_notify4;
    reactor_mode_t* AVOID_GO_AROUND = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_AVOID_GO_AROUND_change_type = reset_transition;
    reactor_mode_t* ALIGN_WITH_LINE = &self->_lf__modes[5];
    lf_mode_change_type_t _lf_ALIGN_WITH_LINE_change_type = reset_transition;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 233 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    static char buf0[17];
    snprintf(buf0, 17, "IR_1: %d", IR_1_val->value);
    lf_set(notify1, buf0);
    static char buf[17];
    snprintf(buf, 17, "STR_A: %f", a_to_d.left_distance->value - start_dist );
    lf_set(notify2, buf);
    int AGA_next_val = self->AGA_next_action;
    static char buf1[17];
    snprintf(buf1, 17, "AGA: %d", AGA_next_val);
    lf_set(notify4, buf1);
    if ((IR_LEFT_val->value && IR_RIGHT_val->value) || IR_1_val->value > 180) {
      self->AGA_next_action = 2;
      start_dist = a_to_d.left_distance->value;
      lf_set_mode(ALIGN_WITH_LINE);
    }
    else if (a_to_d.left_distance->value - start_dist > 20) {
      lf_set(motors.left_power, -0.2);
      lf_set(motors.right_power, 0.2);
      self->AGA_next_action = 1;
      lf_set_mode(AVOID_GO_AROUND);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotlinefollowerreaction_function_9(void* instance_args) {
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
    reactor_mode_t* RIGHT_TURN = &self->_lf__modes[3];
    lf_mode_change_type_t _lf_RIGHT_TURN_change_type = reset_transition;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 260 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    if(a_to_d.left_distance->value - start_dist > 9) {
      lf_set(motors.left_power, 0.2);
      lf_set(motors.right_power, -0.2);
      start_angle = gyro.z->value;
      lf_set_mode(RIGHT_TURN);
    }
}
#include "include/api/set_undef.h"
_robotlinefollower_self_t* new__robotlinefollower() {
    _robotlinefollower_self_t* self = (_robotlinefollower_self_t*)_lf_new_reactor(sizeof(_robotlinefollower_self_t));
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Set input by default to an always absent default input.
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_avoidReduceSpeed = &self->_lf_default__avoidReduceSpeed;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Set the default source reactor pointer
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_default__avoidReduceSpeed._base.source_reactor = (self_base_t*)self;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Set input by default to an always absent default input.
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_avoidGoAround = &self->_lf_default__avoidGoAround;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Set the default source reactor pointer
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_default__avoidGoAround._base.source_reactor = (self_base_t*)self;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Set input by default to an always absent default input.
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_IR_1_val = &self->_lf_default__IR_1_val;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Set the default source reactor pointer
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_default__IR_1_val._base.source_reactor = (self_base_t*)self;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Set input by default to an always absent default input.
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_IR_LEFT_val = &self->_lf_default__IR_LEFT_val;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Set the default source reactor pointer
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_default__IR_LEFT_val._base.source_reactor = (self_base_t*)self;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Set input by default to an always absent default input.
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_IR_RIGHT_val = &self->_lf_default__IR_RIGHT_val;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Set the default source reactor pointer
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_default__IR_RIGHT_val._base.source_reactor = (self_base_t*)self;
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
    self->_lf_gyro.z_reactions[0] = &self->_lf__reaction_5;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_reactions[1] = &self->_lf__reaction_6;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_reactions[2] = &self->_lf__reaction_7;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_reactions[3] = &self->_lf__reaction_8;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_reactions[4] = &self->_lf__reaction_9;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.reactions = self->_lf_gyro.z_reactions;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.last = NULL;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
    self->_lf_gyro.z_trigger.number_of_reactions = 5;
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
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_a_to_d.left_distance_trigger.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_a_to_d.left_distance_reactions[0] = &self->_lf__reaction_5;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_a_to_d.left_distance_reactions[1] = &self->_lf__reaction_6;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_a_to_d.left_distance_reactions[2] = &self->_lf__reaction_7;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_a_to_d.left_distance_reactions[3] = &self->_lf__reaction_8;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_a_to_d.left_distance_reactions[4] = &self->_lf__reaction_9;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_a_to_d.left_distance_trigger.reactions = self->_lf_a_to_d.left_distance_reactions;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_a_to_d.left_distance_trigger.last = NULL;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_a_to_d.left_distance_trigger.number_of_reactions = 5;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf_a_to_d.left_distance_trigger.physical_time_of_arrival = NEVER;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_0.number = 0;
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_0.function = _robotlinefollowerreaction_function_0;
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_0.self = self;
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_0.name = "?";
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 109 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_1.number = 1;
    #line 109 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_1.function = _robotlinefollowerreaction_function_1;
    #line 109 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_1.self = self;
    #line 109 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 109 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 109 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_1.name = "?";
    #line 109 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_2.number = 2;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_2.function = _robotlinefollowerreaction_function_2;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_2.self = self;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_2.name = "?";
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_2.mode = &self->_lf__modes[0];
    #line 138 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_3.number = 3;
    #line 138 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_3.function = _robotlinefollowerreaction_function_3;
    #line 138 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_3.self = self;
    #line 138 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    #line 138 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_3.STP_handler = NULL;
    #line 138 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_3.name = "?";
    #line 138 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_3.mode = &self->_lf__modes[0];
    #line 154 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_4.number = 4;
    #line 154 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_4.function = _robotlinefollowerreaction_function_4;
    #line 154 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_4.self = self;
    #line 154 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    #line 154 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_4.STP_handler = NULL;
    #line 154 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_4.name = "?";
    #line 154 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_4.mode = &self->_lf__modes[0];
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_5.number = 5;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_5.function = _robotlinefollowerreaction_function_5;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_5.self = self;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_5.STP_handler = NULL;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_5.name = "?";
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_5.mode = &self->_lf__modes[1];
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_6.number = 6;
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_6.function = _robotlinefollowerreaction_function_6;
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_6.self = self;
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_6.deadline_violation_handler = NULL;
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_6.STP_handler = NULL;
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_6.name = "?";
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_6.mode = &self->_lf__modes[2];
    #line 204 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_7.number = 7;
    #line 204 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_7.function = _robotlinefollowerreaction_function_7;
    #line 204 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_7.self = self;
    #line 204 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_7.deadline_violation_handler = NULL;
    #line 204 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_7.STP_handler = NULL;
    #line 204 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_7.name = "?";
    #line 204 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_7.mode = &self->_lf__modes[3];
    #line 232 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_8.number = 8;
    #line 232 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_8.function = _robotlinefollowerreaction_function_8;
    #line 232 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_8.self = self;
    #line 232 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_8.deadline_violation_handler = NULL;
    #line 232 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_8.STP_handler = NULL;
    #line 232 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_8.name = "?";
    #line 232 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_8.mode = &self->_lf__modes[4];
    #line 259 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_9.number = 9;
    #line 259 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_9.function = _robotlinefollowerreaction_function_9;
    #line 259 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_9.self = self;
    #line 259 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_9.deadline_violation_handler = NULL;
    #line 259 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_9.STP_handler = NULL;
    #line 259 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_9.name = "?";
    #line 259 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__reaction_9.mode = &self->_lf__modes[5];
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__t.last = NULL;
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
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
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidReduceSpeed.last = NULL;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidReduceSpeed.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidReduceSpeed_reactions[0] = &self->_lf__reaction_3;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidReduceSpeed.reactions = &self->_lf__avoidReduceSpeed_reactions[0];
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidReduceSpeed.number_of_reactions = 1;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidReduceSpeed.physical_time_of_arrival = NEVER;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED
    self->_lf__avoidReduceSpeed.tmplt.type.element_size = sizeof(bool);
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidGoAround.last = NULL;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidGoAround.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidGoAround_reactions[0] = &self->_lf__reaction_4;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidGoAround.reactions = &self->_lf__avoidGoAround_reactions[0];
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidGoAround.number_of_reactions = 1;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__avoidGoAround.physical_time_of_arrival = NEVER;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED
    self->_lf__avoidGoAround.tmplt.type.element_size = sizeof(bool);
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_1_val.last = NULL;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_1_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_1_val_reactions[0] = &self->_lf__reaction_2;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_1_val_reactions[1] = &self->_lf__reaction_8;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_1_val.reactions = &self->_lf__IR_1_val_reactions[0];
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_1_val.number_of_reactions = 2;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_1_val.physical_time_of_arrival = NEVER;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED
    self->_lf__IR_1_val.tmplt.type.element_size = sizeof(uint16_t);
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_LEFT_val.last = NULL;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_LEFT_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_LEFT_val_reactions[0] = &self->_lf__reaction_2;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_LEFT_val_reactions[1] = &self->_lf__reaction_8;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_LEFT_val.reactions = &self->_lf__IR_LEFT_val_reactions[0];
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_LEFT_val.number_of_reactions = 2;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_LEFT_val.physical_time_of_arrival = NEVER;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED
    self->_lf__IR_LEFT_val.tmplt.type.element_size = sizeof(bool);
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_RIGHT_val.last = NULL;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_RIGHT_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_RIGHT_val_reactions[0] = &self->_lf__reaction_2;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_RIGHT_val_reactions[1] = &self->_lf__reaction_8;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_RIGHT_val.reactions = &self->_lf__IR_RIGHT_val_reactions[0];
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_RIGHT_val.number_of_reactions = 2;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #ifdef FEDERATED
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__IR_RIGHT_val.physical_time_of_arrival = NEVER;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    #endif // FEDERATED
    self->_lf__IR_RIGHT_val.tmplt.type.element_size = sizeof(bool);
    // Initialize modes
    self_base_t* _lf_self_base = (self_base_t*)self;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[0].state = &_lf_self_base->_lf__mode_state;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[0].name = "FOLLOWING";
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[0].deactivation_time = 0;
    #line 114 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[0].flags = 0;
    #line 164 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[1].state = &_lf_self_base->_lf__mode_state;
    #line 164 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[1].name = "AVOID_GO_AROUND";
    #line 164 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[1].deactivation_time = 0;
    #line 164 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[1].flags = 0;
    #line 184 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[2].state = &_lf_self_base->_lf__mode_state;
    #line 184 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[2].name = "LEFT_TURN";
    #line 184 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[2].deactivation_time = 0;
    #line 184 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[2].flags = 0;
    #line 203 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[3].state = &_lf_self_base->_lf__mode_state;
    #line 203 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[3].name = "RIGHT_TURN";
    #line 203 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[3].deactivation_time = 0;
    #line 203 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[3].flags = 0;
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[4].state = &_lf_self_base->_lf__mode_state;
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[4].name = "STRAIGHT";
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[4].deactivation_time = 0;
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[4].flags = 0;
    #line 258 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[5].state = &_lf_self_base->_lf__mode_state;
    #line 258 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[5].name = "ALIGN_WITH_LINE";
    #line 258 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[5].deactivation_time = 0;
    #line 258 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    self->_lf__modes[5].flags = 0;
    // Initialize mode state
    _lf_self_base->_lf__mode_state.parent_mode = NULL;
    _lf_self_base->_lf__mode_state.initial_mode = &self->_lf__modes[0];
    _lf_self_base->_lf__mode_state.current_mode = _lf_self_base->_lf__mode_state.initial_mode;
    _lf_self_base->_lf__mode_state.next_mode = NULL;
    _lf_self_base->_lf__mode_state.mode_change = no_transition;
    return self;
}
