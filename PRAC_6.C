#include<stdio.h>
#include<stdlib.h>
typedef struct list
{ int n;
struct list *next;
struct list *prev; } node;
void main()
{ node *t,*h;  int i,b;       clrscr();
printf("How many nodes do you want to create : ");
scanf("%d",&b);
printf("Enter %d nodes\n",b);
h=t=(node*)malloc(sizeof(node));
h->prev=NULL;
for(i=0;i<b;i++)
{ scanf("%d",&t->n);        if(i==(b-1))  break;
t->next=(node*)malloc(sizeof(node));  t->next->prev=t; t=t->next;   }
t->next=NULL;
printf("Choose any option\n1)Insert head node\n2)Insert node at end\n3)Delete head node\n4)Delete node before specified position\n5)Show list\n6)Exit");
abc:
printf("\nChoose any option (1-6) ");
scanf("%d",&b);
switch(b)
case 1:     {
h->prev=t=(node*)malloc(sizeof(node));
t->prev=NULL;
printf("Enter value : ");
scanf("%d",&t->n);
t->next=h;
h=t;   break;
case 2:
for(t=h; t->next!=NULL ; t=t->next ) {}
t->next=(node*)malloc(sizeof(node));
t->next->prev=t;
printf("Enter value : ");
scanf("%d",&t->next->n);
t->next->next=NULL; break;
case 3:
if(h==NULL)             { printf("List is empty"); }  else {
h=h->next;
free(h->prev);
h->prev=NULL;      }break;
case 4:
printf("Enter position: " );
scanf("%d",&b);
for(t=h,i=1;i<b-2;i++,t=t->next)   {}
t->next=t->next->next;
free(t->next->prev);
t->next->prev=t;
break;
case 5:
printf("Linked List");
for(t=h;t!=NULL;t=t->next)   printf("\n%d",t->n);   printf("\n"); break;
case 6:
exit(0);     }
goto abc;            }
