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
		double s,a,b,c,d;
		sf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2;
		double area;
		area=pow(((s-a)*(s-b)*(s-c)*(s-d)),0.5);
		pf("%0.2lf\n",area);
	}
	return 0;
}
	
