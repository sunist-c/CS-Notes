//
// Created by Sunist Chan on 2021/5/12.
//

#include "csv_file.h"

osu::csv_file::csv_file(std::string path) {
    std::ifstream __csv(path);
    if (!__csv.is_open()) {
        // todo: UnComplete - Exception 403
        throw 403;
    }
    else {
        std::string __buff_column_name = "", __buff_name;
        getline(__csv, __buff_column_name);
        unsigned long __column_count = 0;
        t_list<std::string> __column_names;

        for (unsigned long i = 0; i < __buff_column_name.length(); ++i) {
            if (__buff_column_name[i] != ',') {
                __buff_name += __buff_column_name[i];
            }
            else {
                __column_names.AddBack(__buff_name);
                __column_count++;
            }
        }
        __column_names.AddBack(__buff_name);

        std::string* __column_names_arr = new std::string [__column_count];
        for (unsigned long i = 0; i < __column_count; ++i) {
            __column_names_arr[i] = __column_names[i];
        }

        this->csv_data = new osl::t_datatable<std::string>(__column_count, __column_names_arr);

        std::string __buff = "";
        while (getline(__csv, __buff)) {
            unsigned long __temp_length = __buff.length();
            t_list<std::string> __temp_list;
            std::string __temp_load_buff = "";
            unsigned long __temp_count = 0;
            for (unsigned long i = 0; i < __temp_length; ++i) {
                if (__buff[i] != ',') {
                    __temp_load_buff += __buff[i];
                }
                else {
                    __temp_list.AddBack(__temp_load_buff);
                    __temp_count++;
                }
            }
            __temp_list.AddBack(__temp_load_buff);

            std::string *__temp_arr = new std::string[__temp_count];
            for (unsigned long i = 0; i < __temp_count; ++i) {
                __temp_arr[i] = __temp_list[i];
            }

            this->csv_data->AddRow(__temp_arr);
        }
        __csv.close();
    }
}

osu::csv_file::csv_file(unsigned long column_count, std::string *column_names) {
    this->csv_data = new osl::t_datatable<std::string> (column_count, column_names);
}

void osu::csv_file::LoadFile(std::string path) {
    std::ifstream __csv(path);
    if (!__csv.is_open()) {
        // todo: UnComplete - Exception 403
        std::cout << "ERROR 403/404 ON LOADING FILE" <<std::endl;
        throw 403;
    }
    else {
        std::cout << "start_i" << std::endl;
        std::string __buff = "";
        while (getline(__csv, __buff)) {
            unsigned long __temp_length = __buff.length();
            t_list<std::string> __temp_list;
            std::string __temp_load_buff = "";
            unsigned long __temp_count = 0;
            for (unsigned long i = 0; i < __temp_length; ++i) {
                if (__buff[i] != ',') {
                    __temp_load_buff += __buff[i];
                }
                else {
                    __temp_list.AddBack(__temp_load_buff);
                    __temp_count++;
                }
            }
            __temp_list.AddBack(__temp_load_buff);

            std::string *__temp_arr = new std::string[__temp_count];
            for (unsigned long i = 0; i < __temp_count; ++i) {
                __temp_arr[i] = __temp_list[i];
            }

            this->csv_data->AddRow(__temp_arr);
        }
        __csv.close();
    }
}