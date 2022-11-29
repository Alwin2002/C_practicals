#include<stdio.h>
int main()
{ int a,b,c;   clrscr();
printf("Enter any integer: ");
scanf("%d",&a);
b=a%10;
c=b%2;
if(c==0)
printf("Last digit of integer is even");
else
 printf("Last digit of integer is odd");
getch();
}

