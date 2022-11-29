#include<stdio.h>
int main()
{  float a;
clrscr();
printf("Enter disatnce in kilometer :");
scanf("%f",&a);
printf("Distance in feet is %0.2f ",3280.84*a);
printf("\nDistance in meter is %0.2f ",1000*a);
printf("\nDistance in inches is %0.2f ",39370.1*a);
printf("\nDistance in centimeter is %0.2f ",100000*a);
getch();
}

