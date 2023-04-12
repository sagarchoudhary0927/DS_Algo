#include<iostream>
#include <vector>
using namespace std;

void printArr(vector<vector<int>> matrix) {
    for(int i = 0; i < matrix.size(); i++) {
        for(int j= 0 ; j < matrix.size(); j++) {
            cout<< matrix[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int a = 0;
        int b = n-1;
        while(a<b){
            for(int i=0;i<(b-a);++i){
                swap(matrix[a][a+i], matrix[a+i][b]);
                swap(matrix[a][a+i], matrix[b][b-i]);
                swap(matrix[a][a+i], matrix[b-i][a]);
                printArr(matrix);
            }
            ++a;
            --b;
        }
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
};
rotate(mat);

for(int i = 0 ; i < mat.size(); i++) {
    for(int x: mat[i]) {
        cout<< x<< " ";
    }
    cout<<endl;
}
    return 0;

}
