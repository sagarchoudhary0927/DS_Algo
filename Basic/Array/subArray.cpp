#include <iostream>
using namespace std;

void printAllSubArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << "(";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << ")" << endl;
        }
    }
}

// Printing subarray sum per line using brute force. Time complexity will be O(n^3) 
void printSubArraySumBruteForce(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            cout << sum << ", ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);

    //printAllSubArray(arr, size); // Time complexity is O(n^3)
    // There are toal of n^2 subarray of n size array

    printSubArraySumBruteForce(arr, size);

    return 0;
}