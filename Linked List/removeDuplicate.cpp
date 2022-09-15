/**
 * @brief Removing Duplicates from the list using Hashing
 * TimeComplexity: O(N), assuming hash table access time is O(1).
 */

#include <iostream>
#include <unordered_set>
#include "linkedList.h"

void RemoveDuplicate(Node *start)
{
    std::unordered_set<int> seen;

    Node *curr = start;
    Node *prev = nullptr;
    while (curr != nullptr)
    {
        if (seen.find(curr->data) != seen.end())
        {
            prev->next = curr->next;
            delete (curr);
        }
        else
        {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
}

int main()
{
    Node *Head = new Node;
    Head = nullptr;

    Head = MultipleInsert(Head, 11, 1, 2, 3, 4, 1, 2, 5, 4, 6, 3, 4);
    PrintList(Head);

    RemoveDuplicate(Head);
    PrintList(Head);
}