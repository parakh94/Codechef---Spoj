#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1,n2,n3,i,n,c=0,max=0;
    int *a=(int*)malloc(1500000*sizeof(int));
    for(i=0;i<1500000;i++)
    a[i]=0;
	scanf("%d %d %d",&n1,&n2,&n3);

    for(i=1;i<=(n1+n2+n3);i++)
    {
        scanf("%d",&n);
        a[n]++;

        if(a[n]==2)
            c++;

        if(n>max)
            max=n;
    }

    printf("%d\n",c);

    for(i=1;i<=max;i++)
    {
        if(a[i]>=2)
        printf("%d\n",i);
    }
   return 0;
}
