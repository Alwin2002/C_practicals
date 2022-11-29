#include<stdio.h>
main()
{ int a,j,c[23],i,m,t;
printf("How many numbers to sort : ");
scanf("%d",&a);
for(i=0;i<a;i++)
scanf("%d",&c[i]);
for(i=0;i<a;i++)
{
m=i;
for(j=i;j<a;j++)
if(c[m]>c[j])
m=j;
if(c[i]!=c[m])
{ t=c[m];
c[m]=c[i];
c[i]=t; }
}
for(i=0;i<a;i++)
printf("%d ",c[i]);
getch();
}