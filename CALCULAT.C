#include<stdio.h>
typedef struct list
{ int n;
struct list *l,*r; } d;
void IN(d *t)
{         if(t!=NULL)
{         IN(t->l);
	printf("%d ",t->n);
	IN(t->r);                }}
void PRE(d *t)
{         if(t!=NULL)
{         printf("%d ",t->n);
	PRE(t->l);
	PRE(t->r);                }}
void POST(d *t)
{         if(t!=NULL)
{         POST(t->l);
	POST(t->r);
	printf("%d ",t->n);       }}
void  main()
{  int a,c=0,i;     d *t,*h,*s;         clrscr();
printf("Enter number of nodes : ");
scanf("%d",&a);
h=(d*)malloc(sizeof(d));
printf("Enter root node : ");
scanf("%d",&h->n);
h->l=h->r=NULL;
for(i=0;i<a-1;i++)
{ s=(d*)malloc(sizeof(d));
printf("Enter node : ");
scanf("%d",&s->n);
s->l=s->r=NULL;      t=h;
while(c==0)
{ if(s->n>t->n && t->r!=NULL)  t=t->r;
  if(s->n>t->n && t->r==NULL)
{   t->r=s;     printf("%d is the right child of %d\n" ,s->n,t->n);  goto abc; }
  if(s->n<t->n && t->l!=NULL)  t=t->l;
  if(s->n<t->n && t->l==NULL)
{   t->l=s;     printf("%d is the left child of %d\n" ,s->n,t->n);  goto abc;  } }
abc:
}
printf("INOERER : ");IN(h);                 printf("\n");
printf("PREORDER : ");PRE(h);               printf("\n");
printf("POSTORDER : ");POST(h);             printf("\n");
getch();
}