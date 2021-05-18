//
// Created by Sunist Chan on 2021/5/12.
//

#include "process_controller.h"


process_contorl_block::process_contorl_block(unsigned long process_id, std::string process_name, unsigned long process_type_id) {
    this->next_process = nullptr;
    this->process_id = process_id;
    this->process_name = process_name;
    this->process_type_id = process_type_id;
}
