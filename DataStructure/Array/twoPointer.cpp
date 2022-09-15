// Find elements of sorted array which adds upto the Value

/**
 * @brief Two Pointer Technique
 *
 * Time Complexity = O(n log(n) )
 */

#include <iostream>
#include <algorithm>

using namespace std;

int isPairSum(int *, int, int);

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int value = 70;
    int size = *(&arr + 1) - arr;

    cout << (bool)isPairSum(arr, size, value) << endl;
}

int isPairSum(int *arr, int size, int k)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == k)
        {
            return 1;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}
