#ifndef _REVERSE_MAIN_H
#define _REVERSE_MAIN_H
#include "include/core/reactor.h"
#include "_display.h"
#ifndef TOP_LEVEL_PREAMBLE_1454136448_H
#define TOP_LEVEL_PREAMBLE_1454136448_H
#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#include <hardware/uart.h>
#include <string.h>

#define UART_ID uart0
#define BAUD_RATE 115200
#define UART_TX_PIN 28
#define UART_RX_PIN 29
#include <pico/stdlib.h>
#include <display.h>        // Do not use "display.h". Doesn't work.
#endif
typedef struct {
    struct self_base_t base;
    
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    bool received;
    struct {
        #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
        _display_line0_t line0;
    } _lf_d;
    int _lf_d_width;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    reaction_t _lf__reaction_0;
    #line 45 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    reaction_t _lf__reaction_1;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    trigger_t _lf__t;
    #line 29 "/home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf"
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _reverse_main_main_self_t;
_reverse_main_main_self_t* new__reverse_main();
#endif // _REVERSE_MAIN_H
