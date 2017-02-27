#include<stdio.h>
struct complex{
             float real;
             float img;
};
struct complex add(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.img=a.img+b.img;
return c;
}
int main()
{
struct complex a,b,c;
printf("enter the real value of a =");
scanf("%f",&a.real);
printf("enter img value of a =");
scanf("%f",&a.img);
printf("enter the real value of b =");
scanf("%f",&b.real);
printf("enter the img value of b =");
scanf("%f",&b.img);
c=add(a,b);
printf("sum of the two complex numbers = %f + i%f\n",c.real,c.img);
return 0;
}
