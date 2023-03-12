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

// Brute force
void printBiggestSumSubArray(int *arr, int size)
{
    int subArrayStartingIdx = 0;
    int subArrayEndingIdx = size - 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int currentSubArraySum = 0;
            for (int k = i; k <= j; k++)
            {
                currentSubArraySum += arr[k];
            }
            cout << "currentSubArraySum -> " << currentSubArraySum << endl;
            if (currentSubArraySum > sum)
            {
                subArrayStartingIdx = i;
                subArrayEndingIdx = j;
                sum = currentSubArraySum;
            }
        }
    }

    cout << "(";
    while (subArrayStartingIdx <= subArrayEndingIdx)
    {
        cout << arr[subArrayStartingIdx] << ",";
        subArrayStartingIdx++;
    }
    cout << ")";
}

// time complexity will be O(n^2) at max the loop will traverse n^2 times
void printLargestSubarrySumUsingPrefixSum(int *arr, int size)
{
    int finalSum = 0;
    int curSubArraySum = 0;
    for (int i = 0; i < size; i++)
    {
        curSubArraySum = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            curSubArraySum += arr[j];
        }
        finalSum = max(finalSum, curSubArraySum);
    }
    cout << "Largest Sum should be -> " << finalSum;
}

int main()
{
    int arr[] = {30, -10, 0, 10, 80, 60};
    int size = sizeof(arr) / sizeof(int);

    // printAllSubArray(arr, size); // Time complexity is O(n^3)
    //  There are toal of n^2 subarray of n size array

    // printSubArraySumBruteForce(arr, size);

    // printBiggestSumSubArray(arr, size); // With brute force

    printLargestSubarrySumUsingPrefixSum(arr, size);

    return 0;
}