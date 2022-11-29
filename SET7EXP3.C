#include<stdio.h>
main()
{  int a[90],m,i,j,k;  clrscr();
printf("Please enter number of elements\n");
scanf("%d",&k);
printf("Enter %d numbers",k);
for(i=0;i<k;i++)
{  scanf("%d",&a[i]); } m=a[0];
for(i=1;i<k;i++)
{ if(a[i]>m)  m=a[i];  }
printf("Maximum = %d",m);
getch();
}