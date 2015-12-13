#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<limits>
#include<cstdlib>
#include<queue>

#define pf printf
#define sf scanf
#define sc(x) scanf("%lld",&x);
#define ll long long int
#define loop1 scanf("%lld",&t);while(t--)
#define loop2 for(i=0;i<n;i++)

ll t,n,i,j,c1,c0,x;
int main()
{
	loop1
	{
		sc(n);
		c0=0;c1=0;
		loop2
		{
			sc(x);
			if(x==0)	c0++;
			else	c1++;
		}
		if(c1%2==1)	pf("%lld\n",c1);
		else pf("%lld\n",c0);
	}
	return 0;
}
