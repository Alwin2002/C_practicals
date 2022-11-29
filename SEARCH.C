#include<stdio.h>
#include<string.h>
main()
{ int z[7]={9,8,7,6,5},a,b,i,n=5,k=0;  clrscr();
printf("Array\n");
for(i=0;i<n;i++)
{ printf("%d\n",z[i]); }
printf("Enter number to be search : ");
scanf("%d",&a);
for(i=0;i<n;i++)
{ if(a==z[i]) { k=1; } }
if(k==1)    { printf("Element is in the array"); }
else { printf("Element is not there in array"); }
getch();
}
