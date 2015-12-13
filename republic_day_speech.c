#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll t;
	sf("%lld\n",&t);
	while(t--)
	{
		char a[100001],op;
		gets(a);
		ll l,i,b[150],c,max=0,j;
		for(i=0;i<150;i++)
		b[i]=0;
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			c=a[i];
			pf("%c\n",c);
		//	op=a[i];
			if(a[i]>96)
			{
				c=a[i]-32;
				//op=a[i]-'32';
			}
			b[c]++;
			if(b[c]>max)
			{
				max=b[c];
				j=c;
				op=c;
			}
			if(b[c]==max)
			{
				if(c>j)
				max=b[c];
				op=c;
			}
			
		}
		pf("%c\n",op);
	}
	return 0;
}

