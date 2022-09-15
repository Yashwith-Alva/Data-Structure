#include <iostream>
#define N 3

using namespace std;

void swapDiagnol(int matrix[][N])
{
    for (int i = 0; i < N; i++)
        swap(matrix[i][i], matrix[i][N - i - 1]);
}

int main()
{
    int Matrix[N][N] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    swapDiagnol(Matrix);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cout << Matrix[i][j] << " ";

    cout << "" << endl;
}