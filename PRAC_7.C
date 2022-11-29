#include<stdio.h>
#include<stdlib.h>
typedef struct list
{ int n;
struct list *next; } node;
get(int *b,node *s)
{  s=(node*)malloc(sizeof(node));
printf("Enter value : ");
scanf("%d",&s->n);
s->next=NULL;     *b= *b+1;
 return(s);       }
del(int *b,node *s,node *t)
{ s=t->next;               *b=*b-1;
t->next=s->next;
free(s);     }
void main()
{ node *t,*h=NULL,*s;  int i,b=0,c;       clrscr();
printf("Choose any option\n1)Insert node at end\n2)Delete node before specified position\n3)Insert head node\n4)Delete node after specified position\n5)Show list\n6)Exit");
abc:
printf("\nChoose any option (1-6) ");
scanf("%d",&c);
switch(c)          {
case 3:
if(h==NULL)
{
h=get(&b,s);                 h->next=h;  }
else  {
s=get(&b,s);
for(t=h;t->next!=h;t=t->next)  {}
t->next=s;
s->next=h;
h=s;  }   break;
case 1:
for(t=h;t->next!=h;t=t->next)  {}
t->next=get(&b,t);
t->next->next=h;          break;
case 2:
printf("Enter position: " );
scanf("%d",&c);
if(c>2)
{
for(t=h,i=1;i<c-2;i++,t=t->next) {}    del(&b,s,t);
}
else
{  t=h;
h=h->next;
h->next=h;  }
break;
case 4:
printf("Enter position: " );
scanf("%d",&c);
for(t=h,i=1;i<c;i++,t=t->next)   {}    del(&b,s,t);      break;
case 5:
printf("Linked List");
for(t=h;t->next!=h;t=t->next)  { printf("\n%d",t->n); }
printf("\n%d\n",t->n);
break;
case 6:
exit(0);     }
goto abc;            }