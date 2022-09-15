/**
 * @brief Finding time of traversal for Row and Columns
 * Time Complexity for both row and col access will be equal to O(n^2).
 * But even then there must be a time difference, this occurs because of cache level.
 * Row is faster than Col
 */

#include <stdio.h>
#include <time.h>

#define MAX 10000

int arr[MAX][MAX] = {0};

void rowMajor()
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            arr[i][j]++;
        }
    }
}

void colMajor()
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            arr[j][i]++;
        }
    }
}

int main()
{
    // Time taken by Row Major
    clock_t t = clock();
    rowMajor();
    t = clock() - t;

    printf("Row Major access time: %f s\n", t / (float)CLOCKS_PER_SEC);

    // Time taken by Row Major
    t = clock();
    colMajor();
    t = clock() - t;

    printf("Column Major access time: %f s\n", t / (float)CLOCKS_PER_SEC);
    return 0;
}