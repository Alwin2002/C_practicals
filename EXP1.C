#include<stdio.h>
void f(int a[])
{
int i;
for(i=0;i<5;i++)
printf("%d",a[i]);
}
int main()
{ int a[]={1,2,3,4,5};
f(a);
}
