//
// Created by cyy on 2021/5/18.
//

#ifndef SUNISTOS_PROCESS_H
#define SUNISTOS_PROCESS_H

enum process_status {
    process_running,
    process_ready,
    process_queuing,
    process_blocked
};

class process {
private:
    unsigned long processId;
    unsigned long processPriority;
    unsigned long processExecutionTime;
    unsigned long processContentLength;
    unsigned long processContextLength;
    process_status processStatus;

    process* nextProcess;
    // void* processContent;
    // void* processContext;

public:
    unsigned long ProcessId();
    unsigned long ProcessPriority();
    unsigned long ProcessExecutionTime();
    unsigned long ProcessContentLength();
    unsigned long ProcessContextLength();
    process_status ProcessStatus();

    process();
};


#endif //SUNISTOS_PROCESS_H
