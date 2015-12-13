#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll n,i,m;
	sf("%lld",&n);
	ll a[n];
	for(i=0;i<n;i++)
	sf("%lld",&a[i]);
	sf("%lld",&m);
	while(m--)
	{
		ll x,y,sum;
		sf("%lld%lld",&x,&y);
		sum=a[x-1];
		for(i=x;i<y;i++)
		{
			if(a[i]+sum>sum)
			{
				sum+=a[i];
				if(sum<a[i])
				sum=a[i];
			}
			else
			break;
		}
		ll j;
		for(j=i;j<y;j++)
		{
			if(a[j]>sum)
			sum=a[j];
		}
		pf("%lld\n",sum);
	}
	return 0;
}
	
