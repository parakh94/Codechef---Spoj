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
		ll n,k,i;
		char s[100002];
		sf("%lld%lld",&n,&k);
		sf(" %s",s);
		if(k==1)
		{
		    char s1[n+1],s2[n+1];
		    ll c1=0,c2=0;
		    for(i=0;i<n;i=i+2)
            {
                s1[i]='1';
                s2[i]='0';
            }
            for(i=1;i<n;i=i+2)
            {
                s1[i]='0';
                s2[i]='1';
            }
            s1[n]='\0';
            s2[n]='\0';
            for(i=0;i<n;i++)
            {
                if(s1[i]!=s[i])
                    c1++;
                if(s2[i]!=s[i])
                    c2++;
            }
            if(c1<c2)
            {
                pf("%lld\n",c1);
                pf("%s\n",s1);
            }
            else
            {
                pf("%lld\n",c2);
                pf("%s\n",s2);
            }
		}
		else
		{
		    ll cnt=1,final=0;
            for(i=1;i<n;i++)
            {
                if(s[i]!=s[i-1])
                    cnt=1;
                else
                    cnt++;
                if(cnt>k)
                {
                    if(s[i]!=s[i+1] && s[i-1]=='1')
                        s[i-1]='0';
                    else if(s[i]!=s[i+1] && s[i-1]=='0')
                        s[i-1]='1';
                    else if(s[i]==s[i+1] && s[i]=='1' && i+1<n)
                        s[i]='0';
                    else if(s[i]==s[i+1] && s[i]=='0' && i+1<n)
                        s[i]='1';
                    cnt=1;
                    final++;
                }
            }
            pf("%lld\n",final);
            pf("%s\n",s);
        }
	}
	return 0;
}
