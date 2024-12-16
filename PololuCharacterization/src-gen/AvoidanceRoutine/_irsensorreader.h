#ifndef _IRSENSORREADER_H
#define _IRSENSORREADER_H
#include "include/core/reactor.h"
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
#endif
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
} _irsensorreader_IR_1_out_t;
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
} _irsensorreader_IR_2_out_t;
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
} _irsensorreader_IR_3_out_t;
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
} _irsensorreader_IR_4_out_t;
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
} _irsensorreader_IR_5_out_t;
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
} _irsensorreader_IR_6_out_t;
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
} _irsensorreader_IR_7_out_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 35 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _irsensorreader_IR_1_out_t _lf_IR_1_out;
    #line 35 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_1_out_width;
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _irsensorreader_IR_2_out_t _lf_IR_2_out;
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_2_out_width;
    #line 37 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _irsensorreader_IR_3_out_t _lf_IR_3_out;
    #line 37 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_3_out_width;
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _irsensorreader_IR_4_out_t _lf_IR_4_out;
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_4_out_width;
    #line 39 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _irsensorreader_IR_5_out_t _lf_IR_5_out;
    #line 39 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_5_out_width;
    #line 40 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _irsensorreader_IR_6_out_t _lf_IR_6_out;
    #line 40 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_6_out_width;
    #line 41 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    _irsensorreader_IR_7_out_t _lf_IR_7_out;
    #line 41 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    int _lf_IR_7_out_width;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_0;
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__sampleIRs;
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__sampleIRs_reactions[1];
} _irsensorreader_self_t;
_irsensorreader_self_t* new__irsensorreader();
#endif // _IRSENSORREADER_H
