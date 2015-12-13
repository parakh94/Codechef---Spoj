#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	std::ios::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--)
	{
	 	 ll n,i=0,r,le;
	 	 char m[150];
	 	 cin>>n;
		 char *a,*v[1005],temp[150];
		 for(i=0;i<n;i++)
		{
			cin>>temp;
			le=strlen(temp);
			//pf("%lld",l);
			a=(char *)malloc((sizeof(char)*(le+1)));
			strcpy(a,temp);
			v[i]=a;
		}
		 cin>>m;
		 ll l,h,mid,flag=0;
		 l=0,h=n-1;
		 while(l<=h)
		 {
		 	mid=(l+h)/2;
	 		if(strcmp(m,v[mid])==0)
		 	{
		 		cout<<"yes\n";
		 		flag=1;
		 		break;
		 	}
		 	if(strcmp(m,v[mid])>0)
		 	l=mid+1;
	 		if(strcmp(m,v[mid])<0)
	 		h=mid-1;
		 }	 
		 if(flag!=1)
		 cout<<"no\n";
	}
	return 0;
}

