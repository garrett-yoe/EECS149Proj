#ifndef _ROBOT_H
#define _ROBOT_H
#include "include/core/reactor.h"
#include "_gyroangle.h"
#include "_angletodistance.h"
#include "_motors.h"
#ifndef TOP_LEVEL_PREAMBLE_1894287849_H
#define TOP_LEVEL_PREAMBLE_1894287849_H
#include <math.h>
static float start_angle;
static float start_dist;
#include <pico/stdlib.h>
#include <imu.h>
#include <motors.h>
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
    string value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robot_notify_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    _robot_drive_t* _lf_drive;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    // width of -2 indicates that it is not a multiport.
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    int _lf_drive_width;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    // Default input (in case it does not get connected)
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    _robot_drive_t _lf_default__drive;
    #line 44 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    _robot_notify_t _lf_notify;
    #line 44 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    int _lf_notify_width;
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
        #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
        _angletodistance_left_distance_t* left_distance;
        #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
        trigger_t left_distance_trigger;
        #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
        reaction_t* left_distance_reactions[2];
        #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
        _angletodistance_right_distance_t* right_distance;
        #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
        trigger_t right_distance_trigger;
        #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
        reaction_t* right_distance_reactions[1];
    } _lf_a_to_d;
    int _lf_a_to_d_width;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    reaction_t _lf__reaction_0;
    #line 57 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    reaction_t _lf__reaction_1;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    reaction_t _lf__reaction_2;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    reaction_t _lf__reaction_3;
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    reaction_t _lf__reaction_4;
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    trigger_t _lf__t;
    #line 48 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    reaction_t* _lf__t_reactions[2];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    trigger_t _lf__drive;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[2];
} _robot_self_t;
_robot_self_t* new__robot();
#endif // _ROBOT_H
