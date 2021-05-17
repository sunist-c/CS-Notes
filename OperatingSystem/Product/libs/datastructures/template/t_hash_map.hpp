//
// Created by Sunist Chan on 2021/5/12.
//

#ifndef SUNISTOS_T_HASH_MAP_HPP
#define SUNISTOS_T_HASH_MAP_HPP

#include <unordered_map>

// todo: This is the shelled DataStructure, which need to upgrade.
namespace osl {
    template<class k, class v>
    class t_hash_map {
    private:
        std::unordered_map<k, v> data;

    public:
        bool isExist(k key) {
            return data.find(key) != data.end();
        }

        v& operator[](k key) {
            return data[key];
        }
    };
}


#endif //SUNISTOS_T_HASH_MAP_HPP
