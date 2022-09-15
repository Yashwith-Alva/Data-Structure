/**
 * @brief Check if two arrays are Permutation of each other.
 *
 */

#include <iostream>
#include <map>

using namespace std;

bool ArePermutations(int arr1[], int arr2[], int n, int m)
{
    if (n != m)
    {
        return false;
    }

    // Create an empty hashmap
    map<int, int> hm;

    for (int i = 0; i < n; i++)
    {
        int x = arr1[i];
        hm[x]++;
    }

    // Checking if every element is in Hashmap.
    for (int i = 0; i < m; i++)
    {
        int x = arr2[i];
        if (hm[x] == 0)
        {
            return false;
        }
        hm[x]--;
    }
    return true;
}

int main()
{
    int arr1[] = {2, 1, 3, 5, 4, 3, 2};
    int arr2[] = {3, 2, 2, 4, 5, 3, 1};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    if (ArePermutations(arr1, arr2, n, m))
        cout << "Are Permutation" << endl;
    else
        cout << "Are not Permutations" << endl;

    return 0;
}