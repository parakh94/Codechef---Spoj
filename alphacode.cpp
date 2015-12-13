#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
char s[5010];
int main()
{
 	while(1)
 	{
 		ll l,a[5010],n,i=0;
 		sf(" %s",&s);
 		l=strlen(s);
 		if(l==1&&s[0]=='0')
 		break;
 		a[0]=1;
 		if(((s[0]-48)*10 + s[1]-48)<=26)
 		{
 			if(s[1]=='0')
 			a[1]=1;
 			else
 			a[1]=2;
 		}
 		else
 		a[1]=1;
 		for(i=2;i<l;i++)
 		{
 			
 			if(((s[i-1]-48)*10+s[i]-48)<=26)
 			{
 				if(s[i]!='0'&&s[i-1]!='0')
			    a[i]=a[i-1]+a[i-2];
 				
                if(s[i]=='0'&&s[i-1]!='0')
 				a[i]=a[i-2];
 				
 				if(s[i]!='0'&&s[i-1]=='0')
 				a[i]=a[i-1];
 			}
 			else
 			a[i]=a[i-1];
 		}
 		if(i==2&&l==1)
 		pf("%lld\n",a[i-2]);
 		else
		pf("%lld\n",a[i-1]);
 	}
	return 0;
}

