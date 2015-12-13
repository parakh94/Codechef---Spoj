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
		float n,m;
		sf("%f%f",&n,&m);
		pf("%0.6f\n",n+m-1);
	}
	return 0;
}

