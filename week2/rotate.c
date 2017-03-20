#include<stdio.h>
unsigned int rotate_right(unsigned int x,unsigned int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(x%2==0)
		{
			x=x>>1;
		}
		else
		{
			x=x>>1;
			x=x|1<<(sizeof(unsigned int)*8)-1;
		}
	}
	return x;
}
unsigned int main()
{
	unsigned int n,x;
	printf("enter the number");
	scanf("%x",&x);
	printf("enter number of rotation");
	scanf("%d",&n);
	x=rotate_right(x,n);
	printf("the number after(%d) rotation is %x\n",n,x);
	return 0;
}

