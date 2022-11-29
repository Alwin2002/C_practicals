#include<stdio.h>
main()
{  int a,i,j;  clrscr();
printf("Enter number of rows : ");
scanf("%d",&a);
for(i=a;i>=1;i--)
{  for(j=i;j>=1;j--)
{  printf("%d",i); } printf("\n"); }
getch();
}