//
// Created by Sunist Chan on 2021/5/12.
//

#include "csv_file.h"

osu::csv_file::csv_file(std::string path) {
    std::ifstream __csv_file(path);
    if (!__csv_file.is_open()) {
        std::cout << "Error on loading CSV file" << std::endl;
    }
    else {
        std::string __reading_buffer;
        std::getline(__csv_file, __reading_buffer);
        std::stringstream __reading_buffer_stream(__reading_buffer);
        t_list<std::string> __column_name_buffer_list;
        while (std::getline(__reading_buffer_stream, __reading_buffer, ',')) {
            __column_name_buffer_list.AddBack(__reading_buffer);
        }

        std::string *__column_names = new std::string [__column_name_buffer_list.Size()];
        for (unsigned long i = 0; i < __column_name_buffer_list.Size(); ++i) {
            __column_names[i] = __column_name_buffer_list[i];
        }

        this->csv_data = new osl::t_datatable<std::string> (__column_name_buffer_list.Size(), __column_names);

        LoadFile(path, true);
    }
}

osu::csv_file::csv_file(unsigned long column_count, std::string *column_names) {
    this->csv_data = new osl::t_datatable<std::string> (column_count, column_names);
}

void osu::csv_file::LoadFile(std::string path, bool has_title) {
    std::ifstream __csv_file(path);
    if (!__csv_file.is_open()) {
        std::cout << "Error on loading CSV file" << std::endl;
    }
    else {
        std::string __reading_buffer;
        if (has_title) {
            std::getline(__csv_file,__reading_buffer);
        }
        while (std::getline(__csv_file, __reading_buffer)) {
            std::stringstream __reading_buffer_stream(__reading_buffer);
            unsigned long __temp_index = 0;
            std::string *__temp_data_row = new std::string[this->csv_data->ColumnCount()];
            while (std::getline(__reading_buffer_stream, __reading_buffer, ',')) {
                __temp_data_row[__temp_index++] = __reading_buffer;
            }
            this->csv_data->AddRow(__temp_data_row);
        }
    }
}
