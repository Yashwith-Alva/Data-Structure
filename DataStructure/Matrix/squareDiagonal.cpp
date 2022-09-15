/**
 * @brief Find square of diagonal in O(n).
 *
 */

#include <iostream>
using namespace std;

#define MAX 100

void diagonalSquareMatrix(int mat[][MAX], int row, int col)
{
    cout << "Principal Diagonol: " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << mat[i][i] * mat[i][i] << " ";
    }

    cout << "\n\nOther Diagonol: " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << mat[i][row - i - 1] * mat[i][row - i - 1] << " ";
    }
}

int main()
{
    int a[][MAX] = {{2, 5, 7}, {3, 7, 2}, {5, 6, 9}};
    diagonalSquareMatrix(a, 3, 3);
    cout << "" << endl;
    return 0;
}