#include <iostream>

#include "libs/utils/output/displayer.h"

using namespace osu;

int main(int args, char* argv[]) {
    std::string name[] = {"col1", "col2", "col3"};
    std::string value[] = {"13245", "0", "1"};
    std::string value2[] = {"2", "1141514", "1919810"};
    displayed_table t(3,name);
    t.AddRow(value);
    t.AddRow(value2);
    t.AddRow(value);
    t.AddRow(value2);
    t.AddRow(value);
    t.AddRow(value2);
    t.AddRow(value);
    t.AddRow(value2);
    t.AddRow(value);
    t.AddRow(value2);
    t.display(center,' ');
}