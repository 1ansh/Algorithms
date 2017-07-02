#include <bits/stdc++.h>

using namespace std;

struct Job
{
	char id;
	int deadline;
	int profit;
};

int min(int a,int b)
{
	return a<b?a:b;
}

bool comparison(Job a,Job b)
{
	return (a.profit>b.profit);
}

void printJobScheduling(Job arr[],int n)
{
	int i,j,result[n];
	sort(arr,arr+n,comparison);
	bool slot[n];
	for(i=0;i<n;i++)
	{
		slot[n]=false;
	}
	for(i=0;i<n;i++)
	{
		for(j=min(n,(arr[i].deadline))-1;j>=0;j--)
		{
			if(slot[j]==false)
			{
				result[j]=i;
				slot[j]=true;
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(slot[i])
		{
			cout<<arr[result[i]].id<<" ";
		}
	}
}

int main()
{
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs\n";
    printJobScheduling(arr, n);
    return 0;
}
