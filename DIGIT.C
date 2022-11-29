#include<stdio.h>
int main()
{ char a;
printf("Enter any character : ");
scanf("%c",&a);
if(a>='a' && a<='z')
printf("Entered character is lowercase alphabet");
else if(a>='A' && a<='Z') printf("Entered character is Uppercase alphabet");
else if(a>=0 && a<=9); printf("Entered character is number");
else
 printf("Entered character is special character");
getch();
}
