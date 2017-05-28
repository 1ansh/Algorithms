#include <iostream>


using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int arr[], int n)
{
	int i,j;
	bool swapped;
	for(i=0;i<n-1;i++)
	{
		swapped=false;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)
		{
			break;
		}
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
	bubbleSort(arr,n);
	cout<<"Sorted array:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

