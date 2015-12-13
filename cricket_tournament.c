#include<stdio.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
ll maxDiff(ll arr[], ll arr_size)
{
  ll max_diff = arr[1] - arr[0];
  ll min_element = arr[0];
  ll i;
  for(i = 1; i < arr_size; i++)
  {       
    if(arr[i] - min_element > max_diff)                               
      max_diff = arr[i] - min_element;
    if(arr[i] < min_element)
         min_element = arr[i];                     
  }
  return max_diff;
}    
 
/* Driver program to test above function */
int main()
{
  ll t;
  sf("%lld",&t);
  while(t--)
  {
 	ll n,i,a[1005];
 	sf("%lld",&n);
 	for(i=0;i<n;i++)
 	sf("%lld",&a[i]);
 	
  printf("%lld\n",  maxDiff(a, n));
  }
  return 0;
}
