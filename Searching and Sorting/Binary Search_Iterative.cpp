#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int binarySearch(int arr[],int n,int val) //arr should be sorted
{
	int lowerBound,upperBound,midPoint,index;
	lowerBound=0;
	upperBound=n-1;
	midPoint=-1;
	index=-1;
	while(lowerBound<=upperBound)
	{
		midPoint=lowerBound+(upperBound-lowerBound)/2;
		if(arr[midPoint]<val)
		{
			lowerBound=midPoint+1;
		}
		if(arr[midPoint]>val)
		{
			upperBound=midPoint-1;
		}
		if(arr[midPoint]==val)
		{
			index=midPoint;
			break;
		}
	}
	return index; // returns -1 if val not found
}

int main()
{
	int n,i;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	int arr[n],val,index;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value to be searched: ";
	cin>>val;
	index=binarySearch(arr,n,val);
	if(index==-1)
	{
		cout<<"Element not found."<<endl;
	}
	else
	{
		cout<<"Element found at index "<<index<<endl;
	}
}

