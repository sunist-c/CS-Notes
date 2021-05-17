//
// Created by Sunist Chan on 2021/5/12.
//

#ifndef SUNISTOS_MEMORY_CONTROLLER_H
#define SUNISTOS_MEMORY_CONTROLLER_H

struct memory_page {
    int mp_pid;
    int mp_size;
};

class memory_controller {

};

class __cache_memory_controller {
    int __cache_memory_process_id;
    int __cache_memory_start;
public:

    void fifo();
};


#endif //SUNISTOS_MEMORY_CONTROLLER_H
