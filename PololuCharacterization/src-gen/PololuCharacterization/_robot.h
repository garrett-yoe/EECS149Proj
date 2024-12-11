#ifndef _ROBOT_H
#define _ROBOT_H
#include "include/core/reactor.h"
#include "_gyroangle.h"
#include "_angletodistance.h"
#include "_motors.h"
#ifndef TOP_LEVEL_PREAMBLE_262598397_H
#define TOP_LEVEL_PREAMBLE_262598397_H
#include <math.h>
static float start_angle;
static float start_dist;
static float curr_left_power;
static float curr_right_power;
#include <motors.h>
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
} _robot_drive_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    float value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robot_left_motor_speed_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    float value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robot_right_motor_speed_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robot_count_t;
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
} _robot_notify0_t;
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
} _robot_notify1_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    _robot_drive_t* _lf_drive;
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    // width of -2 indicates that it is not a multiport.
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    int _lf_drive_width;
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    // Default input (in case it does not get connected)
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    _robot_drive_t _lf_default__drive;
    #line 46 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    _robot_left_motor_speed_t* _lf_left_motor_speed;
    #line 46 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    // width of -2 indicates that it is not a multiport.
    #line 46 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    int _lf_left_motor_speed_width;
    #line 46 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    // Default input (in case it does not get connected)
    #line 46 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    _robot_left_motor_speed_t _lf_default__left_motor_speed;
    #line 47 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    _robot_right_motor_speed_t* _lf_right_motor_speed;
    #line 47 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    // width of -2 indicates that it is not a multiport.
    #line 47 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    int _lf_right_motor_speed_width;
    #line 47 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    // Default input (in case it does not get connected)
    #line 47 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    _robot_right_motor_speed_t _lf_default__right_motor_speed;
    #line 54 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    _robot_count_t* _lf_count;
    #line 54 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    // width of -2 indicates that it is not a multiport.
    #line 54 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    int _lf_count_width;
    #line 54 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    // Default input (in case it does not get connected)
    #line 54 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    _robot_count_t _lf_default__count;
    #line 52 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    _robot_notify0_t _lf_notify0;
    #line 52 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    int _lf_notify0_width;
    #line 53 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    _robot_notify1_t _lf_notify1;
    #line 53 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    int _lf_notify1_width;
    struct {
        #line 24 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_left_power_t left_power;
        #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_right_power_t right_power;
    } _lf_motors;
    int _lf_motors_width;
    struct {
        #line 118 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        _gyroangle_trigger_t trigger;
        #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        _gyroangle_z_t* z;
        #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        trigger_t z_trigger;
        #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        reaction_t* z_reactions[1];
    } _lf_gyro;
    int _lf_gyro_width;
    struct {
        #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
        _angletodistance_left_distance_t* left_distance;
        #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
        trigger_t left_distance_trigger;
        #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
        reaction_t* left_distance_reactions[2];
        #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
        _angletodistance_right_distance_t* right_distance;
        #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
        trigger_t right_distance_trigger;
        #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
        reaction_t* right_distance_reactions[1];
    } _lf_a_to_d;
    int _lf_a_to_d_width;
    #line 56 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    reaction_t _lf__reaction_0;
    #line 64 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    reaction_t _lf__reaction_1;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    reaction_t _lf__reaction_2;
    #line 84 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    reaction_t _lf__reaction_3;
    #line 87 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    reaction_t _lf__reaction_4;
    #line 51 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    trigger_t _lf__ti;
    #line 51 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    reaction_t* _lf__ti_reactions[2];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    trigger_t _lf__drive;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 46 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    trigger_t _lf__left_motor_speed;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 47 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    trigger_t _lf__right_motor_speed;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 54 "/home/foobar/EECS149Proj/PololuCharacterization/src/PololuCharacterization.lf"
    trigger_t _lf__count;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[2];
} _robot_self_t;
_robot_self_t* new__robot();
#endif // _ROBOT_H
