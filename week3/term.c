#include<stdio.h>
int compute_nextterm(int previousterm)
{
	int nextterm;
	nextterm=previousterm+1;
	return nextterm;
}
int main()
{
	int term,previousterm;
	printf("enter previous term");
	scanf("%d",&previousterm);
	term=compute_nextterm(previousterm);
	printf("nextterm is:%d",term);
	return 0;
}
