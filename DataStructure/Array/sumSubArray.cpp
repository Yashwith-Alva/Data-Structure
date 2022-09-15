/**
 * @brief Find a subarray which adds up to the total sum
 *
 */

#include <iostream>
using namespace std;

int subArraySum(int *arr, int n, int sum)
{
    int currSum = 0, start = 0;
    for (int i = 0; i < n; i++)
    {
        while (currSum > sum && start < i - 1)
        {
            currSum -= arr[start];
            start++;
        }

        if (currSum == sum)
        {
            cout << "Sum found between index " << start << " and " << i - 1 << endl;
            return 1;
        }

        if (i < n)
            currSum += arr[i];
    }

    cout << "NO SUBARRAY" << endl;
    return 0;
}
int main()
{
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, n, sum);
    return 0;
}