// Code generated by the Lingua Franca compiler from:
// file://home/foobar/EECS149Proj/PololuCharacterization/src/Reverse.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/home/foobar/EECS149Proj/PololuCharacterization/src-gen/Reverse"

#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
int main(void) {
   return lf_reactor_c_main(0, NULL);
}
const char* _lf_default_argv[] = { "dummy", "-k", "true" };
void _lf_set_default_command_line_options() {
        default_argc = 3;
        default_argv = _lf_default_argv;
}
#include "_display.h"
#include "_reverse_main.h"
typedef enum {
    reverse_main,
    _num_enclaves
} _enclave_id;
// The global array of environments associated with each enclave
environment_t envs[_num_enclaves];
// 'Create' and initialize the environments in the program
void _lf_create_environments() {
    environment_init(&envs[reverse_main],reverse_main,_lf_number_of_workers,1,2,0,0,1,0,0,NULL);
}
// Update the pointer argument to point to the beginning of the environment array
// and return the size of that array
int _lf_get_environments(environment_t ** return_envs) {
   (*return_envs) = (environment_t *) envs;
   return _num_enclaves;
}
// No watchdogs found.
typedef void watchdog_t;
watchdog_t* _lf_watchdogs = NULL;
int _lf_watchdog_count = 0;
void _lf_initialize_trigger_objects() {
    int startup_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(startup_reaction_count);
    int shutdown_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(shutdown_reaction_count);
    int reset_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(reset_reaction_count);
    int timer_triggers_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(timer_triggers_count);
    int modal_state_reset_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_state_reset_count);
    int modal_reactor_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_reactor_count);
    int bank_index;
    SUPPRESS_UNUSED_WARNING(bank_index);
    int watchdog_number = 0;
    SUPPRESS_UNUSED_WARNING(watchdog_number);
    _reverse_main_main_self_t* reverse_main_self[1];
    SUPPRESS_UNUSED_WARNING(reverse_main_self);
    _display_self_t* reverse_d_self[1];
    SUPPRESS_UNUSED_WARNING(reverse_d_self);
    // ***** Start initializing Reverse of class Reverse
    reverse_main_self[0] = new__reverse_main();
    reverse_main_self[0]->base.environment = &envs[reverse_main];
    bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
    envs[reverse_main].startup_reactions[startup_reaction_count[reverse_main]++] = &reverse_main_self[0]->_lf__reaction_0;
    SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    { // For scoping
        static bool _initial = false;
        reverse_main_self[0]->received = _initial;
    } // End scoping.
    // Initiaizing timer Reverse.t.
    reverse_main_self[0]->_lf__t.offset = 0;
    reverse_main_self[0]->_lf__t.period = MSEC(2000);
    // Associate timer with the environment of its parent
    envs[reverse_main].timer_triggers[timer_triggers_count[reverse_main]++] = &reverse_main_self[0]->_lf__t;
    reverse_main_self[0]->_lf__t.mode = NULL;
    
    reverse_main_self[0]->_lf__reaction_0.deadline = NEVER;
    reverse_main_self[0]->_lf__reaction_1.deadline = NEVER;
    {
        // ***** Start initializing Reverse.d of class Display
        reverse_d_self[0] = new__display();
        reverse_d_self[0]->base.environment = &envs[reverse_main];
        bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
        // width of -2 indicates that it is not a multiport.
        reverse_d_self[0]->_lf_line0_width = -2;
        // width of -2 indicates that it is not a multiport.
        reverse_d_self[0]->_lf_line1_width = -2;
        // width of -2 indicates that it is not a multiport.
        reverse_d_self[0]->_lf_line2_width = -2;
        // width of -2 indicates that it is not a multiport.
        reverse_d_self[0]->_lf_line3_width = -2;
        envs[reverse_main].startup_reactions[startup_reaction_count[reverse_main]++] = &reverse_d_self[0]->_lf__reaction_0;
        SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    
        reverse_d_self[0]->_lf__reaction_0.deadline = NEVER;
        reverse_d_self[0]->_lf__reaction_1.deadline = NEVER;
        //***** End initializing Reverse.d
    }
    //***** End initializing Reverse
    // **** Start deferred initialize for Reverse
    {
    
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_0 of Reverse.
        reverse_main_self[0]->_lf__reaction_0.num_outputs = 0;
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
        }
        
        // ** End initialization for reaction 0 of Reverse
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_1 of Reverse.
        reverse_main_self[0]->_lf__reaction_1.num_outputs = 1;
        // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
        // struct for this reaction.
        reverse_main_self[0]->_lf__reaction_1.triggers = (trigger_t***)_lf_allocate(
                1, sizeof(trigger_t**),
                &reverse_main_self[0]->base.allocations);
        reverse_main_self[0]->_lf__reaction_1.triggered_sizes = (int*)_lf_allocate(
                1, sizeof(int),
                &reverse_main_self[0]->base.allocations);
        reverse_main_self[0]->_lf__reaction_1.output_produced = (bool**)_lf_allocate(
                1, sizeof(bool*),
                &reverse_main_self[0]->base.allocations);
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
            // Reaction writes to an input of a contained reactor.
            {
                reverse_main_self[0]->_lf__reaction_1.output_produced[count++] = &reverse_main_self[0]->_lf_d.line0.is_present;
            }
        }
        
        // ** End initialization for reaction 1 of Reverse
    
        // **** Start deferred initialize for Reverse.d
        {
        
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of Reverse.d.
            reverse_d_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
            }
            
            // ** End initialization for reaction 0 of Reverse.d
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of Reverse.d.
            reverse_d_self[0]->_lf__reaction_1.num_outputs = 0;
            {
                int count = 0; SUPPRESS_UNUSED_WARNING(count);
            }
            
            // ** End initialization for reaction 1 of Reverse.d
        
        }
        // **** End of deferred initialize for Reverse.d
    }
    // **** End of deferred initialize for Reverse
    // **** Start non-nested deferred initialize for Reverse
    // Set number of destination reactors for port d.line0.
    // Iterate over range Reverse.d.line0(0,1)->[Reverse.d.line0(0,1)].
    {
        int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
        int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
        int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
        int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
        reverse_main_self[src_runtime]->_lf_d.line0._base.num_destinations = 1;
        reverse_main_self[src_runtime]->_lf_d.line0._base.source_reactor = (self_base_t*)reverse_main_self[src_runtime];
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range Reverse.d.line0(0,1)->[Reverse.d.line0(0,1)].
        {
            int src_runtime = 0; SUPPRESS_UNUSED_WARNING(src_runtime); // Runtime index.
            int src_channel = 0; SUPPRESS_UNUSED_WARNING(src_channel); // Channel index.
            int src_bank = 0; SUPPRESS_UNUSED_WARNING(src_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            // Reaction 1 of Reverse triggers 1 downstream reactions
            // through port Reverse.d.line0.
            reverse_main_self[src_runtime]->_lf__reaction_1.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 1 of Reverse, allocate an
            // array of trigger pointers for downstream reactions through port Reverse.d.line0
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &reverse_main_self[src_runtime]->base.allocations); 
            reverse_main_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges Reverse.d.line0(0,1)->[Reverse.d.line0(0,1)] and Reverse.d.line0(0,1).
        {
            int src_runtime = 0; // Runtime index.
            SUPPRESS_UNUSED_WARNING(src_runtime);
            int src_channel = 0; // Channel index.
            SUPPRESS_UNUSED_WARNING(src_channel);
            int src_bank = 0; // Bank index.
            SUPPRESS_UNUSED_WARNING(src_bank);
            // Iterate over range Reverse.d.line0(0,1).
            {
                int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
                int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
                int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
                int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
                // Point to destination port Reverse.d.line0's trigger struct.
                reverse_main_self[src_runtime]->_lf__reaction_1.triggers[triggers_index[src_runtime] + src_channel][0] = &reverse_d_self[dst_runtime]->_lf__line0;
            }
        }
    }
    
    // **** Start non-nested deferred initialize for Reverse.d
    
    
    
    
    // **** End of non-nested deferred initialize for Reverse.d
    // **** End of non-nested deferred initialize for Reverse
    // Connect inputs and outputs for reactor Reverse.
    // Connect inputs and outputs for reactor Reverse.d.
    // Connect Reverse.d.line0(0,1)->[Reverse.d.line0(0,1)] to port Reverse.d.line0(0,1)
    // Iterate over ranges Reverse.d.line0(0,1)->[Reverse.d.line0(0,1)] and Reverse.d.line0(0,1).
    {
        int src_runtime = 0; // Runtime index.
        SUPPRESS_UNUSED_WARNING(src_runtime);
        int src_channel = 0; // Channel index.
        SUPPRESS_UNUSED_WARNING(src_channel);
        int src_bank = 0; // Bank index.
        SUPPRESS_UNUSED_WARNING(src_bank);
        // Iterate over range Reverse.d.line0(0,1).
        {
            int dst_runtime = 0; SUPPRESS_UNUSED_WARNING(dst_runtime); // Runtime index.
            int dst_channel = 0; SUPPRESS_UNUSED_WARNING(dst_channel); // Channel index.
            int dst_bank = 0; SUPPRESS_UNUSED_WARNING(dst_bank); // Bank index.
            int range_count = 0; SUPPRESS_UNUSED_WARNING(range_count);
            reverse_d_self[dst_runtime]->_lf_line0 = (_display_line0_t*)&reverse_main_self[src_runtime]->_lf_d.line0;
        }
    }
    {
    }
    // Add port Reverse.d.line0 to array of is_present fields.
    {
        int count = 0; SUPPRESS_UNUSED_WARNING(count);
        {
            {
                envs[reverse_main].is_present_fields[0 + count] = &reverse_main_self[0]->_lf_d.line0.is_present;
                #ifdef FEDERATED_DECENTRALIZED
                envs[reverse_main]._lf_intended_tag_fields[0 + count] = &reverse_main_self[0]->_lf_d.line0.intended_tag;
                #endif // FEDERATED_DECENTRALIZED
                count++;
            }
        }
    }
    
    // Set reaction priorities for ReactorInstance Reverse
    {
        reverse_main_self[0]->_lf__reaction_0.chain_id = 1;
        // index is the OR of level 0 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        reverse_main_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
        reverse_main_self[0]->_lf__reaction_1.chain_id = 1;
        // index is the OR of level 1 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        reverse_main_self[0]->_lf__reaction_1.index = 0xffffffffffff0001LL;
    
        // Set reaction priorities for ReactorInstance Reverse.d
        {
            reverse_d_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            reverse_d_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
            reverse_d_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 9223372036854775807 shifted left 16 bits.
            reverse_d_self[0]->_lf__reaction_1.index = 0xffffffffffff0002LL;
        }
    
    }
    

    #ifdef EXECUTABLE_PREAMBLE
    _lf_executable_preamble(&envs[0]);
    #endif
    #ifdef FEDERATED
    initialize_triggers_for_federate();
    #endif // FEDERATED
}
void logical_tag_complete(tag_t tag_to_send) {
#ifdef FEDERATED_CENTRALIZED
        _lf_logical_tag_complete(tag_to_send);
#endif // FEDERATED_CENTRALIZED

}
#ifndef FEDERATED
void terminate_execution(environment_t* env) {}
#endif
