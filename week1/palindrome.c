#include<stdio.h>
int palindrome(int num)
{
	int reversenum=0;
	while(num>0)
	{
		reversenum=(reversenum*10)+(num%10);
		num=num/10;
	}
	return reversenum;
}
int main()
{
	int num,reversenum;
	printf("enter the number:");
	scanf("%d",&num);
	reversenum =palindrome(num);
	if(num==reversenum)
		printf("%d is a palindrome",num);
	else
		printf("%d is not a palindrome",num);
}
