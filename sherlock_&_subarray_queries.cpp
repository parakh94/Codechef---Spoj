// Program for range minimum query using segment tree
#include <stdio.h>
#include <math.h>
#include <limits.h>
 
// A utility function to get minimum of two numbers
int maxVal(int x, int y) { return (x > y)? x: y; }
 
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
        return INT_MIN;
 
    // If a part of this segment overlaps with the given range
    int mid = getMid(ss, se);
    return maxVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}
 
// Return minimum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses RMQUtil()
int RMQ(int *st, int n, int qs, int qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return RMQUtil(st, 0, n-1, qs, qe, 0);
}
 
// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    //int count=0,max;
	if (ss == se)
    {
        st[si] = arr[ss];
        /*if(max<arr[ss])
        {
        	count=1;
        	max=arr[ss];
		}*/
        return arr[ss];
    }
 
    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum of two values in this node
    int mid = getMid(ss, se);
    st[si] =  maxVal(constructSTUtil(arr, ss, mid, st, si*2+1),
                     constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}

int constructSTUtil1(int arr[], int ss, int se, int *st, int si,int max)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    //int count=0,max;
    int count=0;
   	if (ss == se)
    {
        if(max==arr[ss])
        {
        	return 1;
		}
		return 0;
    }
 
    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum of two values in this node
    int mid = getMid(ss, se);
    count =  constructSTUtil1(arr, ss, mid, st, si*2+1,max)+
                     constructSTUtil1(arr, mid+1, se, st, si*2+2,max);
    return count;
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
 
// Driver program to test above functions
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    //int n = sizeof(arr)/sizeof(arr[0]);
 
    // Build segment tree from given array
    int *st = constructST(arr, n);
 int max;
 while(m--)
 {
 	int qs,qe;
 	scanf("%d%d",&qs,&qe);
 
    max=RMQ(st, n, qs-1, qe-1);
//	printf("max=%d\n",max);
    int count=0;
    for(i=qs-1;i<=(qe-1);i++)
    {
    	if(max==arr[i])
    	count++;
	}
    printf("%d\n",count);
}
    return 0;
}
