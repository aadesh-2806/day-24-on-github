#include<stdio.h>

void max(int,int,int);
void main()
{
	int a,b,c,m;
	
	printf("hello\nenter no.1=");
	scanf("%d",&a);
	
	printf("enter no.2=");
	scanf("%d",&b);
	
	printf("enter no.3=");
	scanf("%d",&c);
	
	max(a,b,c);


	getch();
													//max of 3
}

void max(int x,int y,int z)
{
	int m;
	if(x>y)
	{
		if(x>z)
		{
			m=x;
		}
		else
		{
			m=z;
		}
	}
	else
	{
		if(y>z)
		{
			m=y;
		}
		else
		{
			m=z;
		}
	}
	printf("%d",m);
	
	getch();
}
