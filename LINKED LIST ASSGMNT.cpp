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
	ptr=(struct linked*)malloc(sizeof(struct linked));
	
	printf("enter value");
	scanf("%d",&x);
	a->data=x;
	a->link=NULL;
	printf("more!Y/N\n");
	scanf("%c",c);
	if(c=='Y')
	{
		while(c=='Y')
		{
			b=(struct linked*)malloc(sizeof(struct linked));
			printf("enter value");
			scanf("%d",&y);
			b->data=y;
			b->link=NULL;
			while(1)
			{
				if(a->link==NULL)
				{
					a->link=b;
					break;
					
				}
				else
				a=a->link;
			}
			
			printf("want more/n");
			scanf("%s",c);
		}
		
	}
	while(a->link!=NULL)
	{
		printf("%->d",a->data);
		a=a->link;
	}
	return 0;
	
	
}

