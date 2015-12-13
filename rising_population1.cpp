#include<stdio.h>
#include<string.h>
#define ll int
#define sf scanf
#define pf printf
int main()
{
 	ll t;
 	sf("%d",&t);
    char c[50005],c2[50005];
 	while(t--)
 	{
 		ll a[28]={0};
 	
 		ll i,flag=0,a1,b1,j;
 		sf(" %s",c);
 		sf(" %s",c2);
 		ll a2,b2;
 		a2=strlen(c);
 		b2=strlen(c2);
 		for(i=0;i<a2;i++)
 		{
 			a1=c[i]-'a';
 			a[a1]++;
 		}
	
 		for(j=0;j<b2;j++)
 		{
		    b1=c2[j]-'a';
 			a[b1]--;
 		}
 		for(j=0;j<28;j++)
 		{
 			if(a[j]!=0)
 			{
 				flag=1;
 				break;
 			}
 		}
		
 		if(flag==1)
 		pf("NO\n");
 		else
 		pf("YES\n");
 	}
	return 0;
}
