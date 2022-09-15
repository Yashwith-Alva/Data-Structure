#include <iostream>

#define R 4
#define C 4

using namespace std;

void PrintArr(int m, int n, int arr[R][C])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
    }
    cout << "" << endl;
}

void UpperTriangle(int m, int n, int arr[R][C])
{
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < i; j++)
            arr[i][j] = 0;
    }
}

void lowerTriangle(int m, int n, int arr[R][C])
{
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            arr[i][j] = 0;
    }
}

void diagonalMatrix(int m, int n, int arr[R][C])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i != j)
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    int arr[R][C] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // UpperTriangle(R, C, arr);
    // PrintArr(R, C, arr);

    // lowerTriangle(R, C, arr);
    // PrintArr(R, C, arr);
    diagonalMatrix(R, C, arr);
    PrintArr(R, C, arr);
}