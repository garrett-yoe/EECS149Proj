#ifndef _ROBOTTEMPLATE_MAIN_H
#define _ROBOTTEMPLATE_MAIN_H
#include "include/core/reactor.h"
#include "_display.h"
#include "_robot.h"
#ifndef TOP_LEVEL_PREAMBLE_2126664214_H
#define TOP_LEVEL_PREAMBLE_2126664214_H
#include <pico/stdlib.h>
#include <display.h>        // Do not use "display.h". Doesn't work.
#endif
typedef struct {
    struct self_base_t base;
#line 14 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/_robottemplate_main.h"
    #line 44 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src/RobotTemplate.lf"
    bool drive;
#line 17 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/_robottemplate_main.h"
    struct {
        _robot_drive_t drive;
    } _lf_robot;
    int _lf_robot_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
} _robottemplate_main_main_self_t;
_robottemplate_main_main_self_t* new__robottemplate_main();
#endif // _ROBOTTEMPLATE_MAIN_H
