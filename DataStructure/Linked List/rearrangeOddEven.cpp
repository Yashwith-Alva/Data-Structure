#include <iostream>
#include "linkedList.h"
using namespace std;

void RearrangeOddEven(Node **Start)
{
    Node *EvnPtr, *OddPtr, *curr;
    EvnPtr = (*Start)->next;
    OddPtr = EvnPtr->next;
    curr = *Start;
}

int main()
{
    Node *Head = new Node;
    Head = nullptr;
    Head = MultipleInsert(Head, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

    cout << "Before Rearranging: " << endl;
    PrintList(Head);

    RearrangeOddEven(&Head);

    cout << "After Rearranging: " << endl;
    PrintList(Head);
}

//
// 1->3->2->4->5->6->7->8->9->10
//

/*
N numbers means :


*/
