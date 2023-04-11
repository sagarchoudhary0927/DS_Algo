#include <iostream>
#include <vector>
using namespace std;

int main() {

	// 2d vector is the vetcor of vectors nad each vector of 2d vector can have any number of elements
	vector<vector<int>> arr = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15}
	};

	for(int i = 0 ; i < arr.size(); i++) {
		for(int val : arr[i]) {
			cout<< val << " ";
		}
		cout<< endl;
	}
	return 0;
}