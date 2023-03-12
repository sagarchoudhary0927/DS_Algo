#include <iostream>
using namespace std;
// As array was passed via refrence ahence the change is laso reflecting in the aray of main function
void printReverseArray(int * arr, int size)
{
    int si = 0;
    int ei = size - 1;
    while (si < ei) {
        swap(arr[si], arr[ei]);
        si++;
        ei--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    printReverseArray(arr, size);
    for(int x: arr) {
        cout << x << " ";
    }
    return 0;
}