#include<stdio.h>
#include<math.h>

void main()
{
	
	int i,a[50][50],b[50],x,m,n,j;
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	x=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter no %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		j=0;
		for(b[x]=a[i][j++];j<n;j++)
		{
			b[x]=(~(a[i][j] & b[x])) & (a[i][j] | b[x]);
		}
		x++;
	}
	for(j=0;j<n;j++)
	{
		i=0;
		for(b[x]=a[i++][j];i<n;i++)
		{
			b[x]=(~(a[i][j] & b[x])) & (a[i][j] | b[x]);
		}
		x++;
	}
	m=b[0];
	
	for(j=1;j<x;j++)
	{
		if(m<b[j])
		{
			m=b[j];
		}
	}
	printf("%d",m);
	getch();
	
}	
