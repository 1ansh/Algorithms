#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 3

int min(int x,int y,int z)
{
	return min(min(x, y), z);
}

int count(int S[],int m, int n)
{
	int table[n+1][m];
	int i,j,x,y;
	for(i=0;i<m;i++)
	{
		table[0][i]=1;
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
			y = (j >= 1)? table[i][j-1]: 0;
            table[i][j] = x + y;
		}
	}
	return table[n][m-1];
}


int main()
{
    int arr[] = {1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 5;
    printf(" %d ", count(arr, m, n));
    return 0;
}
