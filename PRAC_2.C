#include<stdio.h>
#include<string.h>
#define si 5
main()
{ char s[4]; int z[si],i,a,r,t=-1;   clrscr();
abc:
printf("CHOOSE ANY OPTION \nPUSH POP SHOW EXIT\n");
scanf("%s",s);
if(strcmp(s,"PUSH")==0)
{
if(t>=si)
{ printf("Stack is full\n"); }
else
{ t++;  printf("Enter element to be inserted : ");
scanf("%d",&z[t]);        }                                      }
if(strcmp(s,"POP")==0)
{
if(t==-1) { printf("Stack is empty\n"); }
else { t--; } }
if(strcmp(s,"SHOW")==0)   {
if(t==-1) { printf("Stack is empty\n"); }
else { for(i=0;i<=t;i++)
printf("%d\n",z[i]); } }
if(strcmp(s,"EXIT")==0) {exit();}
goto abc;
}

