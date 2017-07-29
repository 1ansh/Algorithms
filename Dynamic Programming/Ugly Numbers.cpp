#include<bits/stdc++.h>

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

int getNthUglyNo(int n)
{
	int ugly[n];
	ugly[0]=1;
	int i,i2=0,i3=0,i5=0;
	int next2 = 2;
	int next3 = 3;
	int next5 = 5;
	int nextugly = 1;
	for(i=1;i<n;i++)
	{
		nextugly = min(next2,next3,next5);
		ugly[i] = nextugly;
		if(nextugly == next2)
		{
			i2++;
			next2 = ugly[i2]*2;
		}
		if(nextugly == next3)
		{
			i3++;
			next3 = ugly[i3]*3;
		}
		if(nextugly == next5)
		{
			i5++;
			next5 = ugly[i5]*5;
		}
	}
	return nextugly;
}

int main()
{
    int n = 150;
    cout << getNthUglyNo(n);
    return 0;
}
