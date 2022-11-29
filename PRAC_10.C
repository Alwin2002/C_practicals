#include<stdio.h>
void s(int *i,int *j)
{    int t=*i;
     *i=*j;
     *j=t;            }
void q(int a[],int l,int h,int i)
{   if(l<h)
{   int m=p(a,l,h,i);
    q(a,l,m-1,i);
    q(a,m+1,h,i);       }}
p(int a[],int l,int h,int i)
{   for(i=l;i<=h;i++)
    if(a[h]>=a[i])
{   s(&a[l],&a[i]);
    l++;               }
    return (l-1);      }
void main()
{  int a[12],b,c;       clrscr();
printf("Enter number of elements to sort :  ");
scanf("%d",&b);
printf("Enter %d elements\n",b);
for(c=0;c<b;c++)
scanf("%d",&a[c]);
q(a,0,b-1,c);
printf("Sorted array ");
for(c=0;c<b;c++)
printf("\n%d",a[c]);
getch();
}

