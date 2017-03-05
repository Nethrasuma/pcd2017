#include<stdio.h>
   struct complex{
     float real;
      float img;
};
struct complex  add(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.img=a.img+b.img;
return c;
}
 struct complex getcomplex()
{
printf("enter the real and img parts\n");
struct complex c;
scanf("%f %f"&c.real,&c.img);
return c;
}
int main()
{
struct complex a=getcomplex();
struct complex b=getcomplex();
}
void print complex(struct complex d)
{
printf("%f + i%f\n",d.real,d.img);
}
