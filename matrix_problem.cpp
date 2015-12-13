#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
int main()
{
	std::ios::sync_with_stdio(false);
	ll n,no,m,a[101][101],b[101][101],c[101][101],i,j,an;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	while(m--)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=a[i][j];
			}
		}
		cin>>an;
		no=an/90;
		while(no--)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				b[j][n-i-1]=c[i][j];
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				c[i][j]=b[i][j];
			}
			
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			cout<<b[i][j]<<" ";
			cout<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}

