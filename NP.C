#include<stdio.h>
int main()
{   int a;      clrscr();
printf("Enter a number : ");
scanf(" %d",&a);
if(a<0) printf("You entered negative number ");
if(a==0)  printf("Number is zero ");
if(a>0)  printf("You entered positive number " );
getch();
}
