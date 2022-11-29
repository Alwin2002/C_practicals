#include<stdio.h>
#include<string.h>
void main()
{ char z[20],s[6]; int i,a,r,n;   clrscr();
printf("How many elements in the stack : ");
scanf("%d",&a);
printf("Insert elements");
for(i=0;i<a;i++)
{ scanf("%d",&z[i]); }
abc:
printf("CHOOSE ANY OPTION \nPUSH POP SHOW EXIT\n");
scanf("%s",s);
if(strcmp(s,"PUSH")==0)
{ n=strlen(z);
if(n==20)
{
printf("\nStack is full");
}
else
{
printf("Enter element to be inserted : ");
scanf("%d",&z[n]);
}                                      }
if(strcmp(s,"POP")==0)   {
if(strlen(z)==0) { printf("\nStack is empty"); }
else { z[strlen(z)-1]='\0'; } }
if(strcmp(s,"SHOW")==0)   {
if(strlen(z)==0) { printf("\nStack is empty"); }
else { for(i=0;i<strlen(z);i++)
printf("%d\n",z[i]); } }
if(strcmp(s,"EXIT")==0) {goto as;}
goto abc;
as:
}

