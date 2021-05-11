//
// Created by Sunist Chan on 2021/5/10.
//

#include "argumentParser.h"

argumentParser::argumentParser(int argc, char **argv, char identifyChar) {
    this->argc = argc;
    this->argv = argv;
    this->identifyChar = identifyChar;
    try {
        parse();
    }
    catch (string statement) {
        std::cout << statement << endl;
    }
}

void argumentParser::parse() {
    for (int i = 1; i < argc; ++i) {
        string tmpArgument = argv[i];
        int index = tmpArgument.find(identifyChar);
        if (index != tmpArgument.npos) {
            if (index != 0) {
                // If Index != 0, that means identifyChar appears in the incorrect place
                throw "Argument Format Invalid";
            }
            queue<string> args;
            string argName = tmpArgument.substr(index+1);

            // debug log
            // cout << argName << endl;

            int tmpIndex = i+1;
            while (true) {
                if (tmpIndex >= argc) {
                    break;
                }

                string tmpArgumentData = argv[tmpIndex];
                if (tmpArgumentData.find(identifyChar) == tmpArgumentData.npos) {
                    args.push(tmpArgumentData);
                    tmpIndex++;

                    // debug
                    // cout << tmpArgumentData << endl;
                }
                else {
                    i = tmpIndex-1;
                    break;
                }
            }

            arguments[argName] = args;
        }
    }
}

string* argumentParser::take(string argumentName) {
    if (arguments.find(argumentName) != arguments.end()) {
        int t_size = arguments[argumentName].size();
        string* args = new string[t_size];
        for (int i = 0; i < t_size; ++i) {
            args[i] = arguments[argumentName].front();
            arguments[argumentName].pop();
            arguments[argumentName].push(args[i]);
        }
        return args;
    }
    else {
        throw "Argument Not Found";
    }
}
