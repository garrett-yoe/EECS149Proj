#include "include/api/api.h"
#include "include/AvoidanceRoutine/RobotWithAvoidance.h"
#include "_robotwithavoidance.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _robotwithavoidancereaction_function_0(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _robotwithavoidance_notify_t* notify = &self->_lf_notify;
    _robotwithavoidance_returnToLine_t* returnToLine = &self->_lf_returnToLine;
    #line 82 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    lf_set(notify, "INIT");
    returnToLine.value = false;
    
    //set up PWM for both servos
    gpio_set_function(SERVO_1);
    gpio_set_function(SERVO_2);
    uint slice_num = pwm_gpio_to_slice_num(SERVO_1);
    pwm_set_wrap(slice_num, 1000);
    pwm_set_clockdiv(slice_num, 2500);  //20ms (20000us) period on 125MHz clock speed
    
    gpio_init(IR_1);
    gpio_set_dir(IR_1, GPIO_IN);
    gpio_init(IR_2);
    gpio_set_dir(IR_2, GPIO_IN);
    adc_gpio_init(IR_3);
    adc_gpio_init(IR_4);
    adc_gpio_init(IR_5);
    gpio_init(IR_6);
    gpio_set_dir(IR_6, GPIO_IN);
    gpio_init(IR_7);
    gpio_set_dir(IR_7, GPIO_IN);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_1(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robotwithavoidance_drive_t* drive = self->_lf_drive;
    int drive_width = self->_lf_drive_width; SUPPRESS_UNUSED_WARNING(drive_width);
    reactor_mode_t* DRIVING = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_DRIVING_change_type = reset_transition;
    _robotwithavoidance_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 107 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    if (drive->value) {
      lf_set_mode(DRIVING);
      lf_set(notify, "DRIVING");
      lf_set(motors.left_power, 0.1f);
      lf_set(motors.right_power, 0.1f);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_2(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robotwithavoidance_drive_t* drive = self->_lf_drive;
    int drive_width = self->_lf_drive_width; SUPPRESS_UNUSED_WARNING(drive_width);
    reactor_mode_t* STOPPED = &self->_lf__modes[0];
    lf_mode_change_type_t _lf_STOPPED_change_type = reset_transition;
    _robotwithavoidance_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 118 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    if (!drive->value) {
      lf_set_mode(STOPPED);
      lf_set(notify, "STOPPED");
      lf_set(motors.left_power, 0);
      lf_set(motors.right_power, 0);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_3(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robotwithavoidance_avoidGoAround_t* avoidGoAround = self->_lf_avoidGoAround;
    int avoidGoAround_width = self->_lf_avoidGoAround_width; SUPPRESS_UNUSED_WARNING(avoidGoAround_width);
    reactor_mode_t* AVOID_GO_AROUND = &self->_lf__modes[3];
    lf_mode_change_type_t _lf_AVOID_GO_AROUND_change_type = reset_transition;
    _robotwithavoidance_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 126 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    if (avoidGoAround->value) {
      lf_set_mode(AVOID_GO_AROUND);
      lf_set(notify, "AVOID_GO_AROUND")
      lf_set(motors.left_power, 0.1f);
      lf_set(motors.right_power, -0.15f);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_4(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robotwithavoidance_avoidReduceSpeed_t* avoidReduceSpeed = self->_lf_avoidReduceSpeed;
    int avoidReduceSpeed_width = self->_lf_avoidReduceSpeed_width; SUPPRESS_UNUSED_WARNING(avoidReduceSpeed_width);
    reactor_mode_t* AVOID_REDUCE_SPEED = &self->_lf__modes[4];
    lf_mode_change_type_t _lf_AVOID_REDUCE_SPEED_change_type = reset_transition;
    _robotwithavoidance_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 136 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    if (avoidReduceSpeed->value) {
      lf_set_mode(AVOID_REDUCE_SPEED);
      lf_set(notify, "AVOID_REDUCE_SPEED")
      lf_set(motors.left_power, 0.05f);
      lf_set(motors.right_power, 0.05f);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_5(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robotwithavoidance_IR_3_val_t* IR_3_val = self->_lf_IR_3_val;
    int IR_3_val_width = self->_lf_IR_3_val_width; SUPPRESS_UNUSED_WARNING(IR_3_val_width);
    _robotwithavoidance_IR_4_val_t* IR_4_val = self->_lf_IR_4_val;
    int IR_4_val_width = self->_lf_IR_4_val_width; SUPPRESS_UNUSED_WARNING(IR_4_val_width);
    _robotwithavoidance_IR_5_val_t* IR_5_val = self->_lf_IR_5_val;
    int IR_5_val_width = self->_lf_IR_5_val_width; SUPPRESS_UNUSED_WARNING(IR_5_val_width);
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 146 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_6(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robotwithavoidance_grabObject_t* grabObject = self->_lf_grabObject;
    int grabObject_width = self->_lf_grabObject_width; SUPPRESS_UNUSED_WARNING(grabObject_width);
    _robotwithavoidance_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 150 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    if (grabObject->value)  {
      pwm_set_chan_level(slice_num, PWM_CHAN_A, 500);   //actuate left servo to 90degrees (50% duty cycle)
      pwm_set_chan_level(slice_num, PWM_CHAN_B, 500);   //actuate right servo to 90degrees (50% duty cycle)
      pwm_set_enabled(slice_num, true);
      sleep(2sec);
      lf_set(grabObject, false);
      lf_set(objectGrabbed, true);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_7(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 174 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    lf_schedule(right_turn);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_8(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 177 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    lf_set(motors.left_power, 0.1f);
    lf_set(motors.right_power, 0.1f);
    lf_schedule(straight1, 250msec);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_9(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 182 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    lf_set(motors.left_power, -0.1f);
    lf_set(motors.right_power, 0.1f);
    lf_schedule(left_turn, 250msec);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_10(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 187 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    lf_set(motors.left_power, 0.1f);
    lf_set(motors.right_power, 0.1f);
    lf_schedule(straight2, 1sec);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_11(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 192 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    lf_set(motors.left_power, -0.1f);
    lf_set(motors.right_power, 0.1f);
    lf_schedule(left_turn2, 250msec);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_12(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 197 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    lf_set(motors.left_power, 0.1f);
    lf_set(motors.right_power, 0.1f);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_13(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _robotwithavoidance_IR_2_val_t* IR_2_val = self->_lf_IR_2_val;
    int IR_2_val_width = self->_lf_IR_2_val_width; SUPPRESS_UNUSED_WARNING(IR_2_val_width);
    _robotwithavoidance_IR_3_val_t* IR_3_val = self->_lf_IR_3_val;
    int IR_3_val_width = self->_lf_IR_3_val_width; SUPPRESS_UNUSED_WARNING(IR_3_val_width);
    _robotwithavoidance_IR_4_val_t* IR_4_val = self->_lf_IR_4_val;
    int IR_4_val_width = self->_lf_IR_4_val_width; SUPPRESS_UNUSED_WARNING(IR_4_val_width);
    _robotwithavoidance_returnToLine_t* returnToLine = &self->_lf_returnToLine;
    #line 203 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    //if middle three IR sensors sense a line
    if(IR_2_val->value <= 50 && IR_3_val->value <= 50 && IR_4_val->value <= 50) {
      lf_schedule(returnToLine, 0);
    }
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_14(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    // Expose the action struct as a local variable whose name matches the action name.
    _robotwithavoidance_returnToLine_t* returnToLine = &self->_lf_returnToLine;
    // Set the fields of the action struct to match the current trigger.
    returnToLine->is_present = (bool)self->_lf__returnToLine.status;
    returnToLine->has_value = ((self->_lf__returnToLine.tmplt.token) != NULL && (self->_lf__returnToLine.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)returnToLine, (self->_lf__returnToLine.tmplt.token));
    reactor_mode_t* DRIVING = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_DRIVING_change_type = reset_transition;
    _robotwithavoidance_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 209 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    //read CV command to turn left or right to return path to cargo
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotwithavoidancereaction_function_15(void* instance_args) {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    _robotwithavoidance_avoidReduceSpeed_t* avoidReduceSpeed = self->_lf_avoidReduceSpeed;
    int avoidReduceSpeed_width = self->_lf_avoidReduceSpeed_width; SUPPRESS_UNUSED_WARNING(avoidReduceSpeed_width);
    reactor_mode_t* DRIVING = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_DRIVING_change_type = reset_transition;
    _robotwithavoidance_notify_t* notify = &self->_lf_notify;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    #line 219 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    if (!avoidReduceSpeed->value) {   
      lf_set_mode(DRIVING);
      lf_set(notify, "DRIVING");
      lf_set(motors.left_power, 0.1f);
      lf_set(motors.right_power, 0.1f);
    }
}
#include "include/api/set_undef.h"
_robotwithavoidance_self_t* new__robotwithavoidance() {
    _robotwithavoidance_self_t* self = (_robotwithavoidance_self_t*)_lf_new_reactor(sizeof(_robotwithavoidance_self_t));
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_returnToLine._base.trigger = &self->_lf__returnToLine;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_returnToLine.parent = (self_base_t*)self;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_drive = &self->_lf_default__drive;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__drive._base.source_reactor = (self_base_t*)self;
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_IR_1_val = &self->_lf_default__IR_1_val;
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__IR_1_val._base.source_reactor = (self_base_t*)self;
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_IR_2_val = &self->_lf_default__IR_2_val;
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__IR_2_val._base.source_reactor = (self_base_t*)self;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_IR_3_val = &self->_lf_default__IR_3_val;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__IR_3_val._base.source_reactor = (self_base_t*)self;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_IR_4_val = &self->_lf_default__IR_4_val;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__IR_4_val._base.source_reactor = (self_base_t*)self;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_IR_5_val = &self->_lf_default__IR_5_val;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__IR_5_val._base.source_reactor = (self_base_t*)self;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_IR_6_val = &self->_lf_default__IR_6_val;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__IR_6_val._base.source_reactor = (self_base_t*)self;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_IR_7_val = &self->_lf_default__IR_7_val;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__IR_7_val._base.source_reactor = (self_base_t*)self;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_grabObject = &self->_lf_default__grabObject;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__grabObject._base.source_reactor = (self_base_t*)self;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_avoidGoAround = &self->_lf_default__avoidGoAround;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__avoidGoAround._base.source_reactor = (self_base_t*)self;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set input by default to an always absent default input.
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_avoidReduceSpeed = &self->_lf_default__avoidReduceSpeed;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Set the default source reactor pointer
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf_default__avoidReduceSpeed._base.source_reactor = (self_base_t*)self;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_motors_width = -2;
    #line 81 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.number = 0;
    #line 81 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.function = _robotwithavoidancereaction_function_0;
    #line 81 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.self = self;
    #line 81 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 81 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 81 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.name = "?";
    #line 81 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 106 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_1.number = 1;
    #line 106 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_1.function = _robotwithavoidancereaction_function_1;
    #line 106 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_1.self = self;
    #line 106 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 106 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 106 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_1.name = "?";
    #line 106 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_1.mode = &self->_lf__modes[0];
    #line 117 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_2.number = 2;
    #line 117 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_2.function = _robotwithavoidancereaction_function_2;
    #line 117 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_2.self = self;
    #line 117 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 117 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 117 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_2.name = "?";
    #line 117 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_2.mode = &self->_lf__modes[1];
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_3.number = 3;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_3.function = _robotwithavoidancereaction_function_3;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_3.self = self;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_3.STP_handler = NULL;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_3.name = "?";
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_3.mode = &self->_lf__modes[1];
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_4.number = 4;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_4.function = _robotwithavoidancereaction_function_4;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_4.self = self;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_4.STP_handler = NULL;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_4.name = "?";
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_4.mode = &self->_lf__modes[1];
    #line 145 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_5.number = 5;
    #line 145 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_5.function = _robotwithavoidancereaction_function_5;
    #line 145 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_5.self = self;
    #line 145 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    #line 145 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_5.STP_handler = NULL;
    #line 145 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_5.name = "?";
    #line 145 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_5.mode = &self->_lf__modes[1];
    #line 149 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_6.number = 6;
    #line 149 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_6.function = _robotwithavoidancereaction_function_6;
    #line 149 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_6.self = self;
    #line 149 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_6.deadline_violation_handler = NULL;
    #line 149 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_6.STP_handler = NULL;
    #line 149 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_6.name = "?";
    #line 149 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_6.mode = &self->_lf__modes[1];
    #line 173 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_7.number = 7;
    #line 173 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_7.function = _robotwithavoidancereaction_function_7;
    #line 173 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_7.self = self;
    #line 173 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_7.deadline_violation_handler = NULL;
    #line 173 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_7.STP_handler = NULL;
    #line 173 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_7.name = "?";
    #line 173 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_7.mode = &self->_lf__modes[3];
    #line 176 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_8.number = 8;
    #line 176 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_8.function = _robotwithavoidancereaction_function_8;
    #line 176 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_8.self = self;
    #line 176 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_8.deadline_violation_handler = NULL;
    #line 176 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_8.STP_handler = NULL;
    #line 176 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_8.name = "?";
    #line 176 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_8.mode = &self->_lf__modes[3];
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_9.number = 9;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_9.function = _robotwithavoidancereaction_function_9;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_9.self = self;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_9.deadline_violation_handler = NULL;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_9.STP_handler = NULL;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_9.name = "?";
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_9.mode = &self->_lf__modes[3];
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_10.number = 10;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_10.function = _robotwithavoidancereaction_function_10;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_10.self = self;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_10.deadline_violation_handler = NULL;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_10.STP_handler = NULL;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_10.name = "?";
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_10.mode = &self->_lf__modes[3];
    #line 191 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_11.number = 11;
    #line 191 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_11.function = _robotwithavoidancereaction_function_11;
    #line 191 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_11.self = self;
    #line 191 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_11.deadline_violation_handler = NULL;
    #line 191 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_11.STP_handler = NULL;
    #line 191 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_11.name = "?";
    #line 191 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_11.mode = &self->_lf__modes[3];
    #line 196 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_12.number = 12;
    #line 196 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_12.function = _robotwithavoidancereaction_function_12;
    #line 196 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_12.self = self;
    #line 196 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_12.deadline_violation_handler = NULL;
    #line 196 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_12.STP_handler = NULL;
    #line 196 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_12.name = "?";
    #line 196 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_12.mode = &self->_lf__modes[3];
    #line 202 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_13.number = 13;
    #line 202 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_13.function = _robotwithavoidancereaction_function_13;
    #line 202 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_13.self = self;
    #line 202 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_13.deadline_violation_handler = NULL;
    #line 202 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_13.STP_handler = NULL;
    #line 202 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_13.name = "?";
    #line 202 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_13.mode = &self->_lf__modes[3];
    #line 208 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_14.number = 14;
    #line 208 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_14.function = _robotwithavoidancereaction_function_14;
    #line 208 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_14.self = self;
    #line 208 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_14.deadline_violation_handler = NULL;
    #line 208 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_14.STP_handler = NULL;
    #line 208 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_14.name = "?";
    #line 208 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_14.mode = &self->_lf__modes[3];
    #line 218 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_15.number = 15;
    #line 218 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_15.function = _robotwithavoidancereaction_function_15;
    #line 218 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_15.self = self;
    #line 218 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_15.deadline_violation_handler = NULL;
    #line 218 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_15.STP_handler = NULL;
    #line 218 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_15.name = "?";
    #line 218 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_15.mode = &self->_lf__modes[4];
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__right_turn.last = NULL;
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__right_turn.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__right_turn_reactions[0] = &self->_lf__reaction_8;
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__right_turn.reactions = &self->_lf__right_turn_reactions[0];
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__right_turn.number_of_reactions = 1;
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__right_turn.physical_time_of_arrival = NEVER;
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__right_turn.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__right_turn.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight1.last = NULL;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight1_reactions[0] = &self->_lf__reaction_9;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight1.reactions = &self->_lf__straight1_reactions[0];
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight1.number_of_reactions = 1;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight1.physical_time_of_arrival = NEVER;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__straight1.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__straight1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn.last = NULL;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn_reactions[0] = &self->_lf__reaction_10;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn.reactions = &self->_lf__left_turn_reactions[0];
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn.number_of_reactions = 1;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn.physical_time_of_arrival = NEVER;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__left_turn.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__left_turn.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight2.last = NULL;
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight2_reactions[0] = &self->_lf__reaction_11;
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight2.reactions = &self->_lf__straight2_reactions[0];
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight2.number_of_reactions = 1;
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__straight2.physical_time_of_arrival = NEVER;
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__straight2.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__straight2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn2.last = NULL;
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn2_reactions[0] = &self->_lf__reaction_12;
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn2.reactions = &self->_lf__left_turn2_reactions[0];
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn2.number_of_reactions = 1;
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__left_turn2.physical_time_of_arrival = NEVER;
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__left_turn2.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__left_turn2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__reset.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__reset_reactions[0] = &self->_lf__reaction_7;
    self->_lf__reset.last = NULL;
    self->_lf__reset.reactions = &self->_lf__reset_reactions[0];
    self->_lf__reset.number_of_reactions = 1;
    self->_lf__reset.is_timer = false;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__returnToLine.last = NULL;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__returnToLine.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__returnToLine_reactions[0] = &self->_lf__reaction_14;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__returnToLine.reactions = &self->_lf__returnToLine_reactions[0];
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__returnToLine.number_of_reactions = 1;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__returnToLine.physical_time_of_arrival = NEVER;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__returnToLine.is_physical = false;
    
    self->_lf__returnToLine.tmplt.type.element_size = 0;
    self->_lf_returnToLine.type.element_size = 0;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__drive.last = NULL;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__drive.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__drive_reactions[0] = &self->_lf__reaction_1;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__drive_reactions[1] = &self->_lf__reaction_2;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__drive.reactions = &self->_lf__drive_reactions[0];
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__drive.number_of_reactions = 2;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__drive.physical_time_of_arrival = NEVER;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__drive.tmplt.type.element_size = sizeof(bool);
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_1_val.last = NULL;
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_1_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__IR_1_val.tmplt.type.element_size = sizeof(int);
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_2_val.last = NULL;
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_2_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_2_val_reactions[0] = &self->_lf__reaction_13;
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_2_val.reactions = &self->_lf__IR_2_val_reactions[0];
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_2_val.number_of_reactions = 1;
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_2_val.physical_time_of_arrival = NEVER;
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__IR_2_val.tmplt.type.element_size = sizeof(int);
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_3_val.last = NULL;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_3_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_3_val_reactions[0] = &self->_lf__reaction_5;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_3_val_reactions[1] = &self->_lf__reaction_13;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_3_val.reactions = &self->_lf__IR_3_val_reactions[0];
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_3_val.number_of_reactions = 2;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_3_val.physical_time_of_arrival = NEVER;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__IR_3_val.tmplt.type.element_size = sizeof(uint16_t);
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_4_val.last = NULL;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_4_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_4_val_reactions[0] = &self->_lf__reaction_5;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_4_val_reactions[1] = &self->_lf__reaction_13;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_4_val.reactions = &self->_lf__IR_4_val_reactions[0];
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_4_val.number_of_reactions = 2;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_4_val.physical_time_of_arrival = NEVER;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__IR_4_val.tmplt.type.element_size = sizeof(uint16_t);
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_5_val.last = NULL;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_5_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_5_val_reactions[0] = &self->_lf__reaction_5;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_5_val.reactions = &self->_lf__IR_5_val_reactions[0];
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_5_val.number_of_reactions = 1;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_5_val.physical_time_of_arrival = NEVER;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__IR_5_val.tmplt.type.element_size = sizeof(uint16_t);
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_6_val.last = NULL;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_6_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__IR_6_val.tmplt.type.element_size = sizeof(int);
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_7_val.last = NULL;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__IR_7_val.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__IR_7_val.tmplt.type.element_size = sizeof(int);
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__grabObject.last = NULL;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__grabObject.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__grabObject_reactions[0] = &self->_lf__reaction_6;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__grabObject.reactions = &self->_lf__grabObject_reactions[0];
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__grabObject.number_of_reactions = 1;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__grabObject.physical_time_of_arrival = NEVER;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__grabObject.tmplt.type.element_size = sizeof(bool);
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidGoAround.last = NULL;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidGoAround.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidGoAround_reactions[0] = &self->_lf__reaction_3;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidGoAround.reactions = &self->_lf__avoidGoAround_reactions[0];
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidGoAround.number_of_reactions = 1;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidGoAround.physical_time_of_arrival = NEVER;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__avoidGoAround.tmplt.type.element_size = sizeof(bool);
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidReduceSpeed.last = NULL;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidReduceSpeed.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidReduceSpeed_reactions[0] = &self->_lf__reaction_4;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidReduceSpeed_reactions[1] = &self->_lf__reaction_15;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidReduceSpeed.reactions = &self->_lf__avoidReduceSpeed_reactions[0];
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidReduceSpeed.number_of_reactions = 2;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__avoidReduceSpeed.physical_time_of_arrival = NEVER;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__avoidReduceSpeed.tmplt.type.element_size = sizeof(bool);
    // Initialize modes
    self_base_t* _lf_self_base = (self_base_t*)self;
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[0].state = &_lf_self_base->_lf__mode_state;
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[0].name = "STOPPED";
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[0].deactivation_time = 0;
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[0].flags = 0;
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[1].state = &_lf_self_base->_lf__mode_state;
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[1].name = "DRIVING";
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[1].deactivation_time = 0;
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[1].flags = 0;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[2].state = &_lf_self_base->_lf__mode_state;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[2].name = "INTERSECTION";
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[2].deactivation_time = 0;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[2].flags = 0;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[3].state = &_lf_self_base->_lf__mode_state;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[3].name = "AVOID_GO_AROUND";
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[3].deactivation_time = 0;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[3].flags = 0;
    #line 216 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[4].state = &_lf_self_base->_lf__mode_state;
    #line 216 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[4].name = "AVOID_REDUCE_SPEED";
    #line 216 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[4].deactivation_time = 0;
    #line 216 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__modes[4].flags = 0;
    // Initialize mode state
    _lf_self_base->_lf__mode_state.parent_mode = NULL;
    _lf_self_base->_lf__mode_state.initial_mode = &self->_lf__modes[0];
    _lf_self_base->_lf__mode_state.current_mode = _lf_self_base->_lf__mode_state.initial_mode;
    _lf_self_base->_lf__mode_state.next_mode = NULL;
    _lf_self_base->_lf__mode_state.mode_change = no_transition;
    return self;
}
