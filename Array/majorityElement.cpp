// Print the Element which has Majority over others

#include <iostream>
using namespace std;

/**
 * @brief METHOD1
 * Time complexity: 0(n^2)
 * Loop throug all the element to find the number of times each
 * element repeated
 */

void findMajority(int *, int);
int findCandidate(int a[], int size);
bool isMajority(int a[], int size, int cand);
void printMajority(int a[], int size);

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 5, 5};
    int arr2[] = {1, 1, 1, 2, 3, 4, 1};

    int n = sizeof(arr1) / sizeof(arr1[0]);

    // function Call
    findMajority(arr1, n);

    cout << "\n>>>>>>>>>>METHOD 2<<<<<<<<<<<<<" << endl;
    printMajority(arr1, n);
}

void findMajority(int *arr, int arrSize)
{
    int maxCount = 0;
    int index = -1;

    for (int i = 0; i < arrSize; i++)
    {
        int count = 0;
        for (int j = 0; j < arrSize; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (maxCount < count)
        {
            maxCount = count;
            index = i;
        }
    }

    if (maxCount > arrSize / 2)
    {
        cout << "The Element with majority: " << arr[index] << endl;
    }
    else
    {
        cout << "No Majority" << endl;
    }
}

/**
 * @brief METHOD2: Using Moore’s Voting Algorithm
 *
 */

// Function to find candidate for majority
int findCandidate(int *arr, int arrSize)
{
    int maj_index = 0, count = 1;

    for (int i = 1; i < arrSize; i++)
    {
        if (arr[maj_index] == arr[i])
            count++;
        else
            count--;

        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return arr[maj_index];
}

// Function to check for majority
bool isMajority(int a[], int size, int cand)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == cand)
            count++;
    }
    if (count > size / 2)
        return 1;
    else
        return 0;
}

// Print Majority
void printMajority(int a[], int size)
{
    int cand = findCandidate(a, size);

    if (isMajority(a, size, cand))
        cout << " " << cand << " " << endl;
    else
        cout << "No Majority" << endl;
}