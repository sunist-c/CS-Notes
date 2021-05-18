//
// Created by Sunist Chan on 2021/5/12.
//

#ifndef SUNISTOS_CSV_FILE_H
#define SUNISTOS_CSV_FILE_H

#include <fstream>
#include <string>
#include <sstream>

#include "datastructures/template/t_list.hpp"
#include "datastructures/template/t_datatable.hpp"

namespace osu {
    class csv_file {
    private:
        osl::t_datatable<std::string> *csv_data;

    public:

        csv_file(std::string path);
        csv_file(unsigned long column_count, std::string* column_names);

        void LoadFile(std::string path, bool has_title = false);

        osl_p::t_datatable_row<std::string>& operator[](unsigned long index) {
            return this->csv_data->operator[](index);
        }
    };
}




#endif //SUNISTOS_CSV_FILE_H
