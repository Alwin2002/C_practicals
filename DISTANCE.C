#include<stdio.h>
int main()
{
char z[20],s[6]; int i,a,r,n;   clrscr();
printf("How many elements in the stack : ");
scanf("%d",&a);
printf("Insert elements");
for(i=0;i<a;i++)
{ scanf("%d",&z[i]); }
n=strlen(z);
printf("\nEnter element to be inserted : ");
scanf("%d",&r);
if(n==20)
{
printf("\nStack is full");
}
else
{
z[n]=r;
}
for(i=0;i<strlen(z);i++)
{ printf("\n%d",z[i]); }
getch();
 }



