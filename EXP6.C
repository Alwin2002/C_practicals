#include<stdio.h>
int main()
{ float a;
clrscr();
printf("Enter temprature in Fahrenheut :");
scanf("%f",&a);
printf("Temprature in Celsius : %0.2f ",(a-32)*5/9);
getch(); }
