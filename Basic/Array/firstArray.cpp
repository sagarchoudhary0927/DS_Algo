#include <iostream>
using namespace std;

int main()
{
    int marks[10]; // All cell of array has garbarge value as it is not initilaised
    int arr1[10] = {0}; // Initialise first cell with 0 and all other has by default 0 value.
    int arr2[10] = {1, 2, 3}; // First three index has values 1,2,3 all other has deafult 0. 

    int n;
    cout << "Enter the Number of students";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << endl;
    }
}