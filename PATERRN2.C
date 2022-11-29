#include<stdio.h>
main()
{ int a,i,j;       clrscr();
printf("Enter number of rows : ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{ for(j=1;j<=i;j++)
{   printf("%d",i); }  printf("\n"); }
getch();
}