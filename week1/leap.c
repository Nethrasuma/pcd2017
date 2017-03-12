#include<stdio.h>
int is_leap(int year)
{
	if(year%400==0)
	{
		return 0;
	}
	else if(year%100==0)
	{
		return 1;
	}
	else if(year%4==0)
	{
		return 2;
	}
	return -1;
}
int main()
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	int r=is_leap(year);
	switch(r)
	{
		case -1:
			printf("%d is not a leap year\n",year);
			break;
		case 0:
			printf("%d is a quadreminal leap year\n",year);
			break;
		case 1:
			printf("%d is a century year and not a leap year\n",year);
			break;
		case 2:
			printf("%d is a leap year\n",year);
			break;
			default:
			break;
	}
	return 0;
}
