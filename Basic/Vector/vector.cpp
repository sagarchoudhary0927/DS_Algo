#include <iostream>
#include <vector>
using namespace std;

/**
 * Vector is a dynamic array which doubles itself whever
 * we try to add element at the back of the array and its
 * last index overflows
 */

int main()
{
    vector<int> arr;
    cout << arr.size() << arr.capacity() << endl; // This will print the size of teh vector as currently it's size is 0 itself

    vector<int> arr1 = {1, 2, 3};
    cout << arr1.size() << " " << arr1.capacity() << endl; // Size gives size of vector capacity gives tghe exact capacity of the vectop
    arr1.push_back(4);
    cout << arr1.size() << " " << arr1.capacity() << endl; // Here The size will be 6 and the capacity will be 6 as the initial size was 3 and now we try to add one more ele,nt at the back of vector so it will double its size first then copies the all elements of samller size vector and paste it in the new double size created vector
    return 0;
}