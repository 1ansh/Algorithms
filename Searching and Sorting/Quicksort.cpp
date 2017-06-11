
//O[nlogn] Algorithm
//In-place Algorithm => Space complexity ~= O[1]

#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int start,int end)
{
	int pivot=arr[end];
	int i,pIndex=start;
	for(i=start;i<end;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(&arr[i],&arr[pIndex]);
			pIndex=pIndex+1;
		}
	}
	swap(&arr[end],&arr[pIndex]);
	return pIndex;
}

void quickSort(int arr[], int start,int end)
{
	if(start<end)
	{
		int pIndex=partition(arr,start,end);
		quickSort(arr,start,pIndex-1);
		quickSort(arr,pIndex+1,end);
	}
}

int main()
{
    int n,i,j,key;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	quickSort(arr,0,n-1);
	cout<<"Sorted array:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

