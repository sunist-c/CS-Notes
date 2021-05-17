//
// Created by Sunist Chan on 2021/5/11.
//

#ifndef SUNISTOS_MESSAGE_H
#define SUNISTOS_MESSAGE_H

struct message {
    int msg_local_pid;
    int msg_target_pid;
    int msg_argc;
    char** msg_argv;
};


#endif //SUNISTOS_MESSAGE_H
