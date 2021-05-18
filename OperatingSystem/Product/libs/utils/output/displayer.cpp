//
// Created by Sunist Chan on 2021/5/12.
//

#include "displayer.h"

osu::displayed_table::displayed_table(unsigned long column_count, std::string *column_names) : t_datatable(column_count, column_names) {
    for (unsigned long i = 0; i < column_count; ++i) {
        columns_width.AddBack(column_names[i].length());
    }
}

void osu::displayed_table::display(osu::display_style style, char div_charac) {
    std::cout << "start" << std::endl;
    draw_line(div_charac);
    draw_name(div_charac);
    draw_line(div_charac);
    for (unsigned long i = 0; i < RowCount(); ++i) {
        draw_data(i, style, div_charac);
    }
    draw_line();
}

void osu::displayed_table::AddRow(std::string *data) {
    t_datatable::AddRow(data);
    for (unsigned long i = 0; i < ColumnCount(); ++i) {
        columns_width[i] = columns_width[i] > data[i].length() ? columns_width[i] : data[i].length();
    }
}

void osu::displayed_table::draw_line(char div_charac) {
    std::string __temp = "";
    if (div_charac == '|') {
        __temp += "+";
    }
    else {
        __temp += "-";
    }
    for (unsigned long i = 0; i < ColumnCount(); ++i) {
        for (unsigned long j = 0; j < columns_width[i]; ++j) {
            __temp += "-";
        }
        if (div_charac == '|') {
            __temp += "+";
        }
        else {
            __temp += "-";
        }
    }
    std::cout << __temp << std::endl;
}

void osu::displayed_table::draw_data(unsigned long row_index, display_style style, char div_charac) {
    std::cout << div_charac;
    for (unsigned long i = 0; i < ColumnCount(); ++i) {
        draw_data(i, this->data[row_index][i], style);
        std::cout << div_charac;
    }
    std::cout << std::endl;
}

void osu::displayed_table::draw_name(char div_charac) {
    std::cout << div_charac;
    for (unsigned long i = 0; i < ColumnCount(); ++i) {
        draw_data(i, GetColumnName(i), center);
        std::cout << div_charac;
    }
    std::cout << std::endl;
}

void osu::displayed_table::draw_data(unsigned long column_index, std::string data, osu::display_style style) {
    switch (style) {
        case left:

            std::cout << data;
            for (unsigned long i = data.length(); i < columns_width[column_index]; ++i) {
                std::cout << " ";
            }

            break;

        case right:

            for (unsigned long i = data.length(); i < columns_width[column_index]; ++i) {
                std::cout << " ";
            }
            std::cout << data;

            break;

        case center:

            unsigned long __left, __right;
            __left = (columns_width[column_index] - data.length()) / 2;
            __right = columns_width[column_index] - data.length() - __left;
            for (unsigned long i = 0; i < __left; ++i) {
                std::cout << " ";
            }

            std::cout << data;

            for (unsigned long i = 0; i < __right; ++i) {
                std::cout << " ";
            }

            break;

        default:
            break;
    }
}
