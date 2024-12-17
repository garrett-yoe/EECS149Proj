#ifndef _ROBOTLINEFOLLOWER_H
#define _ROBOTLINEFOLLOWER_H
#include "include/core/reactor.h"
#include "_gyroangle.h"
#include "_angletodistance.h"
#include "_motors.h"
#ifndef TOP_LEVEL_PREAMBLE_1921406157_H
#define TOP_LEVEL_PREAMBLE_1921406157_H
#include <motors.h>
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#include <math.h>
#define IR_1 26
#define IR_LEFT 23
#define IR_RIGHT 16
static float start_angle;
static float start_dist;
#include <pico/stdlib.h>
#include <imu.h>
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_avoidReduceSpeed_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_avoidGoAround_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    uint16_t value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_IR_1_val_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_IR_LEFT_val_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_IR_RIGHT_val_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_notify1_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_notify2_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_notify3_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_notify4_t;
typedef struct {
    struct self_base_t base;
    
    #line 103 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    int AGA_next_action;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_avoidReduceSpeed_t* _lf_avoidReduceSpeed;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // width of -2 indicates that it is not a multiport.
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    int _lf_avoidReduceSpeed_width;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Default input (in case it does not get connected)
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_avoidReduceSpeed_t _lf_default__avoidReduceSpeed;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_avoidGoAround_t* _lf_avoidGoAround;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // width of -2 indicates that it is not a multiport.
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    int _lf_avoidGoAround_width;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Default input (in case it does not get connected)
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_avoidGoAround_t _lf_default__avoidGoAround;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_IR_1_val_t* _lf_IR_1_val;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // width of -2 indicates that it is not a multiport.
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    int _lf_IR_1_val_width;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Default input (in case it does not get connected)
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_IR_1_val_t _lf_default__IR_1_val;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_IR_LEFT_val_t* _lf_IR_LEFT_val;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // width of -2 indicates that it is not a multiport.
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    int _lf_IR_LEFT_val_width;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Default input (in case it does not get connected)
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_IR_LEFT_val_t _lf_default__IR_LEFT_val;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_IR_RIGHT_val_t* _lf_IR_RIGHT_val;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // width of -2 indicates that it is not a multiport.
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    int _lf_IR_RIGHT_val_width;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    // Default input (in case it does not get connected)
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_IR_RIGHT_val_t _lf_default__IR_RIGHT_val;
    #line 95 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_notify1_t _lf_notify1;
    #line 95 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    int _lf_notify1_width;
    #line 96 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_notify2_t _lf_notify2;
    #line 96 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    int _lf_notify2_width;
    #line 97 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_notify3_t _lf_notify3;
    #line 97 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    int _lf_notify3_width;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    _robotlinefollower_notify4_t _lf_notify4;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    int _lf_notify4_width;
    struct {
        #line 118 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        _gyroangle_trigger_t trigger;
        #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        _gyroangle_z_t* z;
        #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        trigger_t z_trigger;
        #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        reaction_t* z_reactions[5];
    } _lf_gyro;
    int _lf_gyro_width;
    struct {
        #line 24 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_left_power_t left_power;
        #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_right_power_t right_power;
    } _lf_motors;
    int _lf_motors_width;
    struct {
        #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
        _angletodistance_left_distance_t* left_distance;
        #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
        trigger_t left_distance_trigger;
        #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
        reaction_t* left_distance_reactions[5];
    } _lf_a_to_d;
    int _lf_a_to_d_width;
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t _lf__reaction_0;
    #line 109 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t _lf__reaction_1;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t _lf__reaction_2;
    #line 138 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t _lf__reaction_3;
    #line 154 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t _lf__reaction_4;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t _lf__reaction_5;
    #line 185 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t _lf__reaction_6;
    #line 204 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t _lf__reaction_7;
    #line 232 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t _lf__reaction_8;
    #line 259 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t _lf__reaction_9;
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    trigger_t _lf__t;
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    trigger_t _lf__avoidReduceSpeed;
    #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t* _lf__avoidReduceSpeed_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    trigger_t _lf__avoidGoAround;
    #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t* _lf__avoidGoAround_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    trigger_t _lf__IR_1_val;
    #line 92 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t* _lf__IR_1_val_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    trigger_t _lf__IR_LEFT_val;
    #line 93 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t* _lf__IR_LEFT_val_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    trigger_t _lf__IR_RIGHT_val;
    #line 94 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
    reaction_t* _lf__IR_RIGHT_val_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[6];
} _robotlinefollower_self_t;
_robotlinefollower_self_t* new__robotlinefollower();
#endif // _ROBOTLINEFOLLOWER_H
