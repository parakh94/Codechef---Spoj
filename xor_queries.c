#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ll long long int
#define sf scanf
#define pf printf
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
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
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
       long long  int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
void printArray(int A[], int size)
{
   int i;
    for (i=1; i <= size; i++)
        printf("%lld ", A[i]);
    printf("\n");
}

int main()
{
	ll t,i=1;
	sf("%lld",&t);
	int *a,*d;
	a=(int *)malloc((t-1)*sizeof(int));
	d=(int *)malloc((t-1)*sizeof(int));
	while(t--)
	{
		ll l,r,k,j,xorr,c1,c3=0,m;
		int type,x0,x1,x3,max,l4,r4,e=1;
		sf("%lld",&type);
		if(type==0)
		{
			sf("%d",&x0);
			a[i]=x0;
			i++;
		}
		if(type==1)
		{
			sf("%lld%lld%d",&l,&r,&x1);
			max = x1 ^ a[l];
			c1=a[l];
			for(j=l;j<=r;j++)
			{
				xorr=x1 ^ a[j];
				if(xorr>max)
				c1=a[j];
			}
			pf("%lld\n",c1);
		}
		if(type==2)
		{
			sf("%lld",&k);
			for(j=i-1;j>(i-1-k);j--)
			a[j]=0;
			i=j+1;
		}
		if(type==3)
		{
			sf("%lld%lld%d",&l,&r,&x3);
			for(j=l;j<=r;j++)
			{
				if(a[j]<=x3)
				c3++;
			}
			pf("%lld\n",c3);
		}
		if(type==4)
		{
			sf("%d%d%d",&l4,&r4,&k);
			for(m=l4;m<=r4;m++)
			{
				pf("%d\n",a[m]);
				d[e]=a[m];
				e++;
			}
			//mergeSort(d, 1, e-1);
			sort(d,d+sizeof(d)/sizeof(d[0]));
			printArray(d, e-1);
			//pf("%d\n",a[l4+k]);
		}
	}
	return 0;
}	
