#include <iostream>
using namespace std;

int main()
{
    int marks[10];
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