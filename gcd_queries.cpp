#include<stdio.h>
#include<string.h>
#include<iostream>
#include<math.h>
#include<cstdio>
#define ll long long int
#define sf scanf
#define pf printf
#include <limits.h>
 
// A utility function to get minimum of two numbers
int gcd(int x, int y) 
{
	if(x%y==0)
	return y;
	if(y%x==0)
	return x;
	if(x>y)
	return gcd(y,x%y);
	if(x<=y)
	return gcd(x,y%x);
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
        return INT_MAX;
 
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
    /*if (qs < -1 || qe > n+1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }*/
 
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
 pf("hhhh\n");
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
using namespace std;
int readInt ()
 {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
int main()
{
	int t;
	t=readInt();
	while(t--)
	{
		int n,q,a[100002],i;
		n=readInt();
		q=readInt();
		for(i=0;i<n;i++)
		a[i]=readInt();
		while(q--)
		{
			int l,r,a1,a2;
			l=readInt();
			r=readInt();
			int *st = constructST(a, n);
 			int qs1,qe1,qs2,qe2;
		    qs1 = 0;
			if(l>1)
		    {	
				qe1 = l-1;  // Ending index of query range
				a1=RMQ(st, n, qs1, qe1);
			}
			printf("%d\n",a1);
		    // Print minimum value in arr[qs..qe]
		    if(r<n)
		    {
		    	qs2=r+1;
		   	 	qe2=n;
		    	a2=RMQ(st, n, qs2, qe2);
		    }
		    printf("%d\n",a2);
		}
	}
	return 0;
}

