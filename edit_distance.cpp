#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
ll min(ll p,ll r)
{
	if(p<r)
	return p;
	else
	return r;
}
ll c[2002][2002];
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		char a[2005],b[2005];
		ll i,j,y,x;
		sf(" %s",a);
		sf(" %s",b);
		x=strlen(a);
		y=strlen(b);
		
		for(i=0;i<=x;i++)
		c[i][0]=i;
		for(i=0;i<=y;i++)
		c[0][i]=i;
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=y;j++)
			{
				if(a[i-1]==b[j-1])
				c[i][j]=c[i-1][j-1];
				else
				{
					c[i][j]=min(c[i-1][j-1]+1,min(c[i-1][j]+1,c[i][j-1]+1));
				}
			}
		}
		pf("%lld\n",c[x][y]);
	}
	return 0;
}
	
