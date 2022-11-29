#include<stdio.h>
int main()
{  int a,b;
float d;   clrscr();
printf("\n\nEnter any integer: ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{d+=1/(float)b; }
printf("Sum of series = %2.2f ",d);
getch();
}




