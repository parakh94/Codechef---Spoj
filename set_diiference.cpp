#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
#define MOD 1000000007
void merge(long long int arr[], long long int l, long long int m, long long int r)
{
    long long int i, j, k;
    long long int n1 = m - l + 1;
    long long int n2 =  r - m;
 
    /* create temp arrays */
   long long  int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the sub-array
  of arr to be sorted */
void mergeSort(long long int arr[], long long int l, long long int r)
{
    if (l < r)
    {
       long long  int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
void printArray(long long int A[], long long int size)
{
   long long  int i;
    for (i=1; i <= size; i++)
        printf("%lld ", A[i]);
    printf("\n");
}
ll power(ll x,ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}
ll modpow(ll base, ll exp, ll modulus) 
{
  base %= modulus;
  ll result = 1;
  while (exp > 0) 
  {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}
ll pw(ll a, ll b,ll M)
{
  ll r;
  if(b==0) 
  return 1;
  r = pw(a,b/2,M);
  r = (r*r)%M;
  if(b%2) 
  r = (r*a)%M;
  return r;
}

int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,diff,ans=0;
		sf("%lld",&n);
		ll s[n+1],i,a[n+1];
		for(i=1;i<=n;i++)
		sf("%lld",&s[i]);
		mergeSort(s, 1, n);
	    //printArray(s, n);
		for(i=1;i<=n;i++)
		a[i]=s[i];
		for(i=1;i<=n;i++)
		s[i]=s[i]*pw(2,(i-1),MOD);
		for(i=n;i>0;i--)
		a[i]=a[i]*pw(2,(n-i),MOD);
		for(i=1;i<=n;i++)
		{
			diff=s[i]-a[n-i+1];
			ans=(ans+diff)%MOD;
		}
		pf("%lld\n",ans);
	}
	return 0;
}


