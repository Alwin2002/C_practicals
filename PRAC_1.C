#include<stdio.h>
main()
{ int a,i,b=0,t=-1,c,z[20]; clrscr();
as:
printf("Choose any option \n1) Insert 2) Delete 3) Search 4) Display 5) Exit ");
scanf("%d",&c);
switch(c) {
case 1:
t++;
printf("Which position : ");
scanf("%d",&b);
for(i=t;i>=b;--i)
{ z[i]=z[i-1];  }
printf("Enter number to be inserted : ");
scanf("%d",&z[b-1]);
printf("Element %d inserted in the array\n",z[b-1]); break;
case 2:
printf("Enter the number to be deleted : ");
scanf("%d",&c);
for(i=0;i<=t;i++)
{ if(c==z[i]) c=i;  }
for(i=c;i<t;i++)
z[i]=z[i+1];        t--;
break;
case 3:
printf("Enter number to be search : ");
scanf("%d",&c);
for(i=0;i<=t;i++)
{ if(c==z[i]) b=4; }
if(b==4)    printf("Element is in the array\n");
else        printf("Element is not there in array\n");  break;
case 4:
printf("Final array\n");
for(i=0;i<=t;i++)
{ printf("%d\n",z[i]); }
break;
case 5:
exit();   }
goto as;   }

