//
// Created by Sunist Chan on 2021/5/11.
//

#ifndef SUNISTOS_ARGUMENT_GENERATOR_H
#define SUNISTOS_ARGUMENT_GENERATOR_H

#include <vector>

class argument_generator {
private:
    std::vector<const char*> args_list;

public:
    argument_generator();
    void add_argument(const char* name, const char* args ...);
    int generate_argc();
    char** generate_argv();
};


#endif //SUNISTOS_ARGUMENT_GENERATOR_H
