/**
 * @brief Print the data of the middle element in List.
 * Create 2 pointers fast_ptr, slow_ptr.
 * For each move of slow_ptr, move the fast_ptr two times ahead.
 */
#include <iostream>
#include "linkedList.h"

using namespace std;

int FindMiddle(Node *Start)
{
    Node *fast_ptr, *slow_ptr;
    fast_ptr = Start;
    slow_ptr = Start;

    while (fast_ptr && fast_ptr->next != nullptr)
    {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }

    return slow_ptr->data;
}

int main()
{
    Node *Head = new Node;
    Head = nullptr;
    Head = InsertNode(4, Head);
    Head = MultipleInsert(Head, 5, 2, 3, 5, 6, 7);

    PrintList(Head);
    cout << "The middle element is: " << FindMiddle(Head) << endl;
}