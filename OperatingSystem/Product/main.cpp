#include <iostream>
#include "tools/argumentParser.h"
#include "tools/csvParser.h"
#include "tools/errorParser.h"
#include "libs/page.h"

int main(int args, char* argv[]) {
    argumentParser parser(args, argv);
    csvParser csvp("test.csv");
    errorParser errs(&csvp);



    return 0;
}