#ifndef _UARTREC_H
#define _UARTREC_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_841011642_H
#define TOP_LEVEL_PREAMBLE_841011642_H
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
} _uartrec_rec_t;
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
} _uartrec_mess_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    _uartrec_rec_t* _lf_rec;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // width of -2 indicates that it is not a multiport.
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    int _lf_rec_width;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // Default input (in case it does not get connected)
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    _uartrec_rec_t _lf_default__rec;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    _uartrec_mess_t _lf_mess;
    #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    int _lf_mess_width;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_0;
    #line 35 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    trigger_t _lf__rec;
    #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t* _lf__rec_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[1];
} _uartrec_self_t;
_uartrec_self_t* new__uartrec();
#endif // _UARTREC_H
