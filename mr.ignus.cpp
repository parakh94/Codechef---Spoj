#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
ll FindMaxSum(ll arr[], ll n)
{
  ll incl = arr[0];
  ll excl = 0;
  ll excl_new;
  ll i;
 
  for (i = 1; i < n; i++)
  {
     excl_new = (incl > excl)? incl: excl;
     incl = excl + arr[i];
     excl = excl_new;
  }
  return ((incl > excl)? incl : excl);
}

int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,i,ans;
		sf("%lld",&n);
		ll a[n];
		for(i=0;i<n;i++)
		{
			sf("%lld",&a[i]);
		}
		ans= FindMaxSum(a, n);
		pf("%lld\n",ans);
	}
	return 0;
}
	
