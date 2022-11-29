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
printf("Choose any option\n1)Insert head node\n2)Insert node at end\n3)Insert node at desired position\n4)Delete head node\n5)Delete node before specified position\n6)Delete node after specified position\n7)Show list\n8)Exit");
abc:
printf("\nChoose any option (1-8) ");
scanf("%d",&c);
switch(c)
case 1:     {
if(h==NULL) {   h=get(&b,s);       }
else  {   t=get(&b,s);
t->next=h;     h=t;      }
break;
case 2:
for(t=h;t->next!=NULL;t=t->next)  {}
t->next=get(&b,t);
break;
case 3:
for(t=h;t->next!=NULL;t=t->next)  {}
t->next=get(&b,t);
for(i=0;i<b;i++)    {
for(t=h ; t->next!=NULL ; t=t->next )
{   if(t->n>t->next->n)
{ c=t->n;
t->n=t->next->n;
t->next->n=c; }    } }
break;
case 4:
if(h==NULL)
{ printf("List is empty"); }  else {
t=h;
h=t->next;         b--;
free(t);                                                  }
break;
case 5:
printf("Enter position: " );
scanf("%d",&c);
for(t=h,i=1;i<c-2;i++,t=t->next) {}    del(&b,s,t);   break;
case 6:
printf("Enter position: " );
scanf("%d",&c);
for(t=h,i=1;i<c;i++,t=t->next)   {}    del(&b,s,t);      break;
case 7:
printf("Linked List");
for(t=h;t!=NULL;t=t->next)   printf("\n%d",t->n);   printf("\n");
break;
case 8:
exit(0);     }
goto abc;            }
