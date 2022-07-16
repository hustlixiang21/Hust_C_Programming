/*
 * 14.4  输入一行长度无限制超长字符串，用一个先进先出，且每个结点接受一个输入字符的单向链表接受这个字符串。再完成下列任务：
    （1）遍历输出该链表中所有字符；
    （2）将该超长字符串无冗余地存放到一个通过动态存储分配创建的字符数组中，并且通过puts函数或printf函数输出该超长字符串。
    用空格/换行/制表符视为字符串的结束。
14.6 对上一题，当再输入一个字符，如果该字符已在链表某个结点的数据域中，删除该结点；否则在输入字符和结点的数据域字符差值最小的后面插入包含输入字符的结点。*/
#include <stdio.h>
#include "stdlib.h"
struct linklist
        {
    char c;
    struct linklist *next;
        };
int main()
{
    struct linklist *head,*tail,*p,*prior,*current;
    int i=1;
    char b;
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
    p=head;//第一个任务
    while (p)
    {
        putchar(p->c);
        p=p->next;
    }
    char *a=(char *) malloc(i*sizeof (char));//第二个任务
    p=head;
    for(int j=0;j<i&&p!=NULL;j++)
    {
        a[j]=p->c;
        p=p->next;
    }
    puts(a);
    b=getchar();
    current=head;
    prior=head;
    while(current->c!=b&&current!=NULL)
    {
       prior=current;
       current=current->next;
    }
    if(!current)
    {
        printf("dkfhlsf");
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
    return 0;
}
