#include<stdio.h>
int main()
{  int a,b,c=0;
printf("Enter any integer: ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{   c+=b*b; }
printf("Sum of series = %d ",c);
getch();
return 0;
}
