#include<stdio.h>
int main()
{
int a,b,c;  clrscr():
printf("Enter three numbers: ");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c) printf("%d is maximum",a);
if(a<b && b>c) printf("%d is maximum",b);
if(c>b && a<c) printf("%d is maximum",c);
if(a==b==c) printf("All numbers are same");
getch();
}