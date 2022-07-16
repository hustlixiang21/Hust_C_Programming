#include <stdio.h>
#include "stdlib.h"
struct linklist
        {
    char c;
    struct linklist *next;
        };
struct linklist*minimum(struct linklist **headp,int n,char c);
int main()
{
    struct linklist *head,*tail,*prior,*current,*p,*other,*after,*p1;
    char b;
    int i=1,j;
    head=(struct linklist*) malloc(sizeof (struct linklist));
    head->c=getchar();
    tail=head;
    while(tail->c!='\n'&&tail->c!=' '&&tail->c!='\t')
    {
        tail->next=(struct linklist*) malloc(sizeof (struct linklist));
        tail=tail->next;
        tail->c=getchar();
        i++;
    }
    tail->next=NULL;
    b=getchar();
    prior=head;
    current=head;
    for(j=0;current->c!=b&&j<i-1;j++)
    {
        prior=current;
        current=current->next;
    }
    if(current->next==NULL)
    {
        p=minimum(&head,i,b);
        other=(struct linklist*) malloc(sizeof (struct linklist));
        other->c=b;
        after=p->next;
        other->next=after;
        p->next=other;
        p1=head;
        while(p1)
        {
            putchar(p1->c);
            p1=p1->next;
        }
        goto down;
    }
    if(current==head)
    {
        head=current->next;
    }
    else
    {
        prior->next=current->next;
    }
    free(current);
    p=head;
    while(p)
    {
        putchar(p->c);
        p=p->next;
    }
    down:
    return 0;
}
struct linklist*minimum(struct linklist **headp,int n,char c)
{
    struct linklist *p,*current;
    current=*headp;
    p=*headp;
    int min;
    min=c-current->c;
    for(int i=0;i<n-1;i++)
    {
        if(min>(c-current->next->c))
        {
            min=c-current->next->c;
            p=current->next;
        }
        current=current->next;
    }
    return p;
}