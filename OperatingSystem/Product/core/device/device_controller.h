//
// Created by Sunist Chan on 2021/5/17.
//

#ifndef SUNISTOS_DEVICE_CONTROLLER_H
#define SUNISTOS_DEVICE_CONTROLLER_H

#include "../libs/datastructures/template/t_list.hpp"
#include "../libs/datastructures/template/t_hash_map.hpp"
#include "../libs/utils/input/model/csv_file.h"

struct __virtual_device {
    unsigned long __virtual_device_id;
    unsigned long __virtual_device_type;
    std::string __virtual_device_name;
    bool __virtual_device_occupied;
    bool __virtual_device_accessable;
};

class device_controller {
private:
    osl::t_hash_map<unsigned long, __virtual_device> device_list;
public:

};


#endif //SUNISTOS_DEVICE_CONTROLLER_H
