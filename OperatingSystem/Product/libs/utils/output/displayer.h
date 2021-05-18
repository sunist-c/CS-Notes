//
// Created by Sunist Chan on 2021/5/12.
//

#ifndef SUNISTOS_DISPLAYER_H
#define SUNISTOS_DISPLAYER_H

#include "../../datastructures/template/t_datatable.hpp"

namespace osu {
    enum display_style {
        left,
        right,
        center
    };

    class displayed_table : public osl::t_datatable<std::string> {
    private:
        t_list<int> columns_width;
        display_style style;

    public:
        displayed_table(unsigned long column_count, std::string* column_names);

        void display();
    };
}

class displayer {
public:
};


#endif //SUNISTOS_DISPLAYER_H
