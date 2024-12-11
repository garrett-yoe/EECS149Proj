#ifndef _ESPDRIVE_MAIN_H
#define _ESPDRIVE_MAIN_H
#include "include/core/reactor.h"
#include "_display.h"
#include "_uartrec.h"
#ifndef TOP_LEVEL_PREAMBLE_1099694603_H
#define TOP_LEVEL_PREAMBLE_1099694603_H
#include <pico/stdlib.h>
#include <display.h>        // Do not use "display.h". Doesn't work.
#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#include <hardware/uart.h>
#include <string.h>

#define UART_ID uart0
#define BAUD_RATE 115200
#define UART_TX_PIN 28
#define UART_RX_PIN 29
#endif
typedef struct {
    struct self_base_t base;
    
    #line 74 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    bool received;
    struct {
        #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
        _uartrec_rec_t rec;
        #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
        _uartrec_mess_t* mess;
        #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
        trigger_t mess_trigger;
        #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
        reaction_t* mess_reactions[1];
    } _lf_uart;
    int _lf_uart_width;
    struct {
        #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
        _display_line0_t line0;
        #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
        _display_line1_t line1;
    } _lf_d;
    int _lf_d_width;
    #line 78 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_0;
    #line 88 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_1;
    #line 100 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_2;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    trigger_t _lf__t;
    #line 73 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _espdrive_main_main_self_t;
_espdrive_main_main_self_t* new__espdrive_main();
#endif // _ESPDRIVE_MAIN_H
