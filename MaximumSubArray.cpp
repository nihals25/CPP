#include <iostream>

using namespace std;

int FindMaxSubArray(int *Array, int startIndex, int lastIndex)

int main () {
	int size;
	cin>>size;
	int Array[size];
	for(int i=0;i<size;i++) {
		cin>>Array[i];
	}
	FindMaxSubArray(Array, 0, size);
}	

int FindMaxSubArray(Array, startIndex, lastIndex) {
	if(startIndex == lastIndex)
		return ;
}
