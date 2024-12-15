#ifndef _ROBOTLINEFOLLOWER_H
#define _ROBOTLINEFOLLOWER_H
#include "include/core/reactor.h"
#include "_motors.h"
#ifndef TOP_LEVEL_PREAMBLE_368242083_H
#define TOP_LEVEL_PREAMBLE_368242083_H
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#define IR_1 26
#define IR_LEFT 23
#define IR_RIGHT 16
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
} _robotlinefollower_drive_t;
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
    
    
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_drive_t* _lf_drive;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_drive_width;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_drive_t _lf_default__drive;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_1_val_t* _lf_IR_1_val;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_1_val_width;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_1_val_t _lf_default__IR_1_val;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_LEFT_val_t* _lf_IR_LEFT_val;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_LEFT_val_width;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_LEFT_val_t _lf_default__IR_LEFT_val;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_RIGHT_val_t* _lf_IR_RIGHT_val;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_RIGHT_val_width;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_IR_RIGHT_val_t _lf_default__IR_RIGHT_val;
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_notify1_t _lf_notify1;
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_notify1_width;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_notify2_t _lf_notify2;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_notify2_width;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_notify3_t _lf_notify3;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_notify3_width;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _robotlinefollower_notify4_t _lf_notify4;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_notify4_width;
    struct {
        #line 24 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_left_power_t left_power;
        #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_right_power_t right_power;
    } _lf_motors;
    int _lf_motors_width;
    #line 80 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_0;
    #line 86 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__drive;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__IR_1_val;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__IR_1_val_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__IR_LEFT_val;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__IR_LEFT_val_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__IR_RIGHT_val;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__IR_RIGHT_val_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[1];
} _robotlinefollower_self_t;
_robotlinefollower_self_t* new__robotlinefollower();
#endif // _ROBOTLINEFOLLOWER_H
