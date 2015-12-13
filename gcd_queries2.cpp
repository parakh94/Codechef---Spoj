// Program for range minimum query using segment tree
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include<stdlib.h>
#include<string.h>

 
// A utility function to get minimum of two numbers
int gcd(int x,int y)
{	
	if(x==0)
	return y;
	else
	return (gcd(y%x,x));
}
 
// A utility function to get the middle index from corner indexes.
int getMid(int s, int e) {  return s + (e -s)/2;  }
 
/*  A recursive function to get the minimum value in a given range of array
    indexes. The following are parameters for this function.
 
    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially 0 is
             passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment represented by
                 current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
int RMQUtil(int *st, int ss, int se, int qs, int qe, int index)
{
    // If segment of this node is a part of given range, then return the
    // min of the segment
    if (qs <= ss && qe >= se)
        return st[index];
 
    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 0;
 
    // If a part of this segment overlaps with the given range
    int mid = getMid(ss, se);
    return gcd(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}
 
// Return minimum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses RMQUtil()
int RMQ(int *st, int n, int qs, int qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n || qs > qe)
    {
        return 0;
    }
 
    return RMQUtil(st, 0, n-1, qs, qe, 0);
}
 
// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum of two values in this node
    int mid = getMid(ss, se);
    st[si] =  gcd(constructSTUtil(arr, ss, mid, st, si*2+1),
                     constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}
 
/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
int *constructST(int arr[], int n)
{
    // Allocate memory for segment tree
    int x = (int)(ceil(log2(n))); //Height of segment tree
    int max_size = 2*(int)pow(2, x) - 1; //Maximum size of segment tree
    int *st = new int[max_size];
 
    // Fill the allocated memory st
    constructSTUtil(arr, 0, n-1, st, 0);
 
    // Return the constructed segment tree
    return st;
}
inline long long int input(){
	char c=getchar();
	while(c<'0'||c>'9')
	c=getchar();
	long long int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=10*ret+c-48;
		c=getchar();
		
	}
	return ret;
} 
 
// Driver program to test above functions
int main()
{
	int t,arr[100001];
	t=input();
	while(t--)
	{
		int n,q,i,ans,l,r,a1=0,a2=0;;
		n=input();
		q=input();
		for(i=0;i<n;i++)
		arr[i]=input();
		int *st = constructST(arr, n);
		while(q--)
		{
			a1=0,a2=0;
			l=input();
			r=input();
		 	a1=RMQ(st, n, 0, l-2);
 			a2=RMQ(st, n, r, n-1);
 			ans=gcd(a1,a2);
		    printf("%d\n",ans);
		}
	}
	return 0;
}

    
