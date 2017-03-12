 #include<stdio.h>
 #include<math.h>
 struct complex
 {
	float real;
	float imaginary;
 };
 int findroots(float a,float b,float c,struct complex*r1,struct complex*r2)
 {
        if(a==0)
        {
                return -1; 
        }
        float d=b*b-4*a*c;
        if(d==0)
        {
                (*r1).real=-b/(2*a);
                (*r1).imaginary=0;
                (*r2).real=-b/(2*a);
                (*r2).imaginary=0;
                return 0;
        }
        if(d>0)
        {
                (*r1).real=(-b+sqrt(d))/(2*a);
                (*r1).imaginary=0;
                (*r2).real=(-b-sqrt(d))/(2*a);
                (*r2).imaginary=0;
                return 1;
        }
        if(d<0)
        {
                (*r1).real= -b/(2*a);
                (*r1).imaginary=(sqrt(-d))/(2*a);
                (*r2).imaginary=(-sqrt(-d))/(2*a);
                return 2;
        }
 }
 int main()
 {
        float a,b,c;
        struct complex r1,r2;
        printf("enter the coefficients of x^2,x and constants");
        scanf("%f %f %f",&a,&b,&c);
        int n=findroots(a,b,c,&r1,&r2);
        switch(n)
        {
                case 0:
                        printf("roots are real and equal\n");
                        break;
                case 1:
                        printf("roots are real and distinct\n");
                        break;
                case 2:
                        printf("roots are imaginary\n");
                        break;
                case -1:
                        printf("not a quadratic equation");
                        break;
                        default:
                        break;
        }
        printf("the roots of the quadratic equation are %f + i%f and %f - i%f",r1.real,r1.imaginary,r2.real,r2.imaginary);
        return 0;
 }
