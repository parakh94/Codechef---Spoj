#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
#include<stdlib.h>
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		char a[1500];
		ll n,i,b[200],c=0;
		for(i=0;i<60;i++)
		b[i]=0;
		sf("%s",a);
		n=strlen(a);
		//pf("%lld\n",n);
		for(i=0;i<=(n/2)-1;i++)
		{	
			//printf("%d\n",a[i]);
			b[a[i]-'A']++;
		}
		if(n%2!=0)
		{
			for(i=n/2+1;i<n;i++)
			b[a[i]-'A']--;
		}
		else
		{
			for(i=n/2;i<n;i++)
			{	
				//printf("%d\n",a[i]);
				b[a[i]-'A']--;
			}
		}
		for(i=0;i<60;i++)
		{
			if(b[i]!=0)
			{
				c=1;
				break;
			}
		}
		if(c==1)
		pf("NO\n");
		else
		pf("YES\n");
	}
	return 0;
}
