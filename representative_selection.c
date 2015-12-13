#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	ll t;
	sf("%lld",&t);
	char *a,*b[1005],temp[150];
	char c[150];
	while(t--)
	{
        ll n,i=0,l,j;
		sf("%lld",&n);
		while(n--)
		{
			sf("%s",temp);
			l=strlen(temp);
			//pf("%lld",l);
			a=(char *)malloc((sizeof(char)*(l+1)));
			strcpy(a,temp);
			b[i]=a;
			i++;
		}
		int flag=0;
		sf("%s",c);
		for(j=0;j<i;j++)
		{
			if(strcmp(b[j],c)==0)
			{
				flag=1;
				break;
			}
			
		}
		if(flag==1)
		pf("yes\n");
		else
		pf("no\n");
	}
	return 0;
}
