#include <iostream>

#include "libs/utils/output/displayer.h"
#include "libs/utils/input/model/csv_file.h"
#include "libs/datastructures/template/t_datatable.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace osu;
using namespace std;

int main(int args, char* argv[]) {
    csv_file s("C:\\Users\\cyy\\Desktop\\test.csv");
    std::cout << s[0][1] << std::endl;
}