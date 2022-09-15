#pragma once

#include <iostream>
#define MAX 100

/**
 * @brief Stack uses FIRST IN LAST OUT.
 *
 */
class Stack
{
    int top;

public:
    int a[MAX];

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

/**
 * @brief Pushes a new Element inside Stack
 *
 * @param x Element to be pushed
 * @return true - Pushed sucessfully
 * @return false - Push was Unsuccessfull
 */
bool Stack::push(int x)
{
    if (top >= MAX - 1)
    {
        std::cout << "Stack Overflow" << std::endl;
        return false;
    }
    else
    {
        a[++top] = x;
        std::cout << x << "Pushed into Stack" << std::endl;
        return true;
    }
}

/**
 * @brief Delete the last element in the Stack
 *
 * @return int - The deleted element of the Stack
 */
int Stack::pop()
{
    if (top < 0)
    {
        std::cout << "Stack Underflow" << std::endl;
        return 0;
    }
    else
    {
        return a[top--];
    }
}

/**
 * @brief Get Topmost element
 *
 * @return int Topmost Element
 */
int Stack::peek()
{
    if (top < 0)
    {
        std::cout << "Stack is Empty" << std::endl;
    }
    else
    {
        return a[top];
    }
}

/**
 * @brief Checks if Stack is Empty
 *
 * @return true Stack is Empty
 * @return false Stack is not Empty
 */
bool Stack::isEmpty()
{
    return (top < 0);
}