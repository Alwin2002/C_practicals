#include<stdio.h>
int main()
{ int r,m,n;
printf("Enter any integer: ");
scanf("%d",&n);
for(r=n,m=2;m<n;m++)
{  r*=m }
printf("%d",r);
getch();
}