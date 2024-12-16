#ifndef _ROBOT_H
#define _ROBOT_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_2126664214_H
#define TOP_LEVEL_PREAMBLE_2126664214_H
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
} _robot_drive_t;
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
} _robot_notify_t;
typedef struct {
    struct self_base_t base;
#line 38 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/_robot.h"
#line 39 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/_robot.h"
    _robot_drive_t* _lf_drive;
    // width of -2 indicates that it is not a multiport.
    int _lf_drive_width;
    // Default input (in case it does not get connected)
    _robot_drive_t _lf_default__drive;
    _robot_notify_t _lf_notify;
    int _lf_notify_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__drive;
    reaction_t* _lf__drive_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[2];
} _robot_self_t;
_robot_self_t* new__robot();
#endif // _ROBOT_H
