#include <stdio.h>
# define size 4
int main()
{ int z[size]={0,0,0,0},a,b,f=0,r=-1,i;  clrscr();  abc:
printf("\nChoose any option \n1) Insert 2) Delete 3) Show 4) Exit");
scanf("%d",&a);
switch(a)
{
case 1:
b=0;
for(i=0;i<size;i++)
{ if(z[i]!=0) { b++;}}
if(b==size)
{ printf("Queue is full");   }
else
{ r=((r+1)%size);
printf("Enter number : ");
scanf("%d",&z[r]);
printf("Element inserted sucessfully\n"); }   break;
case 2:
b=0;
for(i=0;i<size;i++)
{ if(z[i]!=0) { b++;} }
if(b==0)
{ printf("Queue underflow");   }
else
{ z[f]=0;  f=((f+1)%size);  }      break;
case 3:
b=0;
for(i=0;i<size;i++)
{ if(z[i]!=0) { b++;} }
if(b==0)
{ printf("Queue underflow");   }
else
{  if(r>f)
{ for(i=f;i<=r;i++)
{  printf("%d\n",z[i]); } }
else
{
for(i=f;i<size;i++)
{  printf("%d\n",z[i]); }
for(i=0;i<=r;i++)
{ printf("%d\n",z[i]); }        } } break;
case 4:
exit();   }
goto abc;
}

