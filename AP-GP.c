#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll a1,a2,a3,r;
	sf("%lld%lld%lld",&a1,&a2,&a3);
	while(a1!=0||a2!=0||a3!=0)
	{
		if(a2-a1==a3-a2)
		{
			pf("AP ");
			pf("%lld\n",(a3+a2-a1));
		}
		else
		{
			pf("GP ");
			r=a3/a2;
			pf("%lld\n",(a3*r));
		}
		sf("%lld%lld%lld",&a1,&a2,&a3);
	}
	return 0;
}

