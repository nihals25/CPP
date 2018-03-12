#include <iostream>

using namespace std;

int LinearSearch(int *a, int size, int searchFor);

int main()
{
	int n = 0, v = 0;
	cout<<"Enter the number of Elements : ";
	cin>>n;
	int arrayToSort[n];
	for (int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<"th element : ";
		cin>>arrayToSort[i];
	}
	cout<<"Enter value to be searched in the array : ";
	cin>>v;
	int result = LinearSearch(arrayToSort, n, v);
	cout<<"Index of Searched Element : "<<result<<"\n";
}

int LinearSearch(int *a, int size, int searchFor)
{
	for(int i=0;i<size;i++)
	{
		if(a[i] == searchFor)
			return i;
		else
			continue;
	}
	return -1;
}