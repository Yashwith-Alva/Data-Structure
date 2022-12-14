/**
 * @brief Rearrange array in such a way that
 * TimeComplexity: O(n*log(n))
 * wrong
 */

#include <iostream>
#include <unordered_set>

using namespace std;

void fixArray(int *arr, int n)
{
    // a set
    unordered_set<int> s;

    // Enter each element which is not -1 in set
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
            s.insert(arr[i]);
    }

    // Navigate through array,
    // and put A[i] = i,
    // if i is present in set
    for (int i = 0; i < n; i++)
    {
        // if i(index) is found in hmap
        if (s.find(i) != s.end())
        {
            arr[i] = i;
        }
        // if i not found
        else
        {
            arr[i] = -1;
        }
    }
}

int main()
{
    int arr[] = {-1, -1, 5, 1, 9, 3, 2, -1, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    fixArray(arr, n);

    // Print output
    for (int i = 0; i < n; i++)
        cout << arr[i] << " " << endl;
    return 0;
}