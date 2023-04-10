#include <iostream>
using namespace std;
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

void printSpiral(int arr[][100], int row, int col)
{
    int i = 0;
    int j = col - 1;
    int count = 0;
    int maxCount = row * col;
    while(count < maxCount && j >= 0) {
        while (i < row && count < maxCount && j >= 0)
        {
            cout << arr[i][j] << " ";
            count++;
            i++;
        }
        j = j - 1;
        i = row - 1;
        if(j < 0) {
            break;
        }
        while (i >= 0 && count < maxCount && j >=0)
        {
            cout << arr[i][j] << " ";
            i--;
            count++;
        }
        j = j - 1;
        i = 0;
        if (j < 0)
        {
            break;
        }
    }
}

int main()
{
    int spiralArray[100][100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> spiralArray[i][j];
        }
    }

    printSpiral(spiralArray, n, m);

    return 0;
}