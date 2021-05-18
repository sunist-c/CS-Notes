#include <iostream>

#include "libs/utils/output/displayer.h"
#include "libs/utils/input/model/csv_file.h"
#include "libs/datastructures/template/t_datatable.hpp"

using namespace osu;

int main(int args, char* argv[]) {
    std::cout << "start" << std::endl;
    std::string cols[] = {"id", "name"};

    std::cout << "start" << std::endl;
    csv_file s(2, cols);

    std::cout << "start" << std::endl;
    s.LoadFile("/Users/sunistchan/Desktop/test.csv");

    std::cout << "start" << std::endl;
    std::cout << s[1][0] << std::endl;

}