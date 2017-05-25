#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int binarySearch(int arr[],int lowerBound,int upperBound,int val) //arr should be sorted
{
	if(lowerBound<=upperBound)
	{
		int midPoint=lowerBound+(upperBound-lowerBound)/2;
		if(arr[midPoint]==val)
		{
			return midPoint;
		}
		if(arr[midPoint]>val)
		{
			return binarySearch(arr,lowerBound,midPoint-1,val);
		}
		return binarySearch(arr,midPoint+1,upperBound,val);
	}
	return -1; // returns -1 if val not found
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
	index=binarySearch(arr,0,n-1,val);
	if(index==-1)
	{
		cout<<"Element not found."<<endl;
	}
	else
	{
		cout<<"Element found at index "<<index<<endl;
	}
}

