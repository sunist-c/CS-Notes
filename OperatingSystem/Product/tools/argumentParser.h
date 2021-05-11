//
// Created by Sunist Chan on 2021/5/10.
//

#ifndef SRC_ARGUMENTPARSER_H
#define SRC_ARGUMENTPARSER_H

#include <iostream>
#include <unordered_map>
#include <queue>

using namespace std;

class argumentParser {
private:
    void parse();
    int argc;
    char **argv;
    char identifyChar;
    unordered_map<string, queue<string>> arguments;

public:
    argumentParser(int argc, char **argv, char identifyChar = '-');
    string* take(string argumentName);
};


#endif //SRC_ARGUMENTPARSER_H
