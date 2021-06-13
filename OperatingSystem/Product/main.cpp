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
    string names[] = {"id", "name"};
    displayed_table s(2, names);
    string values1[] = {"114514", "i love senrua forever"};
    string values2[] = {"456456234362", "sikadi"};
    s.AddRow(values1);
    s.AddRow(values2);
    s.display(center);
}