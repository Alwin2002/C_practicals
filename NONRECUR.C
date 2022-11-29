#include<stdio.h>
#include<malloc.h>
typedef struct list
{ int n;
struct list *r,*l,*p;  } tree;
get()
{ tree *s=(tree*)malloc(sizeof(tree));
printf("\nEnter node : ");
scanf("%d",&s->n);
s->l=s->r=s->p=NULL;
return s;
}
push(tree *c[],int *top,tree *t)
{
*top=*top+1;
c[*top]=(tree*)malloc(sizeof(tree));
c[*top]->r=t;
return (c[*top]->r);
}
void main()
{ tree *s,*h,*t,*c[12],*y[12],*u[12];  int a,b,top=-1,rear=-1,d=0;    clrscr();
printf("Enter number of nodes : ");
scanf("%d",&a);
h= get();
printf("%d is head node",h->n);
for(b=1;b<a;b++)
{
s=get();
for(t=h;t!=NULL;)   {
if(s->n>t->n && t->r!=NULL) t=t->r;
if(s->n>t->n && t->r==NULL)
{ printf("%d is right child of %d",s->n,t->n);  t->r=s;  s->p=t;  t=NULL;  }
if(s->n<t->n && t->l!=NULL) t=t->l;
if(s->n<t->n && t->l==NULL)
{ printf("%d is left child of %d",s->n,t->n);   t->l=s;  s->p=t; t=NULL;  }}}
printf("\nINORDER : ");
for(t=h;d==0;)
{
for(;t!=NULL;t=t->l)
push(c,&top,t);
if(top>-1)
{
t=c[top]->r;
printf(" %d",t->n);
t=t->r;
free(c[top]);
top--;
}
else d=1;
}
printf("\nPOSTORDER : ");
push(y,&top,h);
while(top!=-1)
{
t=push(u,&rear,y[top]->r);
top--;
if(t->l!=NULL)
push(y,&top,t->l);
if(t->r!=NULL)
push(y,&top,t->r);
}
for(t=u[rear]->r;rear!=-1;rear--)
{
t=u[rear]->r;
printf(" %d",t->n);
}
getch();
}