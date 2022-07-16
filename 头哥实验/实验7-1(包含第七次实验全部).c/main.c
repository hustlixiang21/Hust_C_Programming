#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct marklist
        {
    char name[10];
    int studynumber,english,math,physics,cprogramming;
    struct marklist*next;
        };
void input(struct marklist **headp,int n)/*创建链表读入数据的函数,此处使用双重指针目的是直接改变head指针所指向地址*/
{
    struct marklist *createhead,*tail;
    createhead=(struct marklist*) malloc(sizeof (struct marklist));
    scanf("%d%s%d%d%d%d",&createhead->studynumber,createhead->name,&createhead->english,&createhead->math,&createhead->physics,&createhead->cprogramming);
    tail=createhead;
    for(int i=0;i<n-1;i++)
    {
        tail->next=(struct marklist*) malloc(sizeof (struct marklist));
        tail=tail->next;
        scanf("%d%s%d%d%d%d",&tail->studynumber,tail->name,&tail->english,&tail->math,&tail->physics,&tail->cprogramming);
    }
    tail->next=NULL;
    *headp=createhead;
}
void output(struct marklist *headp)
{
    struct marklist *p=headp;
    while(p)
    {
        printf("%d %s %d %d %d %d\n",p->studynumber,p->name,p->english,p->math,p->physics,p->cprogramming);
        p=p->next;
    }
}
void revise(struct marklist *headp)
{
    struct marklist *p1=headp;
    int studynumber1,i;
    scanf("%d",&studynumber1);
    while(p1)
    {
        if(studynumber1==p1->studynumber)
        {
            scanf("%d",&i);
            if(i==0)
            {
                char afterrevise[10];
                scanf("%s",afterrevise);
                strcpy(p1->name,afterrevise);
            }
            else if(i==1)
            {
                scanf("%d",&p1->english);
            }
            else if(i==2)
            {
                scanf("%d",&p1->math);
            }
            else if(i==3)
            {
                scanf("%d",&p1->physics);
            }
            else if(i==4)
            {
                scanf("%d",&p1->cprogramming);
            }
            printf("%d %s %d %d %d %d\n",p1->studynumber,p1->name,p1->english,p1->math,p1->physics,p1->cprogramming);
        }
        p1=p1->next;
    }
}
void average(struct marklist *headp)
{
    float average;
    int sum;
    struct marklist *p2=headp;
    while(p2)
    {
        sum=0;
        sum+=p2->english;
        sum+=p2->math;
        sum+=p2->physics;
        sum+=p2->cprogramming;
        average=(float )sum/4;
        printf("%d %s %.2f\n",p2->studynumber,p2->name,average);
        p2=p2->next;
    }
}
void outputall(struct marklist *headp)
{
    float average;
    int sum;
    struct marklist *p2=headp;
    while(p2)
    {
        sum=0;
        sum+=p2->english;
        sum+=p2->math;
        sum+=p2->physics;
        sum+=p2->cprogramming;
        average=(float )sum/4;
        printf("%d %s %d %.2f\n",p2->studynumber,p2->name,sum,average);
        p2=p2->next;
    }
}
int main()
                                        {
    struct marklist *head=NULL,*tail;
    int choice,n;
    while(1)
    {
        do
        {
            scanf("%d",&choice);
        }while(choice<0||choice>5);
        switch (choice)
        {
            case 1:
                scanf("%d",&n);
                input(&head,n);
                printf("完成了%d位同学的成绩输入。\n",n);
                break;
            case 2:
                output(head);
                break;
            case 3:
                revise(head);
                break;
            case 4:
                average(head);
                break;
            case 5:
                outputall(head);
                break;
            default:
                goto down;
        }
    }
    down:
         free(head);
         return 0;
 }
 /*void averagesort()
 {
    struct marklist *p1=head,*p2;
    int len=0,i,j,temp;
    float temp1;
    char temp2[10];
    while (p1){len++;p1=p1->next;}
    for(i=0,p1=head;i<len-1;i++,p1=p1->next)
    {
        for(j=i+1,p2=p1->next;j<len;j++,p2=p2->next)
        {
            if(p1->average>p2->average)
            {
                temp=p1->studynumber;p1->studynumber=p2->studynumber;p2->studynumber=temp;
                temp=p1->english;p1->english=p2->english;p2->english=temp;
                temp=p1->math;p1->math=p2->math;p2->math=temp;
                temp=p1->physics;p1->physics=p2->physics;p2->physics=temp;
                temp=p1->cprogramming;p1->cprogramming=p2->cprogramming;p2->cprogramming=temp;
                temp1=p1->average;p1->average=p2->average;p2->average=temp1;
                temp=p1->sum;p1->sum=p2->sum;p2->sum=temp;
                strcpy(temp2,p1->name);strcpy(p1->name,p2->name);strcpy(p2->name,temp2);
            }
        }
    }
 }*/
 /*void averagesort()
{
    struct marklist *prior1,*prior2,*p1,*p2,*t,*p3;
    p1=head;
    for(p2=p1->next,prior2=p1;p2!=NULL;prior2=p2,p2=p2->next)
        if(p1->average>p2->average)
        {
            prior2->next=p1; t=p1->next;
            p1->next=p2->next; head=p2;
            p2->next=t; p1=p2;
        }
    for(prior1=head,p1=prior1->next;p1->next!=NULL;prior1=p1,p1=p1->next)
    {
        for(p2=p1->next,prior2=p1;p2!=NULL;prior2=p2,p2=p2->next)
        {
            if(p1->average>p2->average)
            {
                t=p2->next; prior1->next=p2;
                prior2->next=p1;p2->next=p1->next;
                p1->next=t; p1=p2;
            }
        }
    }
 }
  */