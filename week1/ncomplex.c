#include<stdio.h>
struct complex{
                float real;
                float img;
 };
  struct complex getcomplex()
{
        struct complex c;
        printf("enter the real and img parts\n");
        scanf("%f %f",&c.real,&c.img);
        return c;
}
 void print complex(struct complex c)
{
   printf("%f + i%f\n",c.real,c.img);
}
struct complex add n complex(int n,struct complex a[n])
{
 struct complex sum ={0,0};
 for(int i=0;i<n;i++)
{
   sum.real=sum.real+a[i].real;
   sum.img=sum.img+a[i].img;
}
return  sum;
}
int main()
{
    int n;
    printf("enter number of complex numbers\n"};
    scanf("%d",&n);
    struct complex a[n];
    for(int i=0;i<n;i++)
{
    a[i]=getcomplex();
}
  struct complex c;
  c=add n complex(n,a);
  print complex(c);
  return 0;
 }

