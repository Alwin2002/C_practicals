#include<stdio.h>
main()
{  int i,j,a,b; char c;  clrscr();
printf("Enter number of rows : ");
scanf("%d",&a);
for(i=a;i>=1;i--)
{  c='A';  for(j=i;j>=1;j--,c++)
{  printf("%c",c);   }  printf("\n"); }
getch();
}