#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
int main()
{
	char a[105],b[105];
	while(sf(" %s",a)!=EOF)
	{
		ll l,i,j=0,f=0,c=0,u=0;
		l=strlen(a);
	    for(i=0;i<l;i++)
	    {
	    	if(a[i]>=97&&a[i]<=122)
	    	{
	    		b[j]=a[i];
	    		j++;
	    	}
	    	
	    	if(a[i]=='_')
	    	{
	    		if(u==1)
	    		{
	    			f=1;
	    			break;
	    		}
		    	c=1;
	    		i++;
			 	if(a[i]>=97&&a[i]<=122)
			 	{
			 		b[j]=a[i]-32;
			 		j++;
			 	}
			 	else
			 	{
			 		f=1;
			 		break;
			 	}
	    	}
	    	if(a[i]>=65&&a[i]<=91)
	    	{
	    		if(c==1)
	    		{
	    			f=1;
	    			break;
	    		}
	    		u=1;
	    		if(a[i-1]>=97&&a[i-1]<=122)
	    		{
	    			b[j]='_';
	    			j++;
	    			b[j]=a[i]+32;
	    			j++;
	    			i++;
	    			if(a[i]!='\0')
	    			{
	    				if(a[i]>=97&&a[i]<=122)
	    				{
	    					b[j]=a[i];
	    					j++;
	    				}
	    				else
	    				{
	    				 	f=1;
	    				    break;
    				    }
	    			}
	    		}
	    		else
				{
	    			f=1;
	    			break;
	    		}
	    	}
	    }
	    b[j]='\0';
	    ll n=strlen(b);
	    if(f==1)
	    pf("Error!\n");
	    else
	    {
	    	for(i=0;i<n;i++)
	    	pf("%c",b[i]);
	    	pf("\n");
	    }
	}
   	return 0;
}
	
