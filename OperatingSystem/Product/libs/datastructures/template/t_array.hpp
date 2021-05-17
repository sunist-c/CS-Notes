//
// Created by Sunist Chan on 2021/5/12.
//

#ifndef SUNISTOS_T_ARRAY_HPP
#define SUNISTOS_T_ARRAY_HPP

namespace osl {

    template<class t>
    class t_array {
    private:
        t* data;
    public:
        unsigned long size;

        t_array(unsigned long size) {
            this->size = size;
            data = new t[size];
        }

        t_array<t>& operator=(const t_array<t> t_arr) {
            this->size = t_arr.size;
            for (int i = 0; i < size; ++i) {
                this->data[i] = t_arr.data[i];
            }
            return *this;
        }

        t_array<t>& operator()(t* p_arr, unsigned long size) {
            this->size = size;
            for (int i = 0; i < size; ++i) {
                this->data[i] = p_arr[i];
            }
            return *this;
        }

        t& operator[](unsigned long index) {
            return this->data[index];
        }
    };

}

#endif //SUNISTOS_T_ARRAY_HPP
