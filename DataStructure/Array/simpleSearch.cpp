// CPP program to search element in array

#include <iostream>
#include <string>
using namespace std;

int findElement(int *arr, int searchKey);
bool checkNum(string str);

int main()
{
    int arr[] = {12, 32, 43, 56, 15, 84};

    string key = "as12";
    do
    {
        cout << "Enter the Search Key: ";
        cin >> key;
    } while (!checkNum(key));

    int searchKey = stoi(key);
    cout << "\nThe key was " << findElement(arr, searchKey);
}

// Find the element in array
int findElement(int *arr, int searchKey)
{
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrSize; i++)
        if (arr[i] == searchKey)
            return 1;
    return -1;
}

// Checks if input is a integer
bool checkNum(string str)
{
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}