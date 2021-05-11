//
// Created by Sunist Chan on 2021/5/11.
//

#ifndef SUNISTOS_CSVPARSER_H
#define SUNISTOS_CSVPARSER_H

#include <unordered_map>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class csvParser {
private:
    unordered_map<string, string*> data;
    string to_string(int num);

public:
    /**
     * The constructor of csvParser， which load the csv data.
     * @param path the csv file path
     */
    csvParser(string path);

    /**
     * The query method of csvParser， which return the value base on keyName.
     * @param keyName the keyName value of the record
     * @return the value of the record
     */
    string* query(string keyName);

    string* query(int keyValue);
};


#endif //SUNISTOS_CSVPARSER_H
