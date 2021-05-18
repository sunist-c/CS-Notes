//
// Created by Sunist Chan on 2021/5/12.
//

#ifndef SUNISTOS_PROCESS_CONTROLLER_H
#define SUNISTOS_PROCESS_CONTROLLER_H

#include <iostream>

class process_contorl_block {
private:
    process_contorl_block* next_process;

public:
    std::string process_name;
    unsigned long process_type_id{};
    unsigned long process_id{};

    process_contorl_block(unsigned long process_id, std::string process_name, unsigned long process_type_id);
};

class process_controller {

};


#endif //SUNISTOS_PROCESS_CONTROLLER_H
