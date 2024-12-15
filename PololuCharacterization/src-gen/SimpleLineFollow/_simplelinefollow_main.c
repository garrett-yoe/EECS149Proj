#include "include/api/api.h"
#include "include/SimpleLineFollow/SimpleLineFollow.h"
#include "_simplelinefollow_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_simplelinefollow_main_main_self_t* new__simplelinefollow_main() {
    _simplelinefollow_main_main_self_t* self = (_simplelinefollow_main_main_self_t*)_lf_new_reactor(sizeof(_simplelinefollow_main_main_self_t));
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__t.last = NULL;
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 116 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
