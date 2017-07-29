#include<bits/stdc++.h>
#define bool int
#define R 6
#define C 5

using namespace std;

int min(int a, int b, int c)
{
  int m = a;
  if (m > b) 
    m = b;
  if (m > c) 
    m = c;
  return m;
}

void printMaxSubSquare(bool M[R][C])
{
	int S[R][C],i,j;
	for(i=0;i<R;i++)
	{
		S[i][0] = M[i][0];
	}
	for(j=0;j<C;j++)
	{
		S[0][j] = M[0][j];
	}
	for(i=1;i<R;i++)
	{
		for(j=1;j<C;j++)
		{
			if(M[i][j] == 1)
			{
				S[i][j] = min(S[i][j-1], S[i-1][j], S[i-1][j-1]) + 1;
			}
			else
			{
				S[i][j] = 0;
			}
		}
	}
	int maxofs = S[0][0],maxi = 0,maxj = 0;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if(S[i][j]> maxofs)
			{
				maxofs = S[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}
	printf("\n Maximum size sub-matrix is: \n");
	  for(i = maxi; i > maxi - maxofs; i--)
	  {
	    for(j = maxj; j > maxj - maxofs; j--)
	    {
	      printf("%d ", M[i][j]);
	    }  
	    printf("\n");
	  }  
	
}

int main()
{
  bool M[R][C] =  {{0, 1, 1, 0, 1}, 
                   {1, 1, 0, 1, 0}, 
                   {0, 1, 1, 1, 0},
                   {1, 1, 1, 1, 0},
                   {1, 1, 1, 1, 1},
                   {0, 0, 0, 0, 0}};
                
  printMaxSubSquare(M);
  getchar();  
} 
