#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sf scanf
#define pf printf
#define MOD 1000000
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
ll s[1000005];
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,a,b,c,d,i,t,x,s1=0,s2=0,y=1;
		sf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
		for(i=0;i<1000001;i++)
		s[i]=0;
		x=d;	
		s[d]++;
		for(i=1;i<n;i++)
		{
			t=(a*x*x+b*x+c)%MOD;
			s[t]++;
			x=t;
		}
		for(i=0;i<1000001;i++)
		{
			if(s[i]>0)
			{
				if(y==1&&s[i]%2)
				{
					s1+=i;
					y=0;
				}
				else if(y==0&&s[i]%2)
				{
					y=1;
					s2+=i;
				}
			}
		}
		pf("%lld\n",abs(s1-s2));
	}
	return 0;
}
	
