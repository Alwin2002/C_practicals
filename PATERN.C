#include<stdio.h>
main()
{ int a,i,j,b,g;      clrscr();
printf("Enter number of rows : ");
scanf("%d",&a);    b=a;   g=1;
for(i=1;i<=a;i++,b--,g++)
{ for(j=1;j<g;j++)   {   printf(" ");    }
for(j=1;j<=b;j++)   {  printf("%2d",j); } printf("\n"); }
getch();
}