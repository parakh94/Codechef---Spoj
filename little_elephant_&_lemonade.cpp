#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,m;
		sf("%lld%lld",&n,&m);
		ll p[m],i,x;
		for(i=0;i<101;i++)
		p[i]=0;
		for(i=1;i<=m;i++)
		{
			sf("%lld",&x);
			p[x]++;
		}
		for(i=0;i<n;i++)
		{
			ll c;
			sf("%lld",&c);
			ll a[c+1];
			for(i=1;i<=c;i++)
			sf("%lld",&a[i]);
			mergeSort(a, 1, c);
		}
		
		
	}
	return 0;
}
	
