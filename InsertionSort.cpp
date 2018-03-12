#include <iostream>

using namespace std;

void InsertionSort(int *a, int size);
void InsertionSortFromLeftToRight(int *a, int size);

int main()
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
	//InsertionSort(arrayToSort, n);
	InsertionSortFromLeftToRight(arrayToSort, n);
	cout<<"Sorted Array";
	for (int i=0;i<n;i++)
	{
		cout<<"\n"<<arrayToSort[i];
	}
}

void InsertionSort(int *a, int size)
{
	for (int i=1;i<size;i++)
	{
		int x = a[i], j = i-1;
		for (;j>=0&&a[j]>x;j--)
		{
            a[j+1] = a[j];
		}
		a[j+1] = x;
	}
}

void InsertionSortFromLeftToRight(int *a, int size)
{
    for (int i=1;i<size;i++)
    {
        int x = a[i], j = 0;
        for (;j<=i-1&&a[j]>x;j++)
        {        
        	a[i] = a[j];
        	a[j] = x;
        	x = a[i];
        }
    }
}
