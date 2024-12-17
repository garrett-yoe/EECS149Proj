#ifndef _angletodistance_H
#define _angletodistance_H
#ifndef TOP_LEVEL_PREAMBLE_1921406157_H
#define TOP_LEVEL_PREAMBLE_1921406157_H
/*Correspondence: Range: [(18, 4), (26, 24)) -> Range: [(0, 0), (8, 24)) (verbatim=true; src=/home/foobar/EECS149Proj/PololuCharacterization/src/TestAvoidance.lf)*/#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#include <math.h>
#define IR_1 26
#define IR_LEFT 23
#define IR_RIGHT 16
static float start_angle;
static float start_dist;
/*Correspondence: Range: [(18, 2), (26, 17)) -> Range: [(0, 0), (8, 17)) (verbatim=true; src=/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Encoders.lf)*/#include <math.h>
#include <hardware/pio.h>
#include <quadrature_encoder.pio.h>

// pin defines
#define RIGHT_ENCODER_AB 8
#define LEFT_ENCODER_AB 12
#define RIGHT_SM 0
#define LEFT_SM 1
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct angletodistance_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} angletodistance_self_t;
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
} angletodistance_left_distance_t;
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
} angletodistance_right_distance_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    bool value;

} encoders_trigger_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int32_t value;

} encoders_right_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int32_t value;

} encoders_left_t;
#endif
