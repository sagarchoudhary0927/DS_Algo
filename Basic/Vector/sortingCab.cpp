#include <iostream>
#include <vector>
using namespace std;



bool compare(pair<int, int> p1, pair<int, int> p2) {
	return (p1.first + p1.second) < (p2.first + p2.second);
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> &v){
    // your code  goes here
    sort(v.begin(), v.end(), compare);
    return v;
}

int main() {

vector<pair<int, int>> arr = {
	{2,3},
	{1,2},
	{3,4},
	{2,4},
	{1,4}
};

sortCabs(arr);

for(int i = 0 ; i < arr.size(); i++) {
	cout<< arr[i].first << "_" << arr[i].second<<endl;
}

return 0;
}