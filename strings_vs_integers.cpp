#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
 	ll t;
 	sf("%lld\n",&t);
 	while(t--)
 	{
         char s[10001],b[10001];
         gets(s);
         ll l,i,j=0;
         l=strlen(s);
         for(i=0;i<l;i++)
         {
         	if(s[i]<48)
         	{
         		b[j]=s[i];
         		j++;
         	}
         	if(s[i]>57)
         	{
         		b[j]=s[i];
         		j++;
         	}
         	b[j]='\0';
         }
         pf("%s\n",b);
 	}
	return 0;
}

