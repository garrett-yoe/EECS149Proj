#ifndef _robot_H
#define _robot_H
#ifndef TOP_LEVEL_PREAMBLE_841011642_H
#define TOP_LEVEL_PREAMBLE_841011642_H
/*Correspondence: Range: [(13, 2), (22, 22)) -> Range: [(0, 0), (9, 22)) (verbatim=true; src=/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf)*/#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#include <hardware/uart.h>
#include <string.h>

#define UART_ID uart0
#define BAUD_RATE 115200
#define UART_TX_PIN 28
#define UART_RX_PIN 29
/*Correspondence: Range: [(19, 2), (19, 21)) -> Range: [(0, 0), (0, 19)) (verbatim=true; src=/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf)*/#include <motors.h>
/*Correspondence: Range: [(18, 4), (26, 24)) -> Range: [(0, 0), (8, 24)) (verbatim=true; src=/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf)*/#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#include <math.h>
#define IR_1 26
#define IR_LEFT 23
#define IR_RIGHT 16
static float start_angle;
static float start_dist;
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct robot_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} robot_self_t;
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
} robot_cmd_t;
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
} robot_notify_t;
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
} robot_debug_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    float value;

} motors_left_power_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    float value;

} motors_right_power_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;

} robotlinefollower_avoidReduceSpeed_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;

} robotlinefollower_avoidGoAround_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    uint16_t value;

} robotlinefollower_IR_1_val_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;

} robotlinefollower_IR_LEFT_val_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;

} robotlinefollower_IR_RIGHT_val_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;

} robotlinefollower_notify1_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;

} robotlinefollower_notify2_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;

} robotlinefollower_notify3_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;

} robotlinefollower_notify4_t;
#endif
