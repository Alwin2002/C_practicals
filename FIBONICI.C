#include<stdio.h>
fb(int a,int c)
{ if(a==0||a==1) { c[a]=a; a--; }

int main()
{  int a,b,c[40];
printf("Enter the integer : ");
scanf("%d",&a);
for(b=0;b<a;b++)
{ if(b==0||b==1)  { c[b]=b; }
else  {   c[b]=c[b-1]+c[b-2];}
printf("%d\n",c[b]); }
getch();
}