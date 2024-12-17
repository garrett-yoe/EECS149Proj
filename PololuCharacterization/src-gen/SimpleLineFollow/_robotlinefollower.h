#ifndef _ROBOTLINEFOLLOWER_H
#define _ROBOTLINEFOLLOWER_H
#include "include/core/reactor.h"
#include "_gyroangle.h"
#include "_angletodistance.h"
#include "_motors.h"
#ifndef TOP_LEVEL_PREAMBLE_790538253_H
#define TOP_LEVEL_PREAMBLE_790538253_H
#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#include <hardware/uart.h>
#include <string.h>
#include <hardware/adc.h>
#include <math.h>
#define IR_1 26
#define IR_LEFT 23
#define IR_RIGHT 16
#define UART_ID uart0
#define BAUD_RATE 115200
#define UART_TX_PIN 28
#define UART_RX_PIN 29
static float start_angle;
static float start_dist;
// float lpower = 0.0f;
// float rpower = 0.0f;
// char lastMode;
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
} _robotlinefollower_drive_t;
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
} _robotlinefollower_command_t;
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
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_external_turn_command_t;
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
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;

    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _robotlinefollower_action_wait_t;
typedef struct {
    struct self_base_t base;
    
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int next_turn;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_action_wait_t _lf_action_wait;
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_drive_t* _lf_drive;
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_drive_width;
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_drive_t _lf_default__drive;
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_command_t* _lf_command;
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_command_width;
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_command_t _lf_default__command;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_1_val_t* _lf_IR_1_val;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_1_val_width;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_1_val_t _lf_default__IR_1_val;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_LEFT_val_t* _lf_IR_LEFT_val;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_LEFT_val_width;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_LEFT_val_t _lf_default__IR_LEFT_val;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_RIGHT_val_t* _lf_IR_RIGHT_val;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_RIGHT_val_width;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_RIGHT_val_t _lf_default__IR_RIGHT_val;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_external_turn_command_t* _lf_external_turn_command;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_external_turn_command_width;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_external_turn_command_t _lf_default__external_turn_command;
    #line 163 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_notify1_t _lf_notify1;
    #line 163 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_notify1_width;
    #line 164 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_notify2_t _lf_notify2;
    #line 164 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_notify2_width;
    #line 165 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_notify3_t _lf_notify3;
    #line 165 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_notify3_width;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_notify4_t _lf_notify4;
    #line 166 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_notify4_width;
    struct {
        #line 118 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        _gyroangle_trigger_t trigger;
        #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        _gyroangle_z_t* z;
        #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        trigger_t z_trigger;
        #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/IMU.lf"
        reaction_t* z_reactions[4];
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
        #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
        _angletodistance_left_distance_t* left_distance;
        #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
        trigger_t left_distance_trigger;
        #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
        reaction_t* left_distance_reactions[6];
    } _lf_a_to_d;
    int _lf_a_to_d_width;
    #line 177 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_0;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_1;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_2;
    #line 221 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_3;
    #line 252 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_4;
    #line 303 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_5;
    #line 315 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_6;
    #line 328 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_7;
    #line 335 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_8;
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__t;
    #line 175 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__action_wait;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__action_wait_reactions[1];
    #line 158 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__drive;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 159 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__command;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__IR_1_val;
    #line 160 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__IR_1_val_reactions[3];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__IR_LEFT_val;
    #line 161 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__IR_LEFT_val_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__IR_RIGHT_val;
    #line 162 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__IR_RIGHT_val_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__external_turn_command;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__external_turn_command_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[7];
} _robotlinefollower_self_t;
_robotlinefollower_self_t* new__robotlinefollower();
#endif // _ROBOTLINEFOLLOWER_H
