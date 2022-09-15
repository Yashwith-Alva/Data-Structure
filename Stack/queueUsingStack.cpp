#include <iostream>
#include <stack>

using namespace std;

typedef struct Q
{
    stack<int> s1, s2;

    void enQ(int x)
    {
        // Move all elements from s1 to s2
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        // push x into stack
        s1.push(x);

        // push everything back to s1
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int deQ()
    {
        if (s1.empty())
        {
            cout << "Queue is Empty" << endl;
            exit(0);
        }

        // Return top of s1
        int x = s1.top();
        s1.pop();
        return x;
    }
} Queue;

int main()
{
    Queue q;
    q.enQ(1);
    q.enQ(2);
    q.enQ(3);

    cout << q.deQ() << "\n";
    cout << q.deQ() << "\n";
    cout << q.deQ() << "\n";
    cout << q.deQ() << "\n";
}