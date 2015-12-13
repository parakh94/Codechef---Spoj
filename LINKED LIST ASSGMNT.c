#include<stdio.h>
#include<stdlib.h>
struct linked
{
	int data;
	struct linked *link;
}*a,*b,*ptr;
int main()
{
	char c;
	int x,y;
	a=(struct linked*)malloc(sizeof(struct linked));
	printf("enter value");
	scanf("%d",&x);
	a->data=x;
	a->link=NULL;
	printf("more!Y/N\n");
	scanf(" %c",&c);
	while(c=='Y')
	{
			b=(struct linked*)malloc(sizeof(struct linked));
			printf("enter value");
			scanf("%d",&y);
			b->data=y;
			
			b->link=a;
			a=b;
			printf("Y/N");
			scanf(" %c",&c);
			
    }
	    ptr=a;
	    while(ptr!=NULL)
{
	
 		printf("%d",ptr->data);
		
		ptr=ptr->link;
}
	return 0;
	
	
}

