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
		char j[101],s[101];
		ll lj,ls,i,a[102],c=0,d;
		for(i=0;i<102;i++)
		a[i]=0;
		sf("%s",j);
		sf("%s",s);
		lj=strlen(j);
		ls=strlen(s);
		for(i=0;i<ls;i++)
		{
			d=s[i]-'A';
			a[d]++;
		}
		//for(i=0;i<101;i++)
		//pf("%lld ",a[i]);
		for(i=0;i<lj;i++)
		{
			d=j[i]-'A';
			if(a[d]>0)
			c++;
			a[d]--;
		}
		pf("%lld\n",c);
	}
	return 0;
}

