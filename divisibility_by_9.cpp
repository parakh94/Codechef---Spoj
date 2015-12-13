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
char a[100005];
int main()
{
	ll t,b[50],i;
	sf("%lld",&t);
	while(t--)
	{
		for(i=0;i<10;i++)
		b[i]=0;
		sf(" %s",a);
		ll n,c,x=0,j,sum=0,f=0,prev=0,nxt=0,ans=0;
		n=strlen(a);
		for(i=0;i<n;i++)
		{
			c=a[i]-48;
			b[c]++;
		}
		for(i=0;i<10;i++)
		{
			sum=sum+i*b[i];
		}
		for(i=0;i<10;i++)
		{
            if(b[i]==1)
            {
            	x++;
            	j=i;
            }
		}
		//pf("sum=%lld\n",sum);
		if(sum%9==0)
		f=1;
		if(sum<9)
		{
			if(x==1)
			{
				if(j<=4)
				ans=j;
				else
				ans=9-j;
			}
			else
			ans=9-sum;
		}
		else
		{
			prev=sum-sum%9;
			nxt=prev+9;
		//	pf("prev=%lld\n",prev);
		//	pf("nxt=%lld\n",nxt);
			if(sum-prev>nxt-sum)
			ans=nxt-sum;
			else
			ans=sum-prev;
		}
		if(f==1)
		pf("0\n");
		else
		pf("%lld\n",ans);
	}
	return 0;
}



