#include <iostream>
#include "linkedlist.h"
using namespace std;

void ReverseList(Node **Head)
{
    Node *curr, *link, *prev;
    curr = *Head;
    link = (*Head)->next;
    prev = nullptr;

    while (link != nullptr)
    {
        curr->next = prev;
        prev = curr;
        curr = link;
        link = link->next;
    }
    curr->next = prev;
    prev = curr;
    *Head = prev;
}

int main()
{
    Node *Head = new Node;
    Head = nullptr;
    Head = MultipleInsert(Head, 8, 1, 2, 3, 4, 5, 6, 7, 8);

    cout << "Before Reversing: " << endl;
    PrintList(Head);

    ReverseList(&Head);

    cout << "After Reversing: " << endl;
    PrintList(Head);
}
