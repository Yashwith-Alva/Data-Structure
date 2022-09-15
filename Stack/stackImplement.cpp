#include <iostream>
//#include "stackArr.h"
#include "stackArrayDynamic.h"

int main()
{
    Stack Hello;
    for (int i = 1; i <= 15; i++)
    {
        Hello.push(i);
    }
    Hello.display();
    std::cout << Hello.peek() << std::endl;
    std::cout << "Pop: " << Hello.pop() << std::endl;

    std::cout << "Top: " << Hello.getTop() << std::endl;
    Hello.display();
}