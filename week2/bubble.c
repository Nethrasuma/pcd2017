#include<stdio.h>
void bubblesort(int n,int a[])
{
	int temp;
	for(int i=0;i<(n-1);i++)
	{
		for(int j=0;j<(n-1-i);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n,i;
	printf("enter the number of elements :");
	scanf("%d",&n);
	int a[n];
	printf("enter %d array elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 bubblesort(n,a);
	printf("array elements after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
