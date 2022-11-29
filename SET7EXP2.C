#include<stdio.h>
main()
{  int i, a[10],b[10],c[10],u=0,o=0,j;     clrscr();
printf("Enter 10 numbers\n");
for(i=0;i<10;i++)
{   scanf("%d",&a[i]);
if(a[i]%2==0) {   c[u]=a[i]; u++; }
else  {   b[o]=a[i];  o++; }   }
printf("Even numbers\n");
for(j=0;j<u;j++)
{  printf("%d\n",c[j]); }
printf("Odd numbers\n");

for(j=0;j<o;j++)
{ printf("%d\n",b[j]); }
getch();    }