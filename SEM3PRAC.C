#include<stdio.h>
#include<string.h>
main()
{ int a,b,i,n,w,o,s,t,k,m;
char z[20]; clrscr();
printf("How many numbers you want to insert : ");
scanf("%d",&w);
printf("Enter array");
for(i=0;i<w;i++)
 {   scanf("%d",&z[i]);  }
as:
printf("Choose any option \n1 Insert \n2 Delete\n3 Search \n4 Display\n5 Exit ");
scanf("%d",&o);
switch(o) {
case 1:
n=strlen(z);
printf("Enter number to be inserted : ");
scanf("%d",&z[n]);
printf("Which position : ");
scanf("%d",&b);
for(i=n;i>=b;--i)
{ m=z[i];
 z[i]=z[i-1];
 z[i-1]=m;    }	 printf("Element %d inserted in the array\n",z[b-1]); break;
case 2:
printf("Enter the number to be deleted : ");
scanf("%d",&s);
n=strlen(z);
for(i=0;i<n;i++)
{ if(s==z[i]) { t=i; } }
for(i=t;i<n;i++)
{  z[i]=z[i+1];      }
printf("Number %d deleted from the array\n",s);
break;
case 3:
printf("Enter number to be search : ");
scanf("%d",&a);
n=strlen(z);
for(i=0;i<n;i++)
{ if(a==z[i]) { k=1; } }
if(k==1)    { printf("Element is in the array\n"); }
else { printf("Element is not there in array\n"); } break;
case 4:
printf("Final array\n");
for(i=0;i<strlen(z);i++)
{ printf("%d\n",z[i]); }
break;
case 5:
goto abc;   }
goto as;
abc:
}

