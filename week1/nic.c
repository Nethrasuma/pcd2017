#include<stdio.h>
int add(int a,int b,int c)
{
int m;
m=a+b+c;
return m;
}
int main()
{
int a,b,c,m;
m=a+b+c;
printf("enter three numbers,\n");
scanf("%d %d %d",&a,&b,&c);
printf("result is:%d",m);
return 0;
}
