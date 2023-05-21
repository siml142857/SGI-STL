#include "myAllocator.h"
#include <vector>
#include <iostream>

using namespace std;

// myAllocator test   g++ myAllocator.h myAllocator.cpp -o a
int main()
{
	int arr[5] = {0, 1, 2, 3, 4};

	//vector<int, myAllocator::allocator<int> > iv(10);   // do not call construct()
	//vector<int, myAllocator::allocator<int> > iv(10,0); // call construct()
	vector<int, myAllocator::allocator<int> > iv(arr, arr+5);  // 

	for (size_t i = 0; i < iv.size(); i++) {
		cout << iv[i] << ' ';	
	}

	cout << endl;
}
