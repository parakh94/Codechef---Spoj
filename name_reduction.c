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
		ll n,e,l1,l2,l3,d[80002],i,max=0,f=0;
		char a[40001],b[40001];
		sf("%s %s",&a,&b);
		for(i=0;i<80000;i++)
		d[i]=0;
		sf("%lld",&n);
		char c[40001],cn[40001];
		sf("%s",&c);
		strcpy(cn,c);
		n=n-1;
		while(n--)
		{
			sf("%s",&c);
			strcat(cn,c);
		}
		l1=strlen(a);
		l2=strlen(b);
		l3=strlen(cn);
		for(i=0;i<l3;i++)
		{
			e=cn[i]-'A';
			if(e>max)
			max=e;
			d[e]++;
		}	
		for(i=0;i<l1;i++)
		{
			e=a[i]-'A';
			d[e]--;
		}
		for(i=0;i<l2;i++)
		{
			e=b[i]-'A';
			d[e]--;
		}	
		for(i=0;i<=max;i++)
		{
			if(d[i]>0)
			f=1;
		}
		if(f==1)
		pf("NO\n");
		else
		pf("YES\n");
	}
	return 0;
}

