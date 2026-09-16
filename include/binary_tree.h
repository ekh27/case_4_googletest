#pragma once

// Контракт бинарного дерева поиска. pop возвращает и удаляет минимальный элемент.
class BinaryTree {
public:
    void push(int value);
    int pop();
    bool search(int value) const;
};
