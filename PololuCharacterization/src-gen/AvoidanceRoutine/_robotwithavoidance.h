#ifndef _ROBOTWITHAVOIDANCE_H
#define _ROBOTWITHAVOIDANCE_H
#include "include/core/reactor.h"
#include "_motors.h"
#ifndef TOP_LEVEL_PREAMBLE_182789525_H
#define TOP_LEVEL_PREAMBLE_182789525_H
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "hardware/adc.h"
#define SERVO_1 6
#define SERVO_2 7
#define IR_1 18
#define IR_2 27
#define IR_3 28
#define IR_4 29
#define IR_5 22
#define IR_6 23
#define IR_7 26
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
} _robotwithavoidance_drive_t;
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
} _robotwithavoidance_IR_1_val_t;
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
} _robotwithavoidance_IR_2_val_t;
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
} _robotwithavoidance_IR_3_val_t;
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
} _robotwithavoidance_IR_4_val_t;
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
} _robotwithavoidance_IR_5_val_t;
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
} _robotwithavoidance_IR_6_val_t;
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
} _robotwithavoidance_IR_7_val_t;
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
} _robotwithavoidance_grabObject_t;
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
} _robotwithavoidance_avoidGoAround_t;
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
} _robotwithavoidance_avoidReduceSpeed_t;
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
} _robotwithavoidance_objectGrabbed_t;
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
} _robotwithavoidance_notify_t;
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
} _robotwithavoidance_returnToLine_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_returnToLine_t _lf_returnToLine;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_drive_t* _lf_drive;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_drive_width;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_drive_t _lf_default__drive;
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_1_val_t* _lf_IR_1_val;
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_1_val_width;
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_1_val_t _lf_default__IR_1_val;
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_2_val_t* _lf_IR_2_val;
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_2_val_width;
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_2_val_t _lf_default__IR_2_val;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_3_val_t* _lf_IR_3_val;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_3_val_width;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_3_val_t _lf_default__IR_3_val;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_4_val_t* _lf_IR_4_val;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_4_val_width;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_4_val_t _lf_default__IR_4_val;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_5_val_t* _lf_IR_5_val;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_5_val_width;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_5_val_t _lf_default__IR_5_val;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_6_val_t* _lf_IR_6_val;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_6_val_width;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_6_val_t _lf_default__IR_6_val;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_7_val_t* _lf_IR_7_val;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_7_val_width;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_IR_7_val_t _lf_default__IR_7_val;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_grabObject_t* _lf_grabObject;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_grabObject_width;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_grabObject_t _lf_default__grabObject;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_avoidGoAround_t* _lf_avoidGoAround;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_avoidGoAround_width;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_avoidGoAround_t _lf_default__avoidGoAround;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_avoidReduceSpeed_t* _lf_avoidReduceSpeed;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // width of -2 indicates that it is not a multiport.
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_avoidReduceSpeed_width;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    // Default input (in case it does not get connected)
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_avoidReduceSpeed_t _lf_default__avoidReduceSpeed;
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_objectGrabbed_t _lf_objectGrabbed;
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_objectGrabbed_width;
    #line 78 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _robotwithavoidance_notify_t _lf_notify;
    #line 78 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_notify_width;
    struct {
        #line 24 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_left_power_t left_power;
        #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_right_power_t right_power;
    } _lf_motors;
    int _lf_motors_width;
    #line 81 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_0;
    #line 106 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_1;
    #line 117 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_2;
    #line 125 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_3;
    #line 135 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_4;
    #line 145 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_5;
    #line 149 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_6;
    #line 173 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_7;
    #line 176 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_8;
    #line 181 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_9;
    #line 186 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_10;
    #line 191 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_11;
    #line 196 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_12;
    #line 202 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_13;
    #line 208 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_14;
    #line 218 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_15;
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__right_turn;
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__right_turn_reactions[1];
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__straight1;
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__straight1_reactions[1];
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__left_turn;
    #line 169 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__left_turn_reactions[1];
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__straight2;
    #line 170 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__straight2_reactions[1];
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__left_turn2;
    #line 171 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__left_turn2_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__reset;
    reaction_t* _lf__reset_reactions[1];
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__returnToLine;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__returnToLine_reactions[1];
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__drive;
    #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__drive_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 66 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__IR_1_val;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__IR_2_val;
    #line 67 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__IR_2_val_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__IR_3_val;
    #line 68 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__IR_3_val_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__IR_4_val;
    #line 69 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__IR_4_val_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__IR_5_val;
    #line 70 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__IR_5_val_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__IR_6_val;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__IR_7_val;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__grabObject;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__grabObject_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__avoidGoAround;
    #line 75 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__avoidGoAround_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__avoidReduceSpeed;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__avoidReduceSpeed_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[5];
} _robotwithavoidance_self_t;
_robotwithavoidance_self_t* new__robotwithavoidance();
#endif // _ROBOTWITHAVOIDANCE_H
