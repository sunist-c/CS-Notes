//
// Created by Sunist Chan on 2021/5/11.
//

#include "errorParser.h"

errorParser::errorParser(csvParser *csv) {
    this->csvData = csv;
}

void errorParser::errorDisplay(int errorCode) {
    try {
        string *s = csvData->query(errorCode);
        printf("[%d]\t\t%s\t\n%s\n", errorIndex, s[0].c_str(), s[1].c_str());
        errorIndex += 1;
    }
    catch (int err) {
        errorDisplay(err);
    }
}