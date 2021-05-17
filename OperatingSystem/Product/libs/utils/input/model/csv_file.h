//
// Created by Sunist Chan on 2021/5/12.
//

#ifndef SUNISTOS_CSV_FILE_H
#define SUNISTOS_CSV_FILE_H

#include "iostream"

namespace osu_p {
    class csv_line {
    public:
        std::string operator() (unsigned long columnIndex);
    };
}

namespace osu {

    class csv_file {
    public:
        csv_file(std::string columnsName ...);

        unsigned long get_columIndex(std::string columnName);

        osu_p::csv_line operator[](unsigned long rowIndex);
    };
}




#endif //SUNISTOS_CSV_FILE_H
