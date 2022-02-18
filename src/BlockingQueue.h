//
// Created by ross on 18/02/2022.
//

#ifndef SIGNAPSE_BLOCKINGQUEUE_H
#define SIGNAPSE_BLOCKINGQUEUE_H
#include <queue>
#include <mutex>
#include <condition_variable>
#include "scene.h"

template <typename T>
class BlockingQueue {
public:
    void Put(T toPush);
    T Get();

private:
    std::queue<T> internalQueue;
    std::mutex mutex;
    std::condition_variable condition;
};



#endif //SIGNAPSE_BLOCKINGQUEUE_H
