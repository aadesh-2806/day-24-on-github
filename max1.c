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
	t=0;
	while(i<n)
	{
		j=i+1;
		while(j<n)
		{
			k=j+1;
			while(k<n)
			{
				m=a[i]*a[j]*a[k];
				if(f==0||m>t)
				{
					t=m;
					f=1;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	printf("%d",m);	
	getch();
	
}	 		
