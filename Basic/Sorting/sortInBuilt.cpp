#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b ) {
    // return a > b; // Decreasing order
    return a < b; // Increasing order
}

int main()
{
    // vector<int> arr = {5, 4, 1, 2, 3, -60};
    // sort(arr.begin(), arr.end());
    // for(int x: arr) {
    //     cout << x << " ";
    // }
    // cout << endl;

    int ar[] = {5, 4, 1, 2, 3, -60};
    int size = sizeof(ar) / sizeof(int);
    // sort(ar, ar + size, compare);
    sort(ar, ar + size, greater<int>()); // This gives inbuild comaprator and sort arrtay in ascending order 

    // reverse(ar, ar + size);
    for (int x : ar)
    {
        cout << x << " ";
    }

    cout<< endl;
    return 0;
}