#include<stdio.h>
int  main()
{   int a[4]={4,3,2,1};
int i,d,b=3,q;          clrscr();
for(q=0;q<4;q++)
{
for(i=0;i<b;i++)
{
if(a[i]>a[i+1])
{
d=a[i];
a[i]=a[i+1];
a[i+1]=d;  } } b--;  }
for(i=0;i<4;i++)
{ printf("%d\n",a[i]); }
getch();
}

