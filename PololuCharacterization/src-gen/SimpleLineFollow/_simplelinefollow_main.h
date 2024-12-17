#ifndef _SIMPLELINEFOLLOW_MAIN_H
#define _SIMPLELINEFOLLOW_MAIN_H
#include "include/core/reactor.h"
#include "_robotlinefollower.h"
#include "_display.h"
#include "_irsensorreader.h"
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
#include <pico/stdlib.h>
#include <display.h>        // Do not use "display.h". Doesn't work.
#endif
typedef struct {
    struct self_base_t base;
    
    #line 382 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    bool drive;
    #line 381 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    trigger_t _lf__t;
} _simplelinefollow_main_main_self_t;
_simplelinefollow_main_main_self_t* new__simplelinefollow_main();
#endif // _SIMPLELINEFOLLOW_MAIN_H
