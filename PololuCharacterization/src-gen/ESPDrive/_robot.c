#include "include/api/api.h"
#include "include/ESPDrive/Robot.h"
#include "_robot.h"
// *********** From the preamble, verbatim:
#line 63 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
float lpower = 0.0f;
float rpower = 0.0f;
char lastMode;

// *********** End of preamble.
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _robotreaction_function_0(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _robot_notify_t* notify = &self->_lf_notify;
    _robot_debug_t* debug = &self->_lf_debug;
    #line 72 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    lf_set(notify, "NOTIF INIT");
    lf_set(debug, "DEBUG INIT");
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _robotreaction_function_1(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct motors {
        _motors_left_power_t* left_power;
    _motors_right_power_t* right_power;
    
    } motors;
    struct lineFollower {
        _robotlinefollower_avoidReduceSpeed_t* avoidReduceSpeed;
    _robotlinefollower_avoidGoAround_t* avoidGoAround;
    
    } lineFollower;
    _robot_cmd_t* cmd = self->_lf_cmd;
    int cmd_width = self->_lf_cmd_width; SUPPRESS_UNUSED_WARNING(cmd_width);
    _robot_notify_t* notify = &self->_lf_notify;
    _robot_debug_t* debug = &self->_lf_debug;
    motors.left_power = &(self->_lf_motors.left_power);
    motors.right_power = &(self->_lf_motors.right_power);
    lineFollower.avoidReduceSpeed = &(self->_lf_lineFollower.avoidReduceSpeed);
    lineFollower.avoidGoAround = &(self->_lf_lineFollower.avoidGoAround);
    #line 79 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    static char buf[17];
    static char deBuf[17];
    if (strcmp(cmd->value, "sty") == 0) {
      snprintf(buf, 17, "Staying in %c", lastMode);
      snprintf(deBuf, 17, "cur l:%0.1f r:%0.1f", lpower, rpower);
    } else {
      if (strcmp(cmd->value, "for") == 0) {
        lpower = 0.0f; rpower = 0.0f; lastMode = 'F';
        snprintf(deBuf, 17, "LINE FOLLOWING");
        lf_set(lineFollower.avoidReduceSpeed,false);
      } else if (strcmp(cmd->value, "avo") == 0) {
        lpower = 0.0f; rpower = 0.0f; lastMode = 'A';
        snprintf(deBuf, 17, "AVOIDING BOT");
        lf_set(lineFollower.avoidGoAround , true);
      } else if (strcmp(cmd->value, "rig") == 0) {
        lpower = 0.0f; rpower = 0.1f; lastMode = 'R';
        snprintf(deBuf, 17, "new l:%0.1f r:%0.1f", lpower, rpower);
      } else if (strcmp(cmd->value, "lef") == 0) {
        lpower = 0.1f; rpower = 0.0f; lastMode = 'L';
        snprintf(deBuf, 17, "new l:%0.1f r:%0.1f", lpower, rpower);
      } else if (strcmp(cmd->value, "sto") == 0) {
        lpower = 0.0f; rpower = 0.0f; lastMode = 'S';
        snprintf(deBuf, 17, "new l:%0.1f r:%0.1f", lpower, rpower);
      }
      snprintf(buf, 17, cmd->value);
    } 
    lf_set(notify, buf);
    lf_set(debug, deBuf);
    lf_set(motors.left_power, lpower);
    lf_set(motors.right_power, rpower);
}
#include "include/api/set_undef.h"
_robot_self_t* new__robot() {
    _robot_self_t* self = (_robot_self_t*)_lf_new_reactor(sizeof(_robot_self_t));
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // Set input by default to an always absent default input.
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_cmd = &self->_lf_default__cmd;
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    // Set the default source reactor pointer
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf_default__cmd._base.source_reactor = (self_base_t*)self;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_motors_width = -2;
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_lineFollower_width = -2;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.number = 0;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.function = _robotreaction_function_0;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.self = self;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.name = "?";
    #line 71 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.number = 1;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.function = _robotreaction_function_1;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.self = self;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.name = "?";
    #line 77 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__reaction_1.mode = &self->_lf__modes[0];
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__cmd.last = NULL;
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__cmd.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__cmd_reactions[0] = &self->_lf__reaction_1;
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__cmd.reactions = &self->_lf__cmd_reactions[0];
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__cmd.number_of_reactions = 1;
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #ifdef FEDERATED
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__cmd.physical_time_of_arrival = NEVER;
    #line 58 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    #endif // FEDERATED
    self->_lf__cmd.tmplt.type.element_size = sizeof(string);
    // Initialize modes
    self_base_t* _lf_self_base = (self_base_t*)self;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].state = &_lf_self_base->_lf__mode_state;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].name = "NEED_COMMAND";
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].deactivation_time = 0;
    #line 76 "/home/foobar/EECS149Proj/PololuCharacterization/src/ESPDrive.lf"
    self->_lf__modes[0].flags = 0;
    // Initialize mode state
    _lf_self_base->_lf__mode_state.parent_mode = NULL;
    _lf_self_base->_lf__mode_state.initial_mode = &self->_lf__modes[0];
    _lf_self_base->_lf__mode_state.current_mode = _lf_self_base->_lf__mode_state.initial_mode;
    _lf_self_base->_lf__mode_state.next_mode = NULL;
    _lf_self_base->_lf__mode_state.mode_change = no_transition;
    return self;
}
