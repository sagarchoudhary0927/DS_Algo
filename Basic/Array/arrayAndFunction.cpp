#include <iostream>
using namespace std;

/**
 * Passing Array by refrence
 * -> The array in main and passed to functoon shares the common memory
 *      that's why the value changes of main array if values changes in the function in which it was passed
 * -> Always while passing the aaray to a function also pass it's size
 */

void updateArray(int *arr, int n)
{
    int size = sizeof(arr) / sizeof(int);
    cout << "Inside update array function ->" << size << " " << sizeof(arr) << " " << sizeof(int);
    cout << endl;

    // Out put is 2 8 4
    // 2 is the (size of the pointer i.e arr) / (size of the integer i.e 4) Hence 2
    // 8 is the size of the pointer i.e arr
    // 4 is the size of the integer
    arr[0] = -1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "_";
    }
    cout << endl;
}

void printArr(int arr[])
{
    int size = sizeof(arr) / sizeof(int);
    cout << "Inside print array function ->" << size << " " << sizeof(arr) << " " << sizeof(int);
    // Out put is 2 8 4
    // 2 is the (size of the pointer i.e arr) / (size of the integer i.e 4) Hence 2
    // 8 is the size of the pointer i.e arr
    // 4 is the size of the integer
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;

    printArr(arr);
    cout << endl;
    updateArray(arr, size);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "_";
    }

    return 0;
}
