//
// Created by Sunist Chan on 2021/5/11.
//

#include "argument_parser.h"

argument_parser::argument_parser(int argc, char **argv, char identifyChar) {
    this->argc = argc;
    this->argv = argv;
    this->identifyChar = identifyChar;
    parse();
}

void argument_parser::parse() {
    for (int i = 1; i < argc; ++i) {
        std::string tmpArgument = argv[i];
        int index = tmpArgument.find(identifyChar);
        if (index != tmpArgument.npos) {
            if (index != 0) {
                // If Index != 0, that means identifyChar appears in the incorrect place
                throw "Argument Format Invalid";
            }
            t_list<std::string> args;
            std::string argName = tmpArgument.substr(index+1);

            // debug log
            // cout << argName << endl;

            int tmpIndex = i+1;
            while (true) {
                if (tmpIndex >= argc) {
                    break;
                }

                std::string tmpArgumentData = argv[tmpIndex];
                if (tmpArgumentData.find(identifyChar) == tmpArgumentData.npos) {
                    args.AddBack(tmpArgumentData);
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

std::string* argument_parser::take(std::string argumentName) {
    if (arguments.isExist(argumentName)) {
        int t_size = arguments[argumentName].Size();
        std::string* args = new std::string[t_size];
        for (int i = 0; i < t_size; ++i) {
            args[i] = arguments[argumentName][i];
        }
        return args;
    }
    else {
        // todo: Finish Argument Not Found Expection
        throw "Argument Not Found";
    }
}
