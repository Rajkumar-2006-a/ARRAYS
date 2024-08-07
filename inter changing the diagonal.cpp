#include<Stdio.h>
int main()
{
	int n,i,j,r,c,temp;
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of column:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		temp=a[i][i];
		a[i][i]=a[i][r-i-1];
		a[i][r-i-1]=temp;
	}
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
