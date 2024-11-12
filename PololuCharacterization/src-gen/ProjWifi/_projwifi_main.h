#ifndef _PROJWIFI_MAIN_H
#define _PROJWIFI_MAIN_H
#include "include/core/reactor.h"
#include "_display.h"
#ifndef TOP_LEVEL_PREAMBLE_1704942914_H
#define TOP_LEVEL_PREAMBLE_1704942914_H
#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#define UART_RX = 29;
#define LED_PIN = 25;
#include <pico/stdlib.h>
#include <display.h>        // Do not use "display.h". Doesn't work.
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;

    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _projwifi_main_blue_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    _projwifi_main_blue_t _lf_blue;
    struct {
        #line 27 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
        _display_line0_t line0;
        #line 28 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Display.lf"
        _display_line1_t line1;
    } _lf_disp;
    int _lf_disp_width;
    #line 40 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    reaction_t _lf__reaction_0;
    #line 50 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    trigger_t _lf__blue;
    #line 38 "/home/foobar/EECS149Proj/PololuCharacterization/src/ProjWifi.lf"
    reaction_t* _lf__blue_reactions[1];
} _projwifi_main_main_self_t;
_projwifi_main_main_self_t* new__projwifi_main();
#endif // _PROJWIFI_MAIN_H
