#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define ll long long int
#define pf printf
#define sf scanf
#define gc getchar
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

inline ll input() 
{
	  char c = gc();
	  while(c<'0' || c>'9') c = gc();
	  ll ret = 0;
	  while(c>='0' && c<='9') 
	  {
	    ret = 10 * ret + c - 48;
	    c = gc();
	  }
  	  return ret;
}
ll gcd(ll n,ll m)
{
	if(n==0)
    return m;
	else
	return(gcd(m%n,n));
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

ll pwr(ll a, ll b)
{
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r);
  if(b%2) r = (r*a);
  return r;
}
 long long int first(long long int arr[], long long int low, long long int high,  long long int x, long long int n)
{
  if(high >= low)
  {
   long long  int mid = (low + high)/2;  /*low + (high - low)/2;*/
    if( ( mid == low || x > arr[mid-1]) && arr[mid] == x)//changed
      return mid;
    else if(x > arr[mid])
      return first(arr, (mid + 1), high, x, n);
    else
      return first(arr, low, (mid -1), x, n);
  }
  return -1;
}
 
 
/* if x is present in arr[] then returns the index of LAST occurrence 
   of x in arr[0..n-1], otherwise returns -1 */
long long int last(long long int arr[], long long int low, long long int high, long long int x, long long int n)
{
  if(high >= low)
  {
    long long int mid = (low + high)/2;  /*low + (high - low)/2;*/
    if( ( mid == n-1 || x < arr[mid+1]) && arr[mid] == x )
      return mid;
    else if(x < arr[mid])
      return last(arr, low, (mid -1), x, n);
    else
      return last(arr, (mid + 1), high, x, n);      
  }
  return -1;
}
 
long long int count(long long int arr[], long long int x, long long int z,long long int n)
{
  long long int i; // index of first occurrence of x in arr[0..n-1]
  long long int j; // index of last occurrence of x in arr[0..n-1]
     
  /* get the index of first occurrence of x */
  i = first(arr, z, n-1, x, n);
 // printf("%lld\n",i);
 
  /* If x doesn't exist in arr[] then return -1 */
  if(i == -1)
    return i;
    
  /* Else get the index of last occurrence of x. Note that we 
      are only looking in the subarray after first occurrence */  
  j = last(arr, i, n-1, x, n);     
    
  /* return count */
  return j-i+1;
}
ll bsearch(ll a[],ll first,ll last,ll val)
{
    ll mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==val)
        {
            return mid;
        }
        else if(a[mid]<val)
        {
            first=mid+1;
        }
        else
        last=mid-1;
    }
    return -1;
}
void printPowerSet(ll *set, ll set_size)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
  ll pow_set_size = pow(2, set_size);
    ll counter, j;
 
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
            printf("%lld", set[j]);
       }
       printf("\n");
    }
}

