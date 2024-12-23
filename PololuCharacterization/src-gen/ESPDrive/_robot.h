#ifndef _ROBOT_H
#define _ROBOT_H
#include "include/core/reactor.h"
#include "_robotlinefollower.h"
#include "_motors.h"
#ifndef TOP_LEVEL_PREAMBLE_841011642_H
#define TOP_LEVEL_PREAMBLE_841011642_H
#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#include <hardware/uart.h>
#include <string.h>

#define UART_ID uart0
#define BAUD_RATE 115200
#define UART_TX_PIN 28
#define UART_RX_PIN 29
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
#endif
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
} _robot_cmd_t;
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
} _robot_debug_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    _robot_cmd_t* _lf_cmd;
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // width of -2 indicates that it is not a multiport.
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    int _lf_cmd_width;
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // Default input (in case it does not get connected)
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    _robot_cmd_t _lf_default__cmd;
    #line 59 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    _robot_notify_t _lf_notify;
    #line 59 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    int _lf_notify_width;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    _robot_debug_t _lf_debug;
    #line 60 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    int _lf_debug_width;
    struct {
        #line 24 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_left_power_t left_power;
        #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_right_power_t right_power;
    } _lf_motors;
    int _lf_motors_width;
    struct {
        #line 90 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
        _robotlinefollower_avoidReduceSpeed_t avoidReduceSpeed;
        #line 91 "/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf"
        _robotlinefollower_avoidGoAround_t avoidGoAround;
    } _lf_lineFollower;
    int _lf_lineFollower_width;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_0;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    trigger_t _lf__cmd;
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t* _lf__cmd_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[1];
} _robot_self_t;
_robot_self_t* new__robot();
#endif // _ROBOT_H
