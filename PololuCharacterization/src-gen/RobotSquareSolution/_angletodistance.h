#ifndef _ANGLETODISTANCE_H
#define _ANGLETODISTANCE_H
#include "include/core/reactor.h"
#include "_encoders.h"
#ifndef TOP_LEVEL_PREAMBLE_1894287849_H
#define TOP_LEVEL_PREAMBLE_1894287849_H
#include <math.h>
#include <hardware/pio.h>
#include <quadrature_encoder.pio.h>

// pin defines
#define RIGHT_ENCODER_AB 8
#define LEFT_ENCODER_AB 12
#define RIGHT_SM 0
#define LEFT_SM 1
#include <math.h>
static float start_angle;
static float start_dist;
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
    
    
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    _angletodistance_left_distance_t _lf_left_distance;
    #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    int _lf_left_distance_width;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    _angletodistance_right_distance_t _lf_right_distance;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
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
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    reaction_t _lf__reaction_0;
    #line 33 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    reaction_t _lf__reaction_1;
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    reaction_t _lf__reaction_2;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    trigger_t _lf__t;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/RobotSquareSolution.lf"
    reaction_t* _lf__t_reactions[1];
} _angletodistance_self_t;
_angletodistance_self_t* new__angletodistance();
#endif // _ANGLETODISTANCE_H
