//
// Created by Sunist Chan on 2021/5/11.
//

#ifndef SUNISTOS_PAGE_H
#define SUNISTOS_PAGE_H


class page {
private:
    int* innerData;
public:
    int p_size;
    int p_last_view_time;
    int p_create_time;
    int p_pid;

    int *loadData(int __start, int __len);
};


#endif //SUNISTOS_PAGE_H
