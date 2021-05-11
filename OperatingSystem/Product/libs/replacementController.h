//
// Created by Sunist Chan on 2021/5/11.
//

#ifndef SUNISTOS_REPLACEMENTCONTROLLER_H
#define SUNISTOS_REPLACEMENTCONTROLLER_H


class replacementController {
private:
    bool molloc(int pid, int size);
    bool free(int pid);
    bool realloc(int pid, int size);
    bool write(int start, int len, int* data);
    int* read(int start, int len);
public:
    void* api(int argc, char** argv);

};

#endif //SUNISTOS_REPLACEMENTCONTROLLER_H
