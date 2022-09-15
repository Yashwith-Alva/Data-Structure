#pragma once

#include <iostream>
#include <stdarg.h>
#include <unordered_set>

/**
 * @brief  Implement list in c++.
 *
 */
class Node
{
public:
    int data;
    Node *next;
};

/**
 * @brief Used for counting the number of nodes.
 *
 * @param NodeGiven Pointer to the start of Node whose node has to counted
 * @return int - Count of number of nodes
 */
int GetCount(Node *NodeStart)
{
    Node *counterNode = NodeStart;
    int count = 1;
    while (counterNode->next != nullptr)
    {
        count++;
        counterNode = counterNode->next;
    }
    return count;
}

/**
 * @brief Creates a node and initialize it's data
 *
 * @param ele Node data value
 * @return Node* - Data Initialized
 */
Node *CreateNode(int ele)
{
    Node *temp = new Node;
    if (!temp)
    {
        return nullptr;
    }
    temp->data = ele;
    temp->next = nullptr;

    return temp;
}

/**
 * @brief Inserts Node into the Linked List
 *
 * @param data - Data of the New element of List
 * @param startNode - Pointer to Start of the List
 * @return Node* - Return the modified Node
 */
Node *InsertNode(int data, Node *startNode)
{
    Node *newNode = CreateNode(data);
    if (newNode == nullptr)
    {
        std::cout << "Failed to Insert" << std::endl;
        return startNode;
    }

    if (startNode == nullptr)
    {
        startNode = newNode;
    }
    else if (startNode->next == nullptr)
    {
        startNode->next = newNode;
    }
    else
    {
        Node *dstart = startNode;
        while (dstart->next != nullptr)
        {
            dstart = dstart->next;
        }
        dstart->next = newNode;
    }

    return startNode;
}

/**
 * @brief Delete a node from the end of the List
 *
 * @param startNode - Pointer to the start of list
 * * @return Node* - Return the modified Node
 */
Node *DeleteEnd(Node *startNode)
{
    if (startNode == nullptr)
    {
        std::cout << "No elements in the List" << std::endl;
        std::cin.get();
    }
    else if (startNode->next == nullptr)
    {
        startNode = nullptr;
    }
    else
    {
        Node *pstart = nullptr;
        Node *dstart = startNode;
        while (dstart->next != nullptr)
        {
            pstart = dstart;
            dstart = dstart->next;
        }
        pstart->next = nullptr;
        delete dstart;
    }
    return startNode;
}

/**
 * @brief Delete element from the front of Linked List
 *
 * @param startNode Pointer to the start of List
 * * @return Node* - Return the modified Node
 */
Node *DeleteStart(Node *startNode)
{
    if (startNode == nullptr)
    {
        std::cout << "No elements in the List" << std::endl;
        std::cin.get();
    }
    else if (startNode->next == nullptr)
    {
        startNode = nullptr;
    }
    else
    {
        Node *dstart = startNode;
        startNode = dstart->next;
        delete dstart;
    }
    return startNode;
}

/**
 * @brief Insert specified number of elements into the List
 *
 * @param startNode Starting Node of the List
 * @param arg_count Number of Inputs
 * @param ...  Multiple integers to insert into List
 * @return Node*  Output a modified List
 */
Node *MultipleInsert(Node *startNode, int arg_count, ...)
{
    va_list vaList;
    va_start(vaList, arg_count);

    for (int i = 0; i < arg_count; i++)
    {
        startNode = InsertNode(va_arg(vaList, int), startNode);
    }
    va_end(vaList);

    return startNode;
}

/**
 * @brief Prints the List
 *
 * @param startNode Pointer to the Start of List
 */
void PrintList(Node *startNode)
{
    Node *dstart = startNode;
    while (dstart != nullptr)
    {
        std::cout << dstart->data << " ";
        dstart = dstart->next;
    }
    std::cout << "" << std::endl;
}

/**
 * @brief Detects Loop in the list
 *
 * @param startNode Pointer to the start of List
 * @return true If there is a loop
 * @return false If there is no loop
 */
bool detectLoop(Node *startNode)
{
    std::unordered_set<Node *> s;
    while (startNode != NULL)
    {
        if (s.find(startNode) != s.end())
        {
            return true;
        }
        s.insert(startNode);

        startNode = startNode->next;
    }
    return false;
}
