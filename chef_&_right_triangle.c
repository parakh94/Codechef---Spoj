#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll i,n,x1,x2,x3,y1,y2,y3,d=0;
	float a,b,c;
	sf("%lld",&n);
	while(n--)
	{
		sf("%lld%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&x3,&y3);
		a=pow((x1-x2),2)+pow((y1-y2),2);
		b=pow((x3-x2),2)+pow((y3-y2),2);
		c=pow((x1-x3),2)+pow((y1-y3),2);
		if(a==(b+c))
		d++;
		if(b==(a+c))
		d++;
		if(c==(b+a))
		d++;
	}
	pf("%lld\n",d);
	return 0;
}

