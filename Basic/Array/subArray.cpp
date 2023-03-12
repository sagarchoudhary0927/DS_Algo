#include <iostream>
using namespace std;

void printAllSubArray(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            cout << "(";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << ")" << endl;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);

    printAllSubArray(arr, size); // Time complexity is O(n^3)
    // There are toal of n^2 subarray of n size array

    return 0;
}