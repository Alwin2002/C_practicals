#include<stdio.h>
int main()
{ float basic,Da,Hra,Ma,Pf,Gross,Nt;
printf("Enter basic: ");
scanf("%d",&basic);
Da=10/100*basic;
Hra=7.5/100*basic;
Ma=300.0;
Pf=12.5/100*basic;
Gross=basic+Da+Hra+Ma;
Nt=Gross-Pf;
printf("Basic = %2.2f\nHra = %2.2f\nPf = %2.2f\nGross = %2.2f\nNt = %2.2f",basic,Hra,Pf,Gross,Nt);
getch();
}