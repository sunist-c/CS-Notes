#include <iostream>

#include "libs/datastructures/template/t_hash_map.hpp"
#include "libs/datastructures/template/t_list.hpp"
#include "libs/utils/fileoperator/md5.h"
#include "libs/datastructures/template/t_algorithm.hpp"
#include "libs/datastructures/template//t_blocked_list.hpp"

using namespace osl;

int main(int args, char* argv[]) {

    t_list<int> s;
    s.AddBack(1);
    s.AddBack(3);
    std::cout << s[1] << std::endl;
}