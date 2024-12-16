#include "include/api/api.h"
#include "include/AvoidanceRoutine/AvoidanceRoutine.h"
#include "_avoidanceroutine_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _avoidanceroutine_mainreaction_function_0(void* instance_args) {
    _avoidanceroutine_main_main_self_t* self = (_avoidanceroutine_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct robot {
        _robotwithavoidance_drive_t* drive;
    
    } robot;
    robot.drive = &(self->_lf_robot.drive);
    #line 246 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    lf_set(robot.drive, self->drive);
    // Toggle the drive state variable for next time.
    self->drive = !self->drive;
}
#include "include/api/set_undef.h"
_avoidanceroutine_main_main_self_t* new__avoidanceroutine_main() {
    _avoidanceroutine_main_main_self_t* self = (_avoidanceroutine_main_main_self_t*)_lf_new_reactor(sizeof(_avoidanceroutine_main_main_self_t));
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_robot_width = -2;
    #line 245 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.number = 0;
    #line 245 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.function = _avoidanceroutine_mainreaction_function_0;
    #line 245 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.self = self;
    #line 245 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 245 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 245 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.name = "?";
    #line 245 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__t.last = NULL;
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 231 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
