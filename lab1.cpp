#include<iostream>
using namespace std;
int main()
{
	int i,j,r,k;
	cout<<"enter rows:";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=(2*(r-i));j++)
		cout<<" ";
		for(j=1;j<=i;j++)
		cout<<j<<" ";
		for(k=i-1;k>0;k--)
		cout<<k<<" ";
		cout<<endl;
	}
	return 0;
}
