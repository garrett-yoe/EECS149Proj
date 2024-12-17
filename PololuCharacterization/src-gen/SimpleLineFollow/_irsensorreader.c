#include "include/api/api.h"
#include "include/SimpleLineFollow/IRSensorReader.h"
#include "_irsensorreader.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _irsensorreaderreaction_function_0(void* instance_args) {
    _irsensorreader_self_t* self = (_irsensorreader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 123 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    stdio_init_all();
        gpio_init(IR_1);
        gpio_disable_pulls(IR_1);
        gpio_set_function(IR_1, GPIO_FUNC_NULL);
        hw_clear_bits(&padsbank0_hw->io[IR_1], PADS_BANK0_GPIO0_IE_BITS);
        adc_init();
        adc_gpio_init(IR_1);
        gpio_init(IR_LEFT);
        gpio_set_dir(IR_LEFT, GPIO_IN);
        gpio_init(IR_RIGHT);
        gpio_set_dir(IR_RIGHT, GPIO_IN);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _irsensorreaderreaction_function_1(void* instance_args) {
    _irsensorreader_self_t* self = (_irsensorreader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _irsensorreader_IR_1_out_t* IR_1_out = &self->_lf_IR_1_out;
    #line 137 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
        adc_select_input(0);
        uint16_t ir_1_adc = adc_read();
       lf_set(IR_1_out, ir_1_adc);
      //  static char buf0[17];    
      //   snprintf(buf0, 17, "A: %d", ir_1_adc);
      //   lf_set(notify1, buf0); 
    //    lf_set(notify1, "DEBUG");  
    //lf_set(IR_1_out, 100);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _irsensorreaderreaction_function_2(void* instance_args) {
    _irsensorreader_self_t* self = (_irsensorreader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _irsensorreader_IR_LEFT_out_t* IR_LEFT_out = &self->_lf_IR_LEFT_out;
    #line 147 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    uint32_t mask = 1ul << IR_LEFT;
    lf_set(IR_LEFT_out, sio_hw->gpio_in & mask);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _irsensorreaderreaction_function_3(void* instance_args) {
    _irsensorreader_self_t* self = (_irsensorreader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _irsensorreader_IR_RIGHT_out_t* IR_RIGHT_out = &self->_lf_IR_RIGHT_out;
    #line 151 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    uint32_t mask = 1ul << IR_RIGHT;
    lf_set(IR_RIGHT_out, sio_hw->gpio_in & mask);
}
#include "include/api/set_undef.h"
_irsensorreader_self_t* new__irsensorreader() {
    _irsensorreader_self_t* self = (_irsensorreader_self_t*)_lf_new_reactor(sizeof(_irsensorreader_self_t));
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.number = 0;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.function = _irsensorreaderreaction_function_0;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.self = self;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.name = "?";
    #line 122 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 136 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.number = 1;
    #line 136 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.function = _irsensorreaderreaction_function_1;
    #line 136 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.self = self;
    #line 136 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 136 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 136 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.name = "?";
    #line 136 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 146 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.number = 2;
    #line 146 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.function = _irsensorreaderreaction_function_2;
    #line 146 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.self = self;
    #line 146 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    #line 146 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.STP_handler = NULL;
    #line 146 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.name = "?";
    #line 146 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_2.mode = NULL;
    #line 150 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.number = 3;
    #line 150 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.function = _irsensorreaderreaction_function_3;
    #line 150 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.self = self;
    #line 150 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    #line 150 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.STP_handler = NULL;
    #line 150 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.name = "?";
    #line 150 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__reaction_3.mode = NULL;
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__sampleIRs.last = NULL;
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__sampleIRs.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__sampleIRs_reactions[0] = &self->_lf__reaction_1;
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__sampleIRs_reactions[1] = &self->_lf__reaction_2;
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__sampleIRs_reactions[2] = &self->_lf__reaction_3;
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__sampleIRs.reactions = &self->_lf__sampleIRs_reactions[0];
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__sampleIRs.number_of_reactions = 3;
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #ifdef FEDERATED
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    self->_lf__sampleIRs.physical_time_of_arrival = NEVER;
    #line 121 "/home/foobar/EECS149Proj/PololuCharacterization/src/SimpleLineFollow.lf"
    #endif // FEDERATED
    self->_lf__sampleIRs.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sampleIRs.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    return self;
}
