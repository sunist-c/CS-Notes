//
// Created by Sunist Chan on 2021/5/11.
//

#ifndef SUNISTOS_ARGUMENT_PARSER_H
#define SUNISTOS_ARGUMENT_PARSER_H

#include "../../datastructures/template/t_hash_map.hpp"
#include "../../datastructures/template/t_list.hpp"
#include <iostream>

class argument_parser {
private:
    void parse();
    int argc;
    char **argv;
    char identifyChar;
    osl::t_hash_map<std::string, t_list<std::string>> arguments;

public:
    argument_parser(int argc, char **argv, char identifyChar = '-');
    std::string* take(std::string argumentName);
};


#endif //SUNISTOS_ARGUMENT_PARSER_H
