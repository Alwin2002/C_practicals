#include<stdio.h>
int main()
{
int m; clrscr();
printf("Enter your marks: ");
scanf("%d",&m);
if(m>79 &&  m<101) { printf("Grade = Distinction");   }
if(m>59 && m<80) {  printf("Grade= First Class"); }
if(m>39 && m<60)  { printf("Grade= Second Class");  }
if(m<40 && m<-1)       {  printf("Grade= Fail");  }
if(m>100 && m<0) { printf(" Enter valid marks"); }
getch();
}
