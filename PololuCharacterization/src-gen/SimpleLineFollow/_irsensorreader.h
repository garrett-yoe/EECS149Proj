#ifndef _IRSENSORREADER_H
#define _IRSENSORREADER_H
#include "include/core/reactor.h"
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
    
    
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _irsensorreader_IR_1_out_t _lf_IR_1_out;
    #line 115 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_1_out_width;
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _irsensorreader_IR_LEFT_out_t _lf_IR_LEFT_out;
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_LEFT_out_width;
    #line 117 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _irsensorreader_IR_RIGHT_out_t _lf_IR_RIGHT_out;
    #line 117 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_IR_RIGHT_out_width;
    #line 118 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _irsensorreader_notify1_t _lf_notify1;
    #line 118 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_notify1_width;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_0;
    #line 136 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_1;
    #line 146 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_2;
    #line 150 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_3;
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__sampleIRs;
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__sampleIRs_reactions[3];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _irsensorreader_self_t;
_irsensorreader_self_t* new__irsensorreader();
#endif // _IRSENSORREADER_H
