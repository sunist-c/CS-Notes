//
// Created by Sunist Chan on 2021/5/12.
//

#ifndef SUNISTOS_PROCESS_H
#define SUNISTOS_PROCESS_H

#include "../memory/process_memory_controller.h"

class process {
private:
    process_memory_controller pmc;

public:
    int pid;
    process* father;

    process(int pid, process* father = nullptr);
};


#endif //SUNISTOS_PROCESS_H
