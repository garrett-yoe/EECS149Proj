#ifndef _UARTREC_H
#define _UARTREC_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1299885218_H
#define TOP_LEVEL_PREAMBLE_1299885218_H
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
    bool value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _uartrec_rec_t;
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
} _uartrec_mess_t;
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
} _uartrec_uart_turn_command_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _uartrec_rec_t* _lf_rec;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // width of -2 indicates that it is not a multiport.
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_rec_width;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    // Default input (in case it does not get connected)
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _uartrec_rec_t _lf_default__rec;
    #line 44 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _uartrec_mess_t _lf_mess;
    #line 44 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_mess_width;
    #line 51 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    _uartrec_uart_turn_command_t _lf_uart_turn_command;
    #line 51 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    int _lf_uart_turn_command_width;
    #line 53 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_0;
    #line 59 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__rec;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    reaction_t* _lf__rec_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[1];
} _uartrec_self_t;
_uartrec_self_t* new__uartrec();
#endif // _UARTREC_H
