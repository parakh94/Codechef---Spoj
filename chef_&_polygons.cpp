#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
long long int binarySearch(long long int arr[],long long  int l, long long int r, long long int x)
{
  while (l <= r)
  {
    long long int m = l + (r-l)/2;

    if (arr[m] == x) return m;  // Check if x is present at mid

    if (arr[m] < x) l = m + 1; // If x greater, ignore left half

    else r = m - 1; // If x is smaller, ignore left half
  }
  return -1; // if we reach here, then element was not present
}
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
        long long  int m = l+(r-l)/2;//Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
	    mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
void printArray(long long int A[], long long int size)
{
   long long  int i;
    for (i=0; i < size; i++)
        printf("%lld ", A[i]);
    printf("\n");
}
typedef struct
{
    ll x;
    ll  y;
 
} X;
X positions[100010];
 
int sort_xy(void const *a, void const *b)
{
    X *pa, *pb;
 
    pa = (X *) a;
    pb = (X *) b;
 
    if( pa->x < pb->x) return -1;
    if( pa->x > pb->x) return 1;
 
    if( pa->y < pb->y) return -1;
    if( pa->y > pb->y) return 1;
 
    return 0;
} 

ll a[100010],b[100010];
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,i,j;
		sf("%lld",&n);
		for(i=0;i<n;i++)
		{
			ll m,max,x,y;
			sf("%lld",&m);
			sf("%lld%lld",&x,&y);
			max=x;
			for(j=1;j<m;j++)
			{
				sf("%lld%lld",&x,&y);
				if(max<x)
				max=x;
			}
			a[i]=max;
		}
		for( i = 0 ; i < n ; i++)
	    {
	        positions[i].x = a[i];
	        positions[i].y = i;
	    } 
	    ll k=0;
	    qsort(positions, n, sizeof(X), sort_xy);
	    for(i=0;i<n;i++)
	    {
	    	b[positions[i].y]=k;
	    	k++;
	    }
	    for(i=0;i<n;i++)
	    pf("%lld ",b[i]);
	    pf("\n");
	}
	return 0;
}
/*#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
    float x;
    float y;
 
} X;
X positions[100010];
 
int sort_xy(void const *a, void const *b)
{
    X *pa, *pb;
 
    pa = (X *) a;
    pb = (X *) b;
 
    if( pa->x < pb->x) return -1;
    if( pa->x > pb->x) return 1;
 
    if( pa->y < pb->y) return -1;
    if( pa->y > pb->y) return 1;
 
    return 0;
} 
 
int main( int argc, char **argv)
{
    int i;
 
    printf("\nInitials positions : \n");
    for( i = 0 ; i < n ; i++)
    {
        positions[i].x = a[i];
        positions[i].y = i;
        //printf("  x=%f y=%f \n", positions[i].x, positions[i].y );
    }
 
 
    qsort(positions, n, sizeof(X), sort_xy);
 
 
    printf("\n\nSorted positions : \n");
    for( i = 0 ; i < NUM_POSITIONS ; i++)
    {
        printf("  x=%f y=%f \n", positions[i].x, positions[i].y);
    }
 
    return 0;
}
*/


