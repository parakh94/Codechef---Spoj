#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll n,i;
	sf("%lld",&n);
	ll h[n],q;
	for(i=1;i<=n;i++)
	sf("%lld",&h[i]);
	sf("%lld",&q);
	while(q--)
	{
		ll a,b,c=0;
		sf("%lld%lld",&a,&b);
		for(i=a+1;i<b;i++)
		{
			if(h[i]>h[a])
			{
				c=1;
				break;
			}
		}
		if(c==1)
		pf("NO\n");
		else
		pf("YES\n");
	}
	return 0;
}

