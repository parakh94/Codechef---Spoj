#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
long long int fact(long long int);
int main()
{
	ll x,n,a[60],i,d=0;
	sf("%lld %lld",&x,&n);
	while(n--)
	{
		ll c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
		for(i=1;i<=4;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c1++;
		}
		for(i=5;i<=8;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c2++;
		}
		for(i=9;i<=12;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c3++;
		}
		for(i=13;i<=16;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c4++;
		}
		for(i=17;i<=20;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c5++;
		}
		for(i=21;i<=24;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c6++;
		}
		for(i=25;i<=28;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c7++;
		}
		for(i=29;i<=32;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c8++;
		}
		for(i=33;i<=36;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c9++;
		}
		for(i=37;i<=38;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c9++;
		}
		for(i=39;i<=40;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c8++;
		}
		for(i=41;i<=42;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c7++;
		}
		for(i=43;i<=44;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c6++;
		}
		for(i=45;i<=46;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c5++;
		}
		for(i=47;i<=48;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c4++;
		}
		for(i=49;i<=50;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c3++;
		}
		for(i=51;i<=52;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c2++;
		}
		for(i=53;i<=54;i++)
		{
			sf("%lld",&a[i]);
			if(a[i]==0)
			c1++;
		}
		if(c1>=x)
		d+=fact(c1)/(fact(x)*fact(c1-x));
		if(c2>=x)
		d+=fact(c2)/(fact(x)*fact(c2-x));
		if(c3>=x)
		d+=fact(c3)/(fact(x)*fact(c3-x));
		if(c4>=x)
		d+=fact(c4)/(fact(x)*fact(c4-x));
		if(c5>=x)
		d+=fact(c5)/(fact(x)*fact(c5-x));
		if(c6>=x)
		d+=fact(c6)/(fact(x)*fact(c6-x));
		if(c7>=x)
		d+=fact(c7)/(fact(x)*fact(c7-x));
		if(c8>=x)
		d+=fact(c8)/(fact(x)*fact(c8-x));
		if(c9>=x)
		d+=fact(c9)/(fact(x)*fact(c9-x));
	}
	pf("%lld\n",d);
	return 0;
}
long long int fact(long long int x)
{
	if(x==0||x==1)
	return 1;
	else
	return (x*fact(x-1));
}
