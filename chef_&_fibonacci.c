#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
ll gcd(ll x,ll y)
{
	if(x==0)
	return y;
	else
	return (gcd(y%x,x));
}
ll x[1000000];
int main()
{
	x[0]=0;
	x[1]=1;
	ll i=2;
	ll n=999998;
	while(n--)
	{
		x[i]=(x[i-1]%1000000007+x[i-2]%1000000007)%1000000007;
		i++;
	}
	ll t,a,b,g;
	sf("%lld",&t);
	while(t--)
	{
		sf("%lld%lld",&a,&b);
		g=gcd(a,b);
		pf("%lld\n",x[g]);
	}
	return 0;
}

