#include<stdio.h>
#include<math.h>
int rev(int n)
{
	int reverse=0;
	while(n !=0)
	{
		int remainder=n%10;
		reverse =(reverse*10)+remainder;
		n=n/10;
	}
	return reverse;
}
int main()
{
	int reverse =0,remainder,n;
	printf("enter the number to be reversed\n");
	scanf("%d",&n);
	int d= rev(n);
	printf("the reverse of the number is %d\n",d);
	return 0;
}
