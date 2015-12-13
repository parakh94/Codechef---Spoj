#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
ll gcd(ll,ll);
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,q,i,x;
		sf("%lld%lld",&n,&q);
		ll a[n],b[n];
		for(i=1;i<=n;i++)
		sf("%lld",&a[i]);
		while(q--)
		{
			for(i=1;i<=n;i++)
			b[i]=a[i];
			ll  l,r,g,d;
			sf("%lld%lld",&l,&r);
			for(i=l;i<=r;i++)
			b[i]=0;
			//for(i=1;i<=n;i++)
			//pf(" %lld ",b[i]);
			//pf("\n");
			d=gcd(b[1],b[2]);
			for(i=3;i<=n;i++)
			{
				d=gcd(d,b[i]);
			}
			pf("%lld\n",d);
				
		}
	}
	return 0;
}
ll gcd(ll x,ll y)
{
	if(x==0&&y==0)
	return 0;
	if(x==0)
	return y;
	if(y==0)
	return x;
	if(x>y)
	return gcd(y,x%y);
	if(x<=y)
	return gcd(x,y%x);
}
