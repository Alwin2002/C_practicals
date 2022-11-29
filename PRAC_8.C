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
void DEL(tree *t)
{ tree *s=t;
if(t->r==NULL && t->l==NULL)
{ t=t->p;
if(t->r==s)   t->r=NULL;
if(t->l==s)   t->l=NULL;
free(s);
}       else
if(t->r!=NULL)
{
for(t=t->r;t->l!=NULL;)
t=t->l;
s->n=t->n;
DEL(t);
}       else
{
for(t=t->l;t->r!=NULL;)
t=t->r;
s->n=t->n;
DEL(t);     }   }
void IN(tree *t)
{ if(t!=NULL)
{  IN(t->l);
printf("%d ",t->n);
IN(t->r);
}}
void main()
{ tree *s,*h,*t;  int a,b;    clrscr();
printf("Enter number of nodes : ");
scanf("%d",&a);
h=get();
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
printf("\nEnter element to delete : ");
scanf("%d",&a);
for(t=h;t!=NULL;)
{
b=t->n;
if(a==b)    s=t;
if(a>=b)    t=t->r;
if(a<=b)    t=t->l;
}
DEL(s);
printf("\n");IN(h);
getch();
}