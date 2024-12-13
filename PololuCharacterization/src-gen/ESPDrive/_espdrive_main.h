#ifndef _ESPDRIVE_MAIN_H
#define _ESPDRIVE_MAIN_H
#include "include/core/reactor.h"
#include "_display.h"
#include "_uartrec.h"
#include "_robot.h"
#ifndef TOP_LEVEL_PREAMBLE_885991756_H
#define TOP_LEVEL_PREAMBLE_885991756_H
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
    
    #line 168 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    bool received;
    struct {
        #line 26 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
        _uartrec_rec_t rec;
    } _lf_uart;
    int _lf_uart_width;
    struct {
        #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
        _display_line0_t line0;
    } _lf_d;
    int _lf_d_width;
    #line 177 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_0;
    #line 187 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_1;
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    trigger_t _lf__t;
    #line 167 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _espdrive_main_main_self_t;
_espdrive_main_main_self_t* new__espdrive_main();
#endif // _ESPDRIVE_MAIN_H
