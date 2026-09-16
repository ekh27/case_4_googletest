#include <gtest/gtest.h>

#include "binary_tree.h"
#include "heap.h"
#include "queue.h"

// Очередь: push добавляет значение, а pop возвращает его.
TEST(QueueTest, PushThenPopReturnsAddedValue) {
    Queue queue;
    queue.push(10);

    EXPECT_EQ(queue.pop(), 10);
}

// Куча задана как max-heap: pop возвращает максимум.
TEST(HeapTest, PopReturnsMaximumValue) {
    Heap heap;
    heap.push(10);
    heap.push(30);
    heap.push(20);

    EXPECT_EQ(heap.pop(), 30);
}

// Дерево: search находит значение, добавленное через push.
TEST(BinaryTreeTest, SearchFindsInsertedValue) {
    BinaryTree tree;
    tree.push(15);
    tree.push(8);
    tree.push(20);

    EXPECT_TRUE(tree.search(8));
}

// Для данного интерфейса pop возвращает и удаляет минимальный элемент дерева.
TEST(BinaryTreeTest, PopReturnsMinimumValue) {
    BinaryTree tree;
    tree.push(15);
    tree.push(8);
    tree.push(20);

    EXPECT_EQ(tree.pop(), 8);
    EXPECT_FALSE(tree.search(8));
}
