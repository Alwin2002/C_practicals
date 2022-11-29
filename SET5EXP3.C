#include<stdio.h>
int main()
{    int a,b,c,r,m=1;
float s=0.0; clrscr();
printf("Enter any integer: ");
scanf("%d",&a);

for(c=1;c<=a;c++)
{
for(b=1;b<=c;b++)
{  m=m*b; }
s+=1/(float)m;
}
printf("Sum of series: %2.2f",s);
getch();
}
