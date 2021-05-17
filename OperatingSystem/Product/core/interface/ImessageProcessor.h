//
// Created by Sunist Chan on 2021/5/11.
//

#ifndef SUNISTOS_IMESSAGEPROCESSOR_H
#define SUNISTOS_IMESSAGEPROCESSOR_H

#include "../messagequeue/message.h"

class ImessageProcessor {
public:
    virtual message OnRecive(message msg) = 0;
    virtual message OnCall() = 0;
};


#endif //SUNISTOS_IMESSAGEPROCESSOR_H
