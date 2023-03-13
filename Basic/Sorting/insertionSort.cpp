#include <iostream>
#include <vector>
using namespace std;
// The key idea behind inserion sort is to put the element in its correct position
// We will pick one element and place it in it's correct posiiton
// time complexity will be O(n^2)

void insertionSort(vector<int> &arr)
{
    int size = arr.size();
    int j = 1;

    while (j < size) {
        int curelement = arr[j];
        int prev = j - 1;
        // SHifting of elements 
        while (prev >= 0 && arr[prev] > curelement){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curelement;
        j++;
    }

    for(int x: arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arr = {5, 4, 1, 3, 2, -80};
    insertionSort(arr);
    return 0;
}