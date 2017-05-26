#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int interpolationSearch(int arr[],int n,int val)
{
	int lo=0,hi=n-1;
	while(lo<=hi && arr[lo]<=val && arr[hi]>=val)
	{
		int pos=lo+(((double)(hi-lo)/(arr[hi]-arr[lo]))*(val-arr[lo]));
		if(arr[pos]==val)
		{
			return pos;
		}
		if(arr[pos]<val)
		{
			lo=pos+1;
		}
		else
		{
			hi=pos-1;
		}
	}
	return -1;
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
	index=interpolationSearch(arr,n,val);
	if(index==-1)
	{
		cout<<"Element not found."<<endl;
	}
	else
	{
		cout<<"Element found at index "<<index<<endl;
	}
}

