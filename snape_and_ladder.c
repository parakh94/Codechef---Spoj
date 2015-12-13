#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define ll long long int
#define pf printf
#define sc scanf
int main()
{
	ll t;
	sc("%lld",&t);
	while(t--)
	{
		ll b,ls;
		float max,min,d,e;
		sc("%lld %lld",&b,&ls);
		e=(b*b)+(ls*ls);
		max=pow(e,0.5);
		d=(ls*ls)-(b*b);
		min=pow(d,0.5);
		printf("%f %f\n",min,max);
	}
	return 0;
}
