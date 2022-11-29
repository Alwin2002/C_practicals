#include<stdio.h>
int main()
{ float b,d,h,m,p;
printf("Enter your basic ");
scanf("%f",&b);
d=(10*b)/100);
h=(7.5*b)/100;
m=300;
p=(12.5*b)/100;
g=b+d+h+m;
n=g-p;
printf(" Da=%2.1f",d);
printf(" Hra=%2.1f",h);
printf(" Pf=%2.1f",p);
printf(" Gross=%2.1f",g);
printf(" Nt=%2.1f",n);
getch();
}

