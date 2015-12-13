#include<stdio.h>
#include<string.h>
#include<math.h>
long long int max(long long int,long long int);
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll r,i,j,a[101][101];
		sf("%lld",&r);
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=i;j++)
			sf("%lld",&a[i][j]);
		}
		for(i=2;i<=r;i++)
		{
			for(j=1;j<=i;j++)
			{
				if(j==1)
				a[i][j]+=a[i-1][j];
				else if(j==i)
				a[i][j]+=a[i-1][j-1];
				else
				a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
				
			}
		}
		/*for(i=1;i<=r;i++)
		{
			for(j=1;j<=i;j++)
			{
				pf("%lld ",a[i][j]);
			}
			pf("\n");
		}*/
		ll maxterm;
		maxterm =a[r][1];
		for(i=1;i<=r;i++)
		{
			if(a[r][i]>maxterm)
			maxterm=a[r][i];
		}
		pf("%lld\n",maxterm);
		
	}
	return 0;
}
ll max(ll x,ll y)
{
	if(x>y)
	return x;
	else
	return y;
}

