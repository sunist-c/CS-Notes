//
// Created by Sunist Chan on 2021/5/11.
//

#ifndef SUNISTOS_ERRORPARSER_H
#define SUNISTOS_ERRORPARSER_H

#include <iostream>
#include <cstdio>
#include "csvParser.h"

using namespace std;

struct error{
    int errorCode;
    string errorName;
    string errorDescription;
};

class errorParser {
private:
    int errorIndex;
    csvParser *csvData;
public:
    errorParser(csvParser *csv);
    string errorName(int errorCode);
    string errorDescription(int errorCode);
    void errorDisplay(int errorCode);
};


#endif //SUNISTOS_ERRORPARSER_H
