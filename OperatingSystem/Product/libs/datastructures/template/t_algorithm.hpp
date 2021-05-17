//
// Created by Sunist Chan on 2021/5/13.
//

#ifndef SUNISTOS_T_ALGORITHM_HPP
#define SUNISTOS_T_ALGORITHM_HPP

#include <iostream>

namespace osl_a {
    template<class k> std::string default_hash_generator(k key);

    unsigned long base_convert_to_10 (std::string value, int value_base=10) {
        unsigned long target_value = 0;
        std::string str = value;
        int t_index = 1;

        for (int i = str.length()-1; i >= 0; --i) {
            int t_val = (value[i] >= '0' && value[i] <= '9') ? value[i] - '0' :
                        (value[i] >= 'a' && value[i] <= 'z') ? value[i] - 'a' + 10 :
                        (value[i] >= 'A' && value[i] <= 'Z') ? value[i] - 'A' + 34 : -1;
            if (t_val == -1) {
                // todo: Generate Exception "ArgumentError"
                throw "ArgumentError";
            }
            target_value += t_val * t_index;
            t_index *= value_base;
        }
    }

//    template<class value_type> unsigned long base_convertor(value_type value, int value_base = 10, std::string (*IconvertToString)(value_type) = nullptr) {
//        if (
//                typeid(value_type) == typeid(const char*) ||
//                typeid(value_type) == typeid(std::string)
//        ) {
//            unsigned long target_value = 0;
//            std::string str = value;
//            int t_index = 1;
//
//            for (int i = str.length()-1; i >= 0; --i) {
//                int t_val = (value[i] >= '0' && value[i] <= '9') ? value[i] - '0' :
//                        (value[i] >= 'a' && value[i] <= 'z') ? value[i] - 'a' + 10 :
//                        (value[i] >= 'A' && value[i] <= 'Z') ? value[i] - 'A' + 34 : -1;
//                if (t_val == -1) {
//                    // todo: Generate Exception "ArgumentError"
//                    throw "ArgumentError";
//                }
//                target_value += t_val * t_index;
//                t_index *= value_base;
//            }
//
//            return target_value;
//        }
//        else if (
//                typeid(value_type) == typeid(int) ||
//                typeid(value_type) == typeid(long) ||
//                typeid(value_type) == typeid(short) ||
//                typeid(value_type) == typeid(long long) ||
//                typeid(value_type) == typeid(unsigned int) ||
//                typeid(value_type) == typeid(unsigned short) ||
//                typeid(value_type) == typeid(unsigned long) ||
//                typeid(value_type) == typeid(unsigned long long)
//                ) {
//            unsigned long target_value = 0;
//            value = value > 0 ? value : 0-value;
//            int t_index = 1;
//
//            while (value != 0) {
//                target_value += (value % 10) * t_index;
//                t_index *= value_base;
//                value /= 10;
//            }
//
//            return target_value;
//        }
//        else if (IconvertToString == nullptr) {
//            // todo: Generate Exception "ArgumentError"
//            std::cout << 114514 << std::endl;
//            return 0;
//            throw "ArgumentError";
//        }
//        else {
//            return 0;
//        }
//    }
}

#endif //SUNISTOS_T_ALGORITHM_HPP
