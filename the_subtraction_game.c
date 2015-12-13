#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
long long int gcd(long long int,long long int);
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,a[1100],i,a1;
		sf("%lld",&n);
		for(i=0;i<n;i++)
		{
			sf("%lld",&a[i]);
		}
		a1=a[0];
		for(i=1;i<n;i++)
		{
			a1=gcd(a1,a[i]);
		}
		pf("%lld\n",a1);
	}
	return 0;
}
ll gcd(ll x,ll y)
{
	if(x>y)
	{
		if(x%y==0)
		return y;
		else
		return (y,x%y);
	}
	else
	{
		if(y%x==0)
		return x;
		else
		return (x,y%x);
	}
}

