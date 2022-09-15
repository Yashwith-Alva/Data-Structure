#include <iostream>
#include "linkedList.h"

using namespace std;

int main()
{
    Node *Head = new Node;
    Head = nullptr;
    Head = InsertNode(4, Head);
    Head = MultipleInsert(Head, 3, 2, 3, 6);

    cout << "Total Number of Elements: " << GetCount(Head) << endl;
    PrintList(Head);

    Head = DeleteEnd(Head);
    Head = DeleteStart(Head);

    cout << "Total Number of Elements: " << GetCount(Head) << endl;
    PrintList(Head);

    cout << "Does the List loop? " << detectLoop(Head) << endl;
}