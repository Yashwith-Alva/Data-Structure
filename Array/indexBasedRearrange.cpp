/**
 * @brief Rearrange elements such that all elements at even index greater than element before it and vice versa for odd elements.
 * Time Complexity: O(nlogn)
 */

#include <iostream>
#include <algorithm>

using namespace std;

void rearrangeArr(int *arr, int n)
{
    int evenPos = n / 2;
    int oddPos = n - evenPos;

    // Dynamically allocated array
    int *tempArr = new int[n];

    // Copy original array content to Auxillary array.
    for (int i = 0; i < n; i++)
    {
        tempArr[i] = arr[i];
    }

    // sort the auxillary array
    sort(tempArr, tempArr + n);
    int j = oddPos - 1;

    for (int i = 0; i < n; i += 2)
    {
        arr[i] = tempArr[j];
        j--;
    }

    j = oddPos;

    for (int i = 1; i < n; i += 2)
    {
        arr[i] = tempArr[j];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "" << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    rearrangeArr(arr, size);
    return 0;
}