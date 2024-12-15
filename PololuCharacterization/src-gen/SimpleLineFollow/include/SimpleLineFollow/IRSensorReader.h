#ifndef _irsensorreader_H
#define _irsensorreader_H
#ifndef TOP_LEVEL_PREAMBLE_368242083_H
#define TOP_LEVEL_PREAMBLE_368242083_H
/*Correspondence: Range: [(18, 4), (23, 19)) -> Range: [(0, 0), (5, 19)) (verbatim=true; src=/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf)*/#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#define IR_1 26
#define IR_LEFT 23
#define IR_RIGHT 16
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct irsensorreader_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} irsensorreader_self_t;
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
} irsensorreader_IR_1_out_t;
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
} irsensorreader_IR_LEFT_out_t;
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
} irsensorreader_IR_RIGHT_out_t;
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
} irsensorreader_notify1_t;
#endif
