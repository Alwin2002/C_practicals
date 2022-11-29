#include<stdio.h>
struct {  char s[20]; int t; } j,m,o;

void a(char s)   {  j.t++;   j.s[j.t]=s;  }
void b(char s)   {  o.t++;   o.s[o.t]=s;         m.t++;  }
void c()         {  o.t--;   m.s[m.t]=NULL;      m.t--;  }

void main()
{  int i,k;     char z[20];    clrscr();
j.t=o.t=m.t=-1;
printf("Enter your infix expression : ");
scanf("%s",z);
printf("Input    Stack    Output\n");
for(i=0;z[i]!=NULL;i++)
{
printf("%-9c",z[i]);

if(z[i]=='(')                                     b(4);   else
if(z[i]=='+'||z[i]=='-')                          b(1);   else
if(z[i]=='*'||z[i]=='/'||z[i]=='%')               b(2);   else
if(z[i]=='^')                                     b(3);   else
if(z[i]==')')                                     b(0);   else  {  a(z[i]); goto ad; }

for(k=o.t; o.s[k-1]>=o.s[k] && o.t>0 && m.s[k-1]!='('  ;k--)

{  a(m.s[k-1]);   o.s[k-1]=o.s[k];  c();   }

if(z[i]==')')    {   c();c();  }
else              m.s[m.t]=z[i];          ad:

if(m.t==-1)     printf("         ");  else     printf("%-9s",m.s);
if(j.t==-1)     printf("\n");         else     printf("%-9s\n",j.s);  }

for(k=m.t;k>-1;k--)    a(m.s[k]);
printf("Postfix expression = %s",j.s);
getch();      }