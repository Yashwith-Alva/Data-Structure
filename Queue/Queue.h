#pragma once

#include <iostream>
#include <stdarg.h>
#define INT_MIN -1

class Queue
{
public:
    int front, rear, size;
    unsigned capacity;
    int *arr;
};

Queue *CreateQueue(unsigned capacity)
{
    Queue *queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->arr = new int[queue->capacity];
}

int isFull(Queue *queue)
{
    return (queue->size == queue->capacity);
}

int isEmpty(Queue *queue)
{
    return (queue->size == 0);
}

void enQueue(Queue *queue, int item)
{
    if (isFull(queue))
    {
        std::cout << "*Warning* Queue is full!" << std::endl;
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->arr[queue->rear] = item;
    queue->size++;
    std::cout << item << " enque to queue\n";
}

void multiEnqueue(Queue *queue, int arg_count, ...)
{
    va_list valist;
    va_start(valist, arg_count);

    for (int i = 0; i < arg_count; i++)
    {
        enQueue(queue, va_arg(valist, int));
    }
}

int deQueue(Queue *queue)
{
    if (isEmpty(queue))
    {
        std::cout << "*Warning* Queue is empty" << std::endl;
        return INT_MIN;
    }
    int item = queue->arr[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return item;
}

int GetFront(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;

    return queue->arr[queue->front];
}

int GetRear(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;

    return queue->arr[queue->rear];
}