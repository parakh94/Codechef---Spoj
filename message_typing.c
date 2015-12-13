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
		ll n,i,sum=0,d;
		char s[1001];
		sf("%s",&s);
		n=strlen(s);
		for(i=0;i<n;i++)
		{
			d=s[i]-96;
			sum+=d;
		}
		pf("%lld\n",sum);
	}
	return 0;
}

