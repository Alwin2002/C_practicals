#include<stdio.h>
int main()
{  int a,b=0;      clrscr();
printf("Enter any integer: ");
scanf("%d",&a);
b=a;
while(a>1)
{
a=a%10;
printf("%d",a);
a=b;
a=a/10;
}
getch();
}

