#include <iostream>
using namespace std;

void linearSearch(int *arr , int n, int key) {
    for (int x = 0; x < n; x++)
    {
        if(arr[x] == key) {
            cout << "Key is present at index " << x;
            return;
        }
    }
    cout << "Key is not present";
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter key to search->";
    cin >> key;
    linearSearch(arr, size, key); // O(n) time complexity
    return 0;
}