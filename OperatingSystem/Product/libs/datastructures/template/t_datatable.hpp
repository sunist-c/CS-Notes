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
        unsigned long column_count;
        t_list<t> data;

    public:
        t_datatable_row(unsigned long column_count, t* data;) {
            this->column_count = column_count;
            for (unsigned long i = 0; i < column_count; ++i) {
                this->data.AddBack(data[i]);
            }
        }

        t& operator[](unsigned long row_index) {
            return this->data[row_index];
        }

        void AddColumn(t data, unsigned long index = 0) {
            this->data.Insert(data, index);
        }

        void AddColumnBack(t data) {
            this->data.AddBack(data);
        }

        void DeleteColumn(unsigned long index) {
            this->data.Erase(index);
        }

    };
}

namespace osl {
    template<class t>
    class t_datatable {
    private:
        unsigned long row_count;
        unsigned long column_count;
        t_list<std::string> column_names;
        t_list<osl_p::t_datatable_row<t>> data;

    public:
        t_datatable(std::string column_names ...) {
            row_count = 0;
            // todo: Finish args way to construct t_datatable
        }

        t_datatable(unsigned long columns_count, std::string* column_names) {
            this->column_count = reinterpret_cast<unsigned long>(column_names);
            this->row_count = 0;
            for (unsigned long i = 0; i < columns_count; ++i) {
                this->column_names.AddBack(column_names[i]);
            }
        }

        unsigned long RowCount() {
            return row_count;
        }

        unsigned long ColumnCount() {
            return column_count;
        }

        unsigned long GetRowIndex(std::string column_name) {
            for (unsigned long i = 0; i <= column_count; ++i) {
                if (column_name == column_names[i]) {
                    return i;
                }
            }
            return -1;
        }

        void AddRow(t* data) {
            osl_p::t_datatable_row<t> datatableRow(column_count, data);
            this->data.AddBack(datatableRow);
            row_count += 1;
        }

        void AddColumn(std::string column_name, t default_column_value) {
            this->column_names.AddBack(column_name);
            for (unsigned long i = 0; i < row_count; ++i) {
                this->data[i].AddColumnBack(default_column_value);
            }
            column_count += 1;
        }

        // todo: Delete Columns and Delete Rows

    };
}

#endif //SUNISTOS_T_DATATABLE_HPP
