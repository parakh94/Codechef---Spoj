#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
 	ll t;
 	sf("%lld",&t);
 	while(t--)
 	{
	     char a[100001];
	     ll i,n,c1=0,c2=0;
	     sf(" %s",a);
	     n=strlen(a);
	     for(i=0;i<n;i++)
	     {
	     		if(a[i]=='+')
	     		c1++;
	     		if(a[i+1]=='-')
	     		c1++;	
  	            i++;
 		 }
 		 for(i=0;i<n;i++)
	     {
	     		if(a[i]=='-')
	     		c2++;
	     		if(a[i+1]=='+')
	     		c2++;
  	            i++;
 		 }
 		 if(c2>c1)
 		 pf("%lld\n",c1);
 		 else
 		 pf("%lld\n",c2);
 	}
	return 0;
}

