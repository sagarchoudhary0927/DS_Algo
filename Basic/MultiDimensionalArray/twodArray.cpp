#include<iostream>
using namespace std;
// Here array is passed by refrence so any uopdation made here will reflect in the real array
void printArray(int arr[][100], int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[100][100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m;j++) {
            cin >> arr[i][j];
        }
    }
    printArray(arr, n, m);
    return 0;
}