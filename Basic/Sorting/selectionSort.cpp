#include <iostream>
#include <vector>
using namespace std;
/**
 * Find the Minium element from teh unsortedf array and put it in correct place
 * Time complecity is again O(n^2)
 */

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int pos = 0; pos < n - 1; pos++)
    {
        int curElemnet = arr[pos];
        int min_position = pos;
        for (int j = pos; j < n; j++)
        {
            if (arr[j] < arr[min_position]) {
                min_position = j;
            }
        }
        swap(arr[min_position], arr[pos]);
    }
    for(int x: arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {5, 4, 1, 2, 3, -100};
    selectionSort(arr);
    return 0;
}