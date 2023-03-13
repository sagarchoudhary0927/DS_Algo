#include <iostream>
#include <vector>
using namespace std;
// The maine key behind bubnle sort is to move the biggest element to tghe right side of the array and trusting that last part of teh array is an sorted array
//  Time complexity is O(n^2)
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1, -8, 100, 2, -210, -56};
    bubbleSort(arr);
    return 0;
}