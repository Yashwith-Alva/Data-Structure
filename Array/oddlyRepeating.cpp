// Finding element that is Oddly repeated element
// This program works if and only if there is one element which repeats oddly.

#include <iostream>
using namespace std;

int oddlyRepeating(int arr[], int sizeArr);

int main()
{
    int arr[] = {7, 3, 4, 2, 4, 3, 2};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    cout << "Element Repeated Oddly " << oddlyRepeating(arr, sizeArr) << endl;
}

// Find the element oddly repeating
int oddlyRepeating(int arr[], int sizeArr)
{
    int res = arr[0];

    for (int i = 1; i < sizeArr; i++)
        res ^= arr[i];

    return res;
}