#ifndef _ROBOT_H
#define _ROBOT_H
#include "include/core/reactor.h"
#include "_motors.h"
#ifndef TOP_LEVEL_PREAMBLE_958414187_H
#define TOP_LEVEL_PREAMBLE_958414187_H
#include <motors.h>
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
    
    
    #line 17 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    _robot_drive_t* _lf_drive;
    #line 17 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // width of -2 indicates that it is not a multiport.
    #line 17 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    int _lf_drive_width;
    #line 17 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // Default input (in case it does not get connected)
    #line 17 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    _robot_drive_t _lf_default__drive;
    #line 18 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    _robot_notify_t _lf_notify;
    #line 18 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    int _lf_notify_width;
    struct {
        #line 24 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_left_power_t left_power;
        #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/lib/Motors.lf"
        _motors_right_power_t right_power;
    } _lf_motors;
    int _lf_motors_width;
    #line 20 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_0;
    #line 25 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_1;
    #line 36 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 17 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    trigger_t _lf__drive;
    #line 17 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    reaction_t* _lf__drive_reactions[2];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    reactor_mode_t _lf__modes[2];
} _robot_self_t;
_robot_self_t* new__robot();
#endif // _ROBOT_H
