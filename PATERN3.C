#include<stdio.h>
main()
{  int i,j,a,b; char c;  clrscr();
printf("Enter number of rows : ");
scanf("%d",&a);     c='A';
for(i=a;i>=1;i--)
{    for(j=i;j>=1;j--)
{  printf("%c",c);   }  printf("\n"); c++; }
getch();
}