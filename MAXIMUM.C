#include<stdio.h>
int main()
{ int a;    clrscr();
printf("Enter consuption units: ");
scanf("%d",&a);
if(a>-1 && a<201) printf("Rate of charge=%d",a*0.5);
if(a>200 && a<401) printf("Rate of charge=%d",a*0.65 + 100);
if(a>400 && a<601) printf("Rate of charge=%d",a*0.8 + 200);
if(a>600) printf("Rate of charge=%d",a + 390);
getch();
}