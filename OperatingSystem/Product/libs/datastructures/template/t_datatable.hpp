//
// Created by Sunist Chan on 2021/5/17.
//

#ifndef SUNISTOS_T_DATATABLE_HPP
#define SUNISTOS_T_DATATABLE_HPP

#include <iostream>
#include "t_list.hpp"

namespace osl_p {
    template<class t>
    class t_datatable_row {
    private:
        unsigned long row_index;
    };

    class t_datatable_column {
    private:
        std::string column_name;
    };
}

namespace osl {
    class t_datatable {
    private:
        unsigned long row_count;
        unsigned long column_count;
        t_list<std::string> column_names;

    public:
        unsigned long RowCount() {
            return row_count;
        }

        unsigned long ColumnCount() {
            return column_count;
        }

        osl_p::t_datatable_row& operator[](unsigned long row_index) {

        }


    };
}

#endif //SUNISTOS_T_DATATABLE_HPP
