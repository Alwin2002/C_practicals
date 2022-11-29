#include<stdio.h>
int main()
{ int a,b,c,s=0;  clrscr();
for(b=1;b<=5;b++)
{     printf("\nEnter marks of student %d",b);
s=0;
for(a=1;a<=3;a++)
{  scanf("\n%d",&c);
s=s+c; }
printf("Sum = %d \nAverage = %d",s,s/3);
getch();
}}

