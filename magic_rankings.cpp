#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
ll max(ll x,ll y)
{
	if(x>y)
	return x;
	else
	return y;
}
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,i,j,a[101][101];
		double ans;
		sf("%lld",&n);
	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				sf("%lld",&a[i][j]);
			}
		}
		for(j=1;j<n;j++)
		{
			a[0][j]=a[0][j]+a[0][j-1];
		}
		for(j=1;j<n;j++)
		{
			a[j][0]=a[j][0]+a[j-1][0];
		}
	
		for(i=1;i<n;i++)
		{
			for(j=1;j<n;j++)
			{
				a[i][j]=a[i][j]+max(a[i-1][j],a[i][j-1]);
			}
		}
		if(a[n-1][n-1]<0)
		pf("Bad Judges\n");
		else
		{
			ans=1.0*a[n-1][n-1]/(2*n-3);
			pf("%lf\n",ans);
		}
	}
	return 0;
}

