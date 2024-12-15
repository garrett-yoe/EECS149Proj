#include "include/api/api.h"
#include "include/AvoidanceRoutine/IRSensorReader.h"
#include "_irsensorreader.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _irsensorreaderreaction_function_0(void* instance_args) {
    _irsensorreader_self_t* self = (_irsensorreader_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _irsensorreader_IR_1_out_t* IR_1_out = &self->_lf_IR_1_out;
    _irsensorreader_IR_2_out_t* IR_2_out = &self->_lf_IR_2_out;
    _irsensorreader_IR_3_out_t* IR_3_out = &self->_lf_IR_3_out;
    _irsensorreader_IR_4_out_t* IR_4_out = &self->_lf_IR_4_out;
    _irsensorreader_IR_5_out_t* IR_5_out = &self->_lf_IR_5_out;
    _irsensorreader_IR_6_out_t* IR_6_out = &self->_lf_IR_6_out;
    _irsensorreader_IR_7_out_t* IR_7_out = &self->_lf_IR_7_out;
    #line 44 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    adc_select_input(1);
    uint16_t ir_3_adc = adc_read();
    adc_select_input(2);
    uint16_t ir_4_adc = adc_read()
    adc_select_input(3);
    uint16_t ir_5_adc = adc_read()
    lf_set(IR_2_out, ir_3_adc);
    lf_set(IR_3_out, ir_4_adc);
    lf_set(IR_4_out, ir_5_adc);
    int ir_1_dig = gpio_get(IR_1);
    lf_set(IR_1_out, ir_1_dig);
    int ir_2_dig = gpio_get(IR_2);
    lf_set(IR_2_out, ir_2_dig);
    int ir_6_dig = gpio_get(IR_6);
    lf_set(IR_6_out, ir_6_dig);
    int ir_1_dig = gpio_get(IR_7);
    lf_set(IR_7_out, ir_7_dig);
}
#include "include/api/set_undef.h"
_irsensorreader_self_t* new__irsensorreader() {
    _irsensorreader_self_t* self = (_irsensorreader_self_t*)_lf_new_reactor(sizeof(_irsensorreader_self_t));
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.number = 0;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.function = _irsensorreaderreaction_function_0;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.self = self;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.name = "?";
    #line 43 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__sampleIRs.last = NULL;
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__sampleIRs.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__sampleIRs_reactions[0] = &self->_lf__reaction_0;
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__sampleIRs.reactions = &self->_lf__sampleIRs_reactions[0];
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__sampleIRs.number_of_reactions = 1;
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #ifdef FEDERATED
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    self->_lf__sampleIRs.physical_time_of_arrival = NEVER;
    #line 42 "/home/foobar/EECS149Proj/PololuCharacterization/src/AvoidanceRoutine.lf"
    #endif // FEDERATED
    self->_lf__sampleIRs.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__sampleIRs.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
