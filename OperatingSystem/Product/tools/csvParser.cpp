//
// Created by Sunist Chan on 2021/5/11.
//

#include "csvParser.h"

string csvParser::to_string(int num) {
    if (num == 0) {
        return "0";
    }
    else {
        string s = "";
        if (num < 0) {
            s += "-";
        }
        while (num != 0) {
            s += ('0' + num % 10);
            num /= 10;
        }
        return s;
    }
}

csvParser::csvParser(string path) {
    ifstream t_csvDoc(path);
    string t_line = "";

    while (getline(t_csvDoc, t_line)) {
        // debug log
        // std::cout << t_line << std::endl;

        int t_len = t_line.size();
        vector<string> t_vector;
        string t_string = "";
        for (int i = 0; i < t_len; ++i) {
            if (t_line[i] == ',') {
                t_vector.push_back(t_string);
                t_string = "";
            } else {
                t_string += t_line[i];
            }
        }
        t_vector.push_back(t_string);

        if (t_vector.size() > 1) {
            string t_key = t_vector[0];
            string *t_value = new string[t_vector.size()-1];
            for (int i = 1; i < t_vector.size(); ++i) {
                t_value[i-1] = t_vector[i];
            }
            data[t_key] = t_value;
        }
        else {
            throw 0;
        }
    }
}

string *csvParser::query(string keyName) {
    if (data.find(keyName) != data.end()) {
        return data[keyName];
    }
    else {
        throw 0;
    }
}

string *csvParser::query(int keyValue) {
    return query(to_string(keyValue));
}
