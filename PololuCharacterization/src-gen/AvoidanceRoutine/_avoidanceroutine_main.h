#ifndef _AVOIDANCEROUTINE_MAIN_H
#define _AVOIDANCEROUTINE_MAIN_H
#include "include/core/reactor.h"
#include "_robotwithavoidance.h"
#include "_display.h"
#include "_irsensorreader.h"
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
#include <pico/stdlib.h>
#include <display.h>        // Do not use "display.h". Doesn't work.
#endif
typedef struct {
    struct self_base_t base;
    
    #line 232 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    bool drive;
    struct {
        #line 65 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
        _robotwithavoidance_drive_t drive;
    } _lf_robot;
    int _lf_robot_width;
    #line 245 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t _lf__reaction_0;
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    trigger_t _lf__t;
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    reaction_t* _lf__t_reactions[1];
} _avoidanceroutine_main_main_self_t;
_avoidanceroutine_main_main_self_t* new__avoidanceroutine_main();
#endif // _AVOIDANCEROUTINE_MAIN_H
