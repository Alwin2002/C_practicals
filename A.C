#include<stdio.h>
#define size 4
main()
{  int z[size],a,f=0,r=-1,i;  clrscr();  abc:
printf("\nChoose any option \n1) Insert 2) Delete 3) Show 4) Exit");
scanf("%d",&a);
switch(a)
{
case 1:
if(r==(size-1))
{ printf("Queue is full");   }
else
{ r++;
printf("Enter number : ");
scanf("%d",&z[r]);
printf("Element inserted sucessfully\n"); }   break;
case 2:
if(f>r)
{ printf("Queue underflow");   }
else
{ f++; }      break;
case 3:
if(f>r)
{    printf("Queue underflow");      }
else {    printf("Queue\n");
for(i=f;i<=r;i++)
{  printf("%d\n",z[i]); } } break;
case 4:
exit();   }
goto abc;
}


