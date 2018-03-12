#include <iostream>

using namespace std;

void SelectionSort(int *a, int size);

int main ()
{
	int n = 0;
	cout<<"Enter the number of Elements : ";
	cin>>n;
	int arrayToSort[n];
	for (int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<"th element : ";
		cin>>arrayToSort[i];
	}
	SelectionSort(arrayToSort, n);
	cout<<"Sorted Array";
	for (int i=0;i<n;i++)
	{
		cout<<"\n"<<arrayToSort[i];
	}
	cout<<"\n";
}

int FindSmallest(int *a, int size, int startIndex)
{
	int min = a[startIndex];
	int minIndex = startIndex;
	for(int i=startIndex+1;i<size;i++)
	{
		if(min>a[i])
			minIndex = i;
	}
	return minIndex;
}

void SelectionSort(int *a, int size)
{
	for(int i=0;i<size-1;i++)
	{
		int minIndex = FindSmallest(a, size, i);
		int x = a[i];
		a[i] = a[minIndex];
		a[minIndex] = x;
	}
}