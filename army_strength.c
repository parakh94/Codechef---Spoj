#include<stdio.h>
#define MAX 10000
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j, n,n2, arr[MAX],arr2[MAX],l,m;
		scanf("%d %d",&n,&n2);
		for(i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
		for(j=0; j<n2; j++)
		{
			scanf("%d",&arr2[j]);
		}
		l=arr[0],m=arr2[0];
		for(i=1; i<n; i++)
		{
			if(arr[i]>l)
			l=arr[i];
		}
		for(j=1; j<n2; j++)
		{
			if(arr2[j]>m)
			m=arr2[j];
		}
		if(l>=m)
		printf("Godzilla\n");
		else if(l<m)
		printf("MechaGodzilla\n");
		else
		printf("uncertain\n");
	}
		return 0;
}
