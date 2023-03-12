#include <iostream>
using namespace std;

void binarySearch(int *arr, int size, int key)
{
    int si = 0;
    int ei = size - 1;
    while (si <= ei)
    {
        int mid = (si + ei) / 2;
        int value = arr[mid];
        if (value == key)
        {
            cout << "Key is present at index " << mid << endl;
            return;
        }
        else if (key > value)
        {
            si = mid + 1;
        }
        else if (key < value)
        {
            ei = mid - 1;
        }
    }
    cout << "Key was not present in the array " << endl;
}

int main()
{
    // Time complexity is O(logn)
    // Works only if arrays is sorted or montonic neature either no decreasing or non increasing

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    cout << "Enter a key to search -> ";
    int key;
    cin >> key;
    binarySearch(arr, size, key);
    return 0;
}