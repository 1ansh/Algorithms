#include <iostream>


using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int min=arr[i],minind=i,temp;
		for(j=i;j<n;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				minind=j;
			}
		}
		swap(&arr[i],&arr[minind]); ////first method to swap
//		temp=arr[i];                ////second method to swap
//		arr[i]=arr[minind];
//		arr[minind]=temp;
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
	selectionSort(arr,n);
	cout<<"Sorted array:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

