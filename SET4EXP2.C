#include<stdio.h>
int main()
{    int a,b,c,s=0;
printf("Enter no of elements: ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
printf("Enter number: ");
scanf("%d",&c);
s=s+c; }
printf("Sum of given %d numbers is %d \nAverage of given %d is %d",a,s,a,s/a);
getch();
}
