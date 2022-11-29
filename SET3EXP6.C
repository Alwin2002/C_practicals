#include<stdio.h>
int main()
{    int a,b,c,d,r,t=0;
printf("Enter any integer: ");
scanf("%d",&a);
b=a%10;
while(a!=0)
{
r=a%10;
t=t*10+r;
a /= 10; }
d=t%10;
printf("\nSum of first and last number is %d",d+b);
getch();
}
