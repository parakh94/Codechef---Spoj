#include <stdio.h>
#include <float.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>
#define ll long long int
#define sf scanf
#define pf printf

// A structure to represent a Point in 2D plane
struct Point
{
    int x, y;
};
int compareY(const void* a, const void* b)
{
    struct Point *p1 = (struct Point *)a;
	struct Point *p2 = (struct Point *)b;
    return (p1->y - p2->y);
}
int main()
{
	ll t;
	sf("%lld",&t);
	while(t--)
	{
		ll n,i,c=1,j;
		sf("%lld",&n);
		struct Point *P=(struct Point *)malloc(n*sizeof(struct Point));
		for(i=0;i<n;i++)
		sf("%d%d",&P[i].x,&P[i].y);
	    qsort(P, n, sizeof(struct Point), compareY);
		i=0;
	    for(j=1;j<n;j++)
	    {
	    	if(P[j].x>P[i].y)
	    	{
	    		i=j;
	    		c++;
	    	}
	    }
	    pf("%lld\n",c);
	    //for(i=0;i<n;i++)
		//printf(" %d  %d\n",P[i].x,P[i].y);
	}
    return 0;
}

