/**
 * @brief Find Peak elements in the array
 * Using Divide and Conquer
 * TimeComplexity: O(logn)
 *
 * If array is sorted ascending order: Always last element is peak
 * If array is sorted descending order: Always first element is peak
 */

#include <iostream>
using namespace std;

int findPeakEle(int *arr, int low, int high, int size)
{
    int mid = (low + high) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == size - 1 || arr[mid + 1] <= arr[mid]))
        return mid;
    else if (mid > 0 && arr[mid - 1] > arr[mid])
        return findPeakEle(arr, low, (mid - 1), size);
    else
        return findPeakEle(arr, (mid + 1), high, size);
}

int main()
{
    int arr[] = {2, 4, 5, 3, 7, 6, 9, 1};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Index of peak is: " << findPeakEle(arr, 0, size - 1, size) << endl;
    cout << "Value of Peak Element: " << arr[findPeakEle(arr, 0, size - 1, size)] << endl;
}