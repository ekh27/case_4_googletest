#pragma once

// Контракт очереди FIFO (first in, first out).
class Queue {
public:
    void push(int value);
    int pop();
    bool empty() const;
};
