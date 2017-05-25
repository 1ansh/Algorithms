#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int min(int a,int b)
{
	return a > b ? a : b;
}

int jumpSearch(int arr[],int n,int val)
{
	int jump=int(sqrt(n));
	int left=0;
	int right=0;
	while(left<=n-1 && arr[left]<=val)
	{
		right=min(n-1,left+jump);
		if(arr[left] <= val && arr[right]>=val)
		{
			break;
		}
		left+=jump;
	}
	if(left>=n || arr[left]>val)
	{
		return -1;
	}
	for(int i=left;i<=right;i++) //Linear Search
	{
		if(arr[i]==val)
		{
			return i;
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
	index=jumpSearch(arr,n,val);
	if(index==-1)
	{
		cout<<"Element not found."<<endl;
	}
	else
	{
		cout<<"Element found at index "<<index<<endl;
	}
}

