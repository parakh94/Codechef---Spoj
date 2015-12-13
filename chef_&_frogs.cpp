#include<stdio.h>
#include<stdlib.h>
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
    for (i=1; i <= size; i++)
        printf("%lld ", A[i]);
    printf("\n");
}
 
int main()
{
	long long int n,k,p,i,l1,l2,ctr=0,j,b,c;
	scanf("%lld %lld %lld",&n,&k,&p);
	long long int *a=(long long int*)malloc(n*sizeof(long long int));
	//long long int *b=(long long int*)malloc(p*sizeof(long long int));
   //	long long int *c=(long long int*)malloc(p*sizeof(long long int));
	long long int *d=(long long int*)malloc(n*sizeof(long long int));
	long long int *e=(long long int*)malloc(n*sizeof(long long int));
	for(i=1;i<=n;i++)
	scanf("%lld",&a[i]);
   	//for(i=1;i<=p;i++)
  //	scanf("%lld %lld",&b[i],&c[i]);
	for(i=1;i<=n;i++)
	d[i]=a[i];
	mergeSort(d, 1, n);
   //	printArray(d, n);
/*	e[1]=0;
	for(i=2;i<=n;i++)
	{
		if((d[i]-d[i-1])>k)
		{   ctr=0;
		    e[i]=ctr;
		}
		else
		{
			ctr++;
			e[i]=ctr;
		}
	}
 
    //printf("\nSorted array is \n");
   
    //printArray(e, n);
    for(i=1;i<=p;i++)
    {    scanf("%lld %lld",&b,&c);
    	if(a[b]==a[c])
    //	printf("Yes\n");
    	else if(a[b]<a[c])
    	{      l1=binarySearch(d,1,n,a[b]);
    	        l2=binarySearch(d,1,n,a[c]);
    	      // printf("%lld %lld ",l1,l2);
    	       if((l2-l1)==e[l2]-e[l1])
    //	       printf("Yes\n");
    	       else
   // 	       printf("No\n");
    	        
    	      
    	}
    	else if(a[b]>a[c])
    	{
    		l1=binarySearch(d,1,n,a[c]);
    	        l2=binarySearch(d,1,n,a[b]);
    	        //printf("%lld %lld ",l1,l2);
    	       if((l2-l1)==e[l2]-e[l1])
 //   	       printf("Yes\n");
    	       else
    	   //    printf("No\n");
    	}
    	
		
    }*/
    printArray(d ,n);
    return 0;
	
}

