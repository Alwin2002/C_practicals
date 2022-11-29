#include<stdio.h>
int main()
{  int a,b,c,d;                    clrscr();

printf("Enter number of rows : ");
scanf("%d",&a);
for(c=1;c<=a;c++)
{
for(d=1;d<=a-c;d++)
{       printf(" "); }
for(d=1;d<=c;d++)
{ printf("%2d",c); } printf("\n"); }
getch();
}
