#include<stdio.h>
#include<string.h>
main()
{ int a[20]={1,2,3,4,5},s,i,r,g,n;
printf("Enter the numberto be deleted");
scanf("%d",&s);
n=strlen(a);
for(i=0;i<n;i++)
{ if(s==a[i]) {r=i;} }
for(i=r;i<n-1;i++)
{ a[i]=a[i+1]; }
for(i=0;i<n-1;i++)
{ printf("%d\n",a[i]); }
getch();
 }

