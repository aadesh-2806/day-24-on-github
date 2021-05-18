#include<stdio.h>

void main()
{	
	int i,a[50][50],b[50],c[50][50],d,r,x,s,t,j,n,k,z,m;
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf("enter no %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("enter size k=");
	scanf("%d",&k);
	
	x=0;
	for(i=0;i<n;i++)
	{
		for(s=0;s<n;s++)
		{
			t=k+i;
			z=k+s;
			if(t<=n && z<=n)
			{
				b[x]=0;
				d=0;
				for(r=i;r<t;r++)
				{
					for(j=s;j<z;j++)
					{
						b[x]=b[x]+a[r][j];
						c[x][d++]=a[r][j];
					}
				}
				x++;
			}
		}
	}
	
	m=b[0];
	for(i=1;i<x;i++)
	{
		if(m<b[i])
		{
			m=b[i];
			j=i;
		}
	}
	printf("%d\n",m);
	
	for(d=0;d<(k*k);d++)
	{
		printf("%d ",c[j][d]);
		if((d+1)%k==0)
		{
			printf("\n");
		}
	}
	getch();
	
}	
