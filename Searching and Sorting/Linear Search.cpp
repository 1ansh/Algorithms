#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int linearSearch(int arr[],int n,int val)
{
	int i,index=-1;
	for(i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			index=i;
			break;
		}
	}
	return index; //returns -1 if val not found
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
	index=linearSearch(arr,n,val);
	if(index==-1)
	{
		cout<<"Element not found."<<endl;
	}
	else
	{
		cout<<"Element found at index "<<index<<endl;
	}
}

