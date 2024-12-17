#ifndef _ANGLETODISTANCE_H
#define _ANGLETODISTANCE_H
#include "include/core/reactor.h"
#include "_encoders.h"
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
#include <math.h>
#include <hardware/pio.h>
#include <quadrature_encoder.pio.h>

// pin defines
#define RIGHT_ENCODER_AB 8
#define LEFT_ENCODER_AB 12
#define RIGHT_SM 0
#define LEFT_SM 1
#endif
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
} _angletodistance_left_distance_t;
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
} _angletodistance_right_distance_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _angletodistance_left_distance_t _lf_left_distance;
    #line 98 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_left_distance_width;
    #line 99 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _angletodistance_right_distance_t _lf_right_distance;
    #line 99 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_right_distance_width;
    struct {
        #line 31 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
        _encoders_trigger_t trigger;
        #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
        _encoders_left_t* left;
        #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
        trigger_t left_trigger;
        #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
        reaction_t* left_reactions[1];
        #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
        _encoders_right_t* right;
        #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
        trigger_t right_trigger;
        #line 32 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf"
        reaction_t* right_reactions[1];
    } _lf_e;
    int _lf_e_width;
    #line 102 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_0;
    #line 105 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_1;
    #line 108 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_2;
    #line 100 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__t;
    #line 100 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__t_reactions[1];
} _angletodistance_self_t;
_angletodistance_self_t* new__angletodistance();
#endif // _ANGLETODISTANCE_H
