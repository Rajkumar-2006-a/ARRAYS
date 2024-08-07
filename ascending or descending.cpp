#include<stdio.h>
int main()
{
	int n,i,j,temp,r;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
printf("Enter 1 or 2:");
scanf("%d",&r);
if(r==1)
{

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;     
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
else
{
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;     
			}
		}
    }
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
}
