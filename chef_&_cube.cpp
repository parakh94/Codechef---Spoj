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

int main()
{
	ll t,a[10],i;
	for(i=0;i<10;i++)
	a[i]=-1;
	sf("%lld",&t);
	while(t--)
	{
		char c[10];
		ll s,p=0,f=0;
		for(i=0;i<6;i++)
		{
			sf("%s",c);
			if(!strcmp(c,"black"))
			a[i]=0;
			if(!strcmp(c,"blue"))
			a[i]=1;
			if(!strcmp(c,"red"))
			a[i]=2;
			if(!strcmp(c,"green"))
			a[i]=3;
			if(!strcmp(c,"yellow"))
			a[i]=4;
			if(!strcmp(c,"orange"))
			a[i]=5;
		}
		if(a[0]==a[4]&&a[0]==a[2])
		f=1;
		if(a[0]==a[4]&&a[0]==a[3])
		f=1;
		if(a[0]==a[5]&&a[0]==a[2])
		f=1;
		if(a[0]==a[5]&&a[0]==a[3])
		f=1;
		if(a[1]==a[4]&&a[1]==a[2])
		f=1;
		if(a[1]==a[4]&&a[1]==a[3])
		f=1;
		if(a[1]==a[5]&&a[1]==a[2])
		f=1;
		if(a[1]==a[5]&&a[1]==a[3])
		f=1;
		/*
		ll j;
		for(i=0;i<6;i++)
		{
			p=0;
			for(j=0;j<6;j++)
			{
				if(a[i]==a[j])
				p++;
				if(p>=3)
				f=1;
			}
		}
		if(f==1)
		pf("YES\n");
		else
		pf("NO\n");
		
		p=0;
		for(i=2;i<6;i++)
		{
		    if(a[0]==a[i])
		    p++;
		    if(p>=3)
		    f=1;
		}
		p=0;
		for(i=2;i<6;i++)
		{
		    if(a[1]==a[i])
		    p++;
		    if(p>=3)
		    f=1;
		}
		p=0;
		for(i=0;i<6;i++)
		{
		    if(a[2]==a[i]&&i!=3)
		    p++;
		    if(p>=3)
		    f=1;
		}
		p=0;
		for(i=0;i<6;i++)
		{
		    if(a[3]==a[i]&&i!=2)
		    p++;
		    if(p>=3)
		    f=1;
		}
		p=0;
		for(i=0;i<5;i++)
		{
		    if(a[4]==a[i])
		    p++;
		    if(p>=3)
		    f=1;
		}
		p=0;
		for(i=0;i<6;i++)
		{
		    if(a[5]==a[i]&&i!=4)
		    p++;
		    if(p>=3)
		    f=1;
		}
		for(i=0;i<6;i++)
		pf("%lld ",a[i]);*/
		if(f==1)
		pf("YES\n");
		else
		pf("NO\n");
	}
	return 0;
}



