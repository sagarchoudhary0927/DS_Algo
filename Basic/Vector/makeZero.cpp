#include<iostream>
#include <vector>
using namespace std;



void makeZero(vector<vector<int>> &arr, int i, int j) {
		int row = arr.size();
		int col = arr[0].size();
		int iRow = 0 ;
		while (iRow < row) {
			arr[iRow][j] = 0;
			++iRow;
		}
		int jCol = 0;
		while(jCol < col) {
			arr[i][jCol] = 0;
			++jCol;
		}
}

int main() {

	vector<vector<int>> arr = {
		{5, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	}; 


	int rows = arr.size();
	int col = arr[0].size();
	
	int lastColIdx = 0;

	for(int i = 0; i < rows; i++) {
		int j = lastColIdx;
		while (j < col) {
			if(arr[i][j] == 0) {
				makeZero(arr, i, j);
				lastColIdx = j + 1;
				break;
			}
			++j;
		}
	}


	for(int i = 0 ; i < arr.size(); i++) {
		for(int j = 0 ; j < arr.size(); j ++) {
			cout<< arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}