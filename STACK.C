#include<stdio.h>
#include<string.h>
#define si 5
main()
{ char z[si],s[6]; int i,a,r,n;   clrscr();           sd:
printf("How many elements in the stack : ");
scanf("%d",&a);
if(a>si)
{ printf("Only %d elements can be added to stack\n",si); goto sd; }
else    {
printf("Insert elements");
for(i=0;i<a;i++)
{ scanf("%d",&z[i]); }   }
abc:
printf("CHOOSE ANY OPTION \nPUSH POP SHOW EXIT\n");
scanf("%s",s);
if(strcmp(s,"PUSH")==0)
{ n=strlen(z);
if(n>=si)
{ printf("Stack is full\n"); }
else
{  printf("Enter element to be inserted : ");
scanf("%d",&z[n]);        }                                      }
if(strcmp(s,"POP")==0)   {
if(strlen(z)==0) { printf("Stack is empty\n"); }
else { z[strlen(z)-1]='\0'; } }
if(strcmp(s,"SHOW")==0)   {
if(strlen(z)==0) { printf("Stack is empty\n"); }
else { for(i=0;i<strlen(z);i++)
printf("%d\n",z[i]); } }
if(strcmp(s,"EXIT")==0) {goto as;}
goto abc;
as:
}

