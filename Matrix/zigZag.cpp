#include <iostream>

using namespace std;

#define R 4
#define C 4

void printZigZag(int arr[R][C], int m, int n)
{
    int TotalLines, k, l;
    // K and L are the index to print
    if (m == n)
    {
        TotalLines = 2 * m - 1;
        cout << "Total zigZag : " << TotalLines << endl;
    }

    bool reverse = true;
    for (int i = 0; i < TotalLines; i++)
    {
        if (i <= TotalLines / 2)
        {
            for (int j = 0; j <= i; j++)
            {
                if (reverse)
                {
                    k = i - j;
                    l = j;
                }
                else
                {
                    k = j;
                    l = i - j;
                }
                cout << arr[k][l] << " ";
            }
        }
        else
        {
            for (int j = i - TotalLines / 2; j <= TotalLines / 2; j++)
            {
                if (reverse)
                {
                    k = i - j;
                    l = j;
                }
                else
                {
                    k = j;
                    l = i - j;
                }
                cout << arr[k][l] << " ";
            }
        }

        reverse = !reverse;
    }
}

int main()
{
    int arr[R][C] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printZigZag(arr, R, C);
}