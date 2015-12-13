#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,b,r=0,s=0,k,i;
		sf("%lld",&n);
		for(i=0;i<n;i++)
		{
			sf("%lld",&b);
			if(b==0)
			r++;
			s=s+b;
		}
		if(s<100)
		pf("NO\n");
		else if(s==100)
		pf("YES\n");
		else
		{
			k=s-100;
			n=n-r;
			if(k<n)
			pf("YES\n");
			else
			pf("NO\n");
		}
		
	}
	return 0;
}

