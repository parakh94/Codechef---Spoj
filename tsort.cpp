#include<cstdio>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
int main()
{
ll i,n;
scanf("%lld",&n);
vector<ll>v(n);
for(i=0;i<n;i++)
{
scanf("%lld",&v[i]);
}
sort(v.begin(),v.end());
for(i=0;i<n;i++)
    printf("%lld\n",v[i]);
return 0;
}   
