#ifndef _IRSENSORREADER_H
#define _IRSENSORREADER_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_368242083_H
#define TOP_LEVEL_PREAMBLE_368242083_H
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#define IR_1 26
#define IR_LEFT 23
#define IR_RIGHT 16
#endif
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
} _irsensorreader_IR_1_out_t;
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
} _irsensorreader_IR_LEFT_out_t;
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
} _irsensorreader_IR_RIGHT_out_t;
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
} _irsensorreader_notify1_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _irsensorreader_IR_1_out_t _lf_IR_1_out;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_1_out_width;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _irsensorreader_IR_LEFT_out_t _lf_IR_LEFT_out;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_LEFT_out_width;
    #line 31 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _irsensorreader_IR_RIGHT_out_t _lf_IR_RIGHT_out;
    #line 31 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_RIGHT_out_width;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _irsensorreader_notify1_t _lf_notify1;
    #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_notify1_width;
    #line 35 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_0;
    #line 49 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_1;
    #line 59 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_2;
    #line 63 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_3;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__sampleIRs;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__sampleIRs_reactions[3];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _irsensorreader_self_t;
_irsensorreader_self_t* new__irsensorreader();
#endif // _IRSENSORREADER_H
