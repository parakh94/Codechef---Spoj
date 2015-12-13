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

int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n;
		sf("%lld",&n);
		ll a[n+1],c[n+1],i,sum=0,f=0;
		for(i=0;i<n;i++)
		{
			sf("%lld",&c[i]);
			sum+=c[i];
			if(c[i]>=n)
			f=1;
		}
		if(sum!=n)
		f=1;
		if(f==1)
		{
			pf("-1\n");
		}
		else
		{
			ll j=n-1;
			for(i=0;i<n;i++)
			a[i]=0;
			for(i=0;i<n;i++)
			{
				while(c[i])
				{
	 	                a[j]=i+1;
						j--;
						c[i]--;
				}
			}
			
			/*for(i=0;i<n;i++)
			pf("%lld ",a[i]);
			pf("\n");*/
			for(i=0;i<n;i++)
			{
				ll temp;
				if(a[i]==i+1)
				{
					ll x=i;
					while(a[x]==a[i]&&x<n)
					x++;
					if(x!=n)
					{
						temp=a[i];
						a[i]=a[x];
						a[x]=temp;
					
					}
					else
					{
						ll x=i;
					while(a[x]==a[i]&&x>=0)
					x--;
					if(x>=0)
					{
						temp=a[i];
						a[i]=a[x];
						a[x]=temp;
					
					}
					}
						
				}
			}
			for(i=0;i<n;i++)
			pf("%lld ",a[i]);
			pf("\n");
		}
	}
	return 0;
}


