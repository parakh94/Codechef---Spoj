#include<bits/stdc++.h>
using namespace std;
#define ll int
#define sf scanf
#define pf printf
int main()
{
 	ll t;
 	sf("%d",&t);
 	while(t--)
 	{
 		ll a[28]={0};
 		char c[50005],c2[50005];
 		ll i,flag=0,a1,b1,j;
 		sf("%s",c);
 		sf("%s",c2);
 		for(i=0;i<strlen(c);i++)
 		{
 			a1=c[i]-'a';
 			a[a1]++;
 		}
	
 		for(j=0;j<strlen(c2);j++)
 		{
		    b1=c2[j]-'a';
 			if(a[b1]>=1)a[b1]--;
		     else
			 flag=1;
 		}
		if(i!=j)
		{
			printf("NO\n");
			continue;
		}
 		if(flag==1)
 		pf("NO\n");
 		else
 		pf("YES\n");
 	}
	return 0;
}
