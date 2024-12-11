#ifndef _TOOLSBLINKSOLUTION_MAIN_H
#define _TOOLSBLINKSOLUTION_MAIN_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_224192895_H
#define TOP_LEVEL_PREAMBLE_224192895_H
#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#endif
typedef struct {
    struct self_base_t base;
    
    
    #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    reaction_t _lf__reaction_0;
    #line 30 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    reaction_t _lf__reaction_1;
    #line 34 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    reaction_t _lf__reaction_2;
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    trigger_t _lf__t_on;
    #line 22 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    reaction_t* _lf__t_on_reactions[1];
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    trigger_t _lf__t_off;
    #line 23 "/home/foobar/EECS149Proj/PololuCharacterization/src/ToolsBlinkSolution.lf"
    reaction_t* _lf__t_off_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _toolsblinksolution_main_main_self_t;
_toolsblinksolution_main_main_self_t* new__toolsblinksolution_main();
#endif // _TOOLSBLINKSOLUTION_MAIN_H
