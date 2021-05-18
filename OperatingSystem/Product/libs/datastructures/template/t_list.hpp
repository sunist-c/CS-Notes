//
// Created by Sunist Chan on 2021/5/12.
//

#ifndef SUNISTOS_T_LIST_HPP
#define SUNISTOS_T_LIST_HPP

#include "list"

template<class t>
class t_list {
private:
    std::list<t> data;

public:
    unsigned long Size() {
        return this->data.size();
    }

    bool isEmpty() {
        return Size() == 0;
    }

    void AddBack(t data) {
        this->data.push_back(data);
    }

    void AddFront(t data) {
        this->data.push_front(data);
    }

    void PopBack() {
        this->data.pop_back();
    }

    void PopFront() {
        this->data.pop_front();
    }

    void Insert(t data, unsigned long index) {
        auto iter = this->data.begin();
        for (unsigned long i = 0; i < index; ++i) {
            iter++;
        }
        this->data.insert(iter, data);
    }

    void Erase(unsigned long index) {
        auto iter = this->data.begin();
        for (unsigned long i = 0; i < index; ++i) {
            iter++;
        }
        this->data.erase(iter);
    }

    t& operator[](unsigned long index) {
        auto iter = this->data.begin();
        for (unsigned long i = 0; i < index; ++i) {
            iter++;
        }
        return *iter;
    }
};

#endif //SUNISTOS_T_LIST_HPP
