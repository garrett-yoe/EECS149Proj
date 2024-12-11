#ifndef _POLOLUCHARACTERIZATION_MAIN_H
#define _POLOLUCHARACTERIZATION_MAIN_H
#include "include/core/reactor.h"
#include "_display.h"
#include "_robot.h"
#ifndef TOP_LEVEL_PREAMBLE_262598397_H
#define TOP_LEVEL_PREAMBLE_262598397_H
#include <pico/stdlib.h>
#include <display.h>        // Do not use "display.h". Doesn't work.
#include <math.h>
static float start_angle;
static float start_dist;
static float curr_left_power;
static float curr_right_power;
#endif
typedef struct {
    struct self_base_t base;
    
    
} _pololucharacterization_main_main_self_t;
_pololucharacterization_main_main_self_t* new__pololucharacterization_main();
#endif // _POLOLUCHARACTERIZATION_MAIN_H
