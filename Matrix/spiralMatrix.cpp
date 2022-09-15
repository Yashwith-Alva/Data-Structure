/**
 * @brief Printing Matrix spiral
 */

#include <iostream>

#define R 4
#define C 4

using namespace std;

// Prints the Matrix Spirally
void printMatrixSpiral(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;

    if (m == n)
    {
        cout << "Total number of loops run: " << 2 * m - 1 << endl;
    }
    else if (m < n)
    {
        cout << "Total number of loops run: " << 2 * m - 1 << endl;
    }
    else if (n < m)
    {
        cout << "Total number of loops run: " << 2 * n << endl;
    }
    /*
    k and l -> start of row & col
    m and n -> end of row & col
    */
    while (k < m && l < n)
    {
        // Printing the first row.
        for (i = l; i < n; ++i)
        {
            cout << a[k][i] << " ";
        }
        k++;

        // Print the last Column
        for (i = k; i < m; ++i)
        {
            cout << a[i][n - 1] << " ";
        }
        n--;

        // Print Last row
        if (k < m)
        {
            for (i = n - 1; i >= l; --i)
            {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }

        if (l < n)
        {
            for (i = m - 1; i >= k; --i)
            {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}

int main()
{
    int arr[R][C] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printMatrixSpiral(R, C, arr);
    return 0;
}