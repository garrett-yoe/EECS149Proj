#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
#include "include/RobotTemplate/Robot.h"
#include "_robot.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _robotreaction_function_0(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _robot_notify_t* notify = &self->_lf_notify;
    #line 20 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src/RobotTemplate.lf"
    lf_set(notify, "INIT");
#line 14 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/_robot.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _robotreaction_function_1(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _robot_drive_t* drive = self->_lf_drive;
    int drive_width = self->_lf_drive_width; SUPPRESS_UNUSED_WARNING(drive_width);
    reactor_mode_t* DRIVING = &self->_lf__modes[1];
    lf_mode_change_type_t _lf_DRIVING_change_type = reset_transition;
    _robot_notify_t* notify = &self->_lf_notify;
    #line 25 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src/RobotTemplate.lf"
    if (drive->value) {
      lf_set_mode(DRIVING);
      lf_set(notify, "DRIVING");
    }
#line 30 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/_robot.c"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _robotreaction_function_2(void* instance_args) {
    _robot_self_t* self = (_robot_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _robot_drive_t* drive = self->_lf_drive;
    int drive_width = self->_lf_drive_width; SUPPRESS_UNUSED_WARNING(drive_width);
    reactor_mode_t* STOPPED = &self->_lf__modes[0];
    lf_mode_change_type_t _lf_STOPPED_change_type = reset_transition;
    _robot_notify_t* notify = &self->_lf_notify;
    #line 34 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src/RobotTemplate.lf"
    if (!drive->value) {
      lf_set_mode(STOPPED);
      lf_set(notify, "STOPPED");
    }
#line 46 "/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/_robot.c"
}
#include "include/api/reaction_macros_undef.h"
_robot_self_t* new__robot() {
    _robot_self_t* self = (_robot_self_t*)lf_new_reactor(sizeof(_robot_self_t));
    // Set input by default to an always absent default input.
    self->_lf_drive = &self->_lf_default__drive;
    // Set the default source reactor pointer
    self->_lf_default__drive._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _robotreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _robotreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = &self->_lf__modes[0];
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _robotreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = &self->_lf__modes[1];
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    self->_lf__drive.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__drive.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__drive_reactions[0] = &self->_lf__reaction_1;
    self->_lf__drive_reactions[1] = &self->_lf__reaction_2;
    self->_lf__drive.reactions = &self->_lf__drive_reactions[0];
    self->_lf__drive.number_of_reactions = 2;
    #ifdef FEDERATED
    self->_lf__drive.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__drive.tmplt.type.element_size = sizeof(bool);
    // Initialize modes
    self_base_t* _lf_self_base = (self_base_t*)self;
    self->_lf__modes[0].state = &_lf_self_base->_lf__mode_state;
    self->_lf__modes[0].name = "STOPPED";
    self->_lf__modes[0].deactivation_time = 0;
    self->_lf__modes[0].flags = 0;
    self->_lf__modes[1].state = &_lf_self_base->_lf__mode_state;
    self->_lf__modes[1].name = "DRIVING";
    self->_lf__modes[1].deactivation_time = 0;
    self->_lf__modes[1].flags = 0;
    // Initialize mode state
    _lf_self_base->_lf__mode_state.parent_mode = NULL;
    _lf_self_base->_lf__mode_state.initial_mode = &self->_lf__modes[0];
    _lf_self_base->_lf__mode_state.current_mode = _lf_self_base->_lf__mode_state.initial_mode;
    _lf_self_base->_lf__mode_state.next_mode = NULL;
    _lf_self_base->_lf__mode_state.mode_change = no_transition;
    return self;
}
