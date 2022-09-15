// CPP program for binary search in array

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool checkNum(string str);
int binarySearch(int arr[], int key, int high, int low);

int main()
{
    int arr[] = {32, 12, 56, 43, 15, 84};

    string key = "as12";
    do
    {
        cout << "Enter the Search Key: ";
        cin >> key;
    } while (!checkNum(key));

    int searchKey = stoi(key);
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(begin(arr), end(arr));

    cout << "The key index after sorting is " << binarySearch(arr, searchKey, n - 1, 0) << endl;
}

// Searching for element using BinarySearch
int binarySearch(int arr[], int key, int high, int low)
{
    if (high < low)
        return -1;

    int mid = (high + low) / 2;
    if (key == arr[mid])
        return mid;

    if (key > arr[mid])
        return binarySearch(arr, key, high, mid + 1);
    return binarySearch(arr, key, mid - 1, low);
}

// Checks if input is a integer
bool checkNum(string str)
{
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}
