#include<stdio.h>
int add(int a[],int n)
{
int i,sum;
sum=0;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
return sum;
}
int main()
{
int n,i,sum;
int a[10];
printf("enter number of elements \n");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sum=add(a,n);
printf("sum=%d\n",sum);
}

