#ifndef _uartrec_H
#define _uartrec_H
#ifndef TOP_LEVEL_PREAMBLE_1299885218_H
#define TOP_LEVEL_PREAMBLE_1299885218_H
/*Correspondence: Range: [(20, 4), (38, 17)) -> Range: [(0, 0), (18, 17)) (verbatim=true; src=/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf)*/#include <stdio.h>
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
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct uartrec_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} uartrec_self_t;
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
} uartrec_rec_t;
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
} uartrec_mess_t;
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
} uartrec_uart_turn_command_t;
#endif
