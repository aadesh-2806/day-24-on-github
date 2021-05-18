#include<stdio.h>

void main()
{
	
	int i,f,m,t,n,a[100],j,k;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter value %d",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	f=0;
	while(i<n-1)
	{
		m=a[i]*a[i+1];
		if(f==0)
		{
			t=m;
			f=1;;
		}
		else
		{
			if(m>t)
			{
				t=m;
			}
		}
		i++;
	}
	printf("%d",t);	
	getch();
	
}	 		
