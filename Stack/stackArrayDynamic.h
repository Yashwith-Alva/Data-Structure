#pragma once

#include <iostream>

/**
 * @brief Stack uses First in Last out
 *
 */
class Stack
{
    int top;
    int capacity = 10;

public:
    int *a;

    Stack();
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void doubleSize();
    void display();

    int getTop();
};

/**
 * @brief Construct a new Stack:: Stack object
 *
 */
Stack::Stack()
{
    top = -1;
    a = (int *)malloc(sizeof(int) * capacity);
}

/**
 * @brief Pushes a new Element inside Stack
 *
 * @param x Element to be pushed
 * @return true - Pushed sucessfully
 * @return false - Push was Unsuccessfull
 */
bool Stack::push(int x)
{
    if (top >= capacity - 1)
    {
        doubleSize();
        push(x);
    }
    else
    {
        ++top;
        *(a + top) = x;
        std::cout << x << " Pushed into Stack" << std::endl;
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

/**
 * @brief Doubles the stack
 *
 */
void Stack::doubleSize()
{
    capacity *= 2;
    realloc(a, sizeof(int) * capacity);
}

/**
 * @brief Display the Stack
 *
 */
void Stack::display()
{
    if (!isEmpty())
    {
        for (int i = 0; i <= top; i++)
        {
            std::cout << *(a + i) << " ";
        }
        std::cout << "" << std::endl;
    }
}

/**
 * @brief Get the Top value
 *
 * @return int Top value
 */
int Stack::getTop()
{
    return top;
}