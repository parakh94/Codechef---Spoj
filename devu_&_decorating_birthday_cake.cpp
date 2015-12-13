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
	ll t,b[50];
	sf("%lld",&t);
	while(t--)
	{
		sf(" %s",a);
		ll n,i,max=0,maxi=0,prev=0,j;
		n=strlen(a);
		for(i=0;i<50;i++)
		b[i]=0;
		for(i=0;i<n;i++)
		b[a[i]-'a']++;
		printArray(b, 30);
		for(i=0;i<30;i++)
		{
			if(b[i]>max)
			{
				max=b[i];
			}
		}
		if(max>ceil(len/2.0))
		printf("-1\n");
		else
		{
		
			for(i=0;i<30;i++)
			{
				if(b[i]>max)
				{
					max=b[i];
                    maxi=i;
				}
			}
			b[maxi]--;
			pf("%c",maxi+'a');
			for(j=1;j<n;j++)
			{
				max=0;
				for(i=0;i<30;i++)
				{
					if(b[i]>max)
					{
						max=b[i];
						prev=maxi;
						maxi=i;
					}
				}
				if(prev!=maxi)
				{
					pf("%c",maxi+'a');
					b[maxi]--;
				}
				else
				
			}
		}
		
		
		
	}
	return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	// your code goes here
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[100001];
		scanf("%s",a);
		int len = strlen(a);
		for(i=0;a[i]!='\0';++i)
		{
			cnt[a[i]-'a']++;
		}
		int max = -1;
		for(i=0;i<26;i++)
		{
			if(cnt[i]>max)
				max = cnt[i];
		}
		
		if(max>ceil(len/2.0))
			printf("-1\n");
		else
		{
			char b[100001];
			int im;
			int k = 0;
			while(k<len)
			{
				im  = 0;
				for(i=0;i<26;++i)
				{
					if(cnt[i] > cnt[im])
						im = i;
				}
				while(cnt[im])
				{
					b[k] = 'a'+im;
					cnt[im]--;
					k+=2;
					if(k>=len)
					{
						k = 1;
						while(cnt[im])
						{
							b[k] = 'a'+im;
							cnt[im]--;
							k+=2;		
						}
						while(k<len)
						{
					 		for(i=0;i<26;++i)
							{
								if(cnt[i] > cnt[im])
								im = i;
							}
							while(cnt[im])
							{
								b[k] = 'a'+im;
								cnt[im]--;
								k+=2;
								if(k>=len)
								{
			 		                goto end;
						
						        }
					        }
						}
					}
				}
			}
			end:
		b[len] = '\0';
		printf("%s\n",b);
		}
	}
	
	return 0;
}
