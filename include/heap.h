#pragma once

// Контракт max-heap: pop возвращает наибольший сохранённый элемент.
class Heap {
public:
    void push(int value);
    int pop();
    bool empty() const;
};
