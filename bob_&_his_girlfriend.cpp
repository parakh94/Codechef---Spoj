#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
int Minimum(int a, int b, int c)
{
    return min(min(a, b), c);
}
int EditDistanceRecursion( char *X, char *Y, int m, int n )
{
    // Base cases
    if( m == 0 && n == 0 )
        return 0;
 
    if( m == 0 )
        return n;
 
    if( n == 0 )
        return m;

    int left = EditDistanceRecursion(X, Y, m-1, n) + 1;
    int right = EditDistanceRecursion(X, Y, m, n-1) + 1;
    int corner = EditDistanceRecursion(X, Y, m-1, n-1) + (X[m-1] != Y[n-1]);
 
    return Minimum(left, right, corner);
}
 
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll ans;
		char X[2001],Y[2001];
		sf(" %s",X);
		sf(" %s",Y);
		ans=EditDistanceRecursion(X, Y, strlen(X), strlen(Y));
		pf("%lld\n",ans);
	}
	return 0;
}
