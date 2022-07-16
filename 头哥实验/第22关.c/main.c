#include <stdio.h>
#include <string.h>
struct web
        {
    char a[100];
    char b[100];
    char c[100];
        };
int main()
{
    int i;
    struct web web1[3];
    for(i=0;i<3;i++)
    {
        scanf("%s %s %s",web1[i].a,web1[i].b,web1[i].c);
    }
    char d[20];
    scanf("%s",d);
    char a,b,c;
    for(i=0;i<100&&web1[0].a[i]!='.';i++);
    a=web1[0].a[i+1];
    for(i=0;i<100&&web1[1].a[i]!='.';i++);
    b=web1[1].a[i+1];
    for(i=0;i<100&&web1[2].a[i]!='.';i++);
    c=web1[2].a[i+1];
    if(a<b)
    {
        if(c<a)
        {
            printf("%s %s %s\n",web1[2].a,web1[2].b,web1[2].c);
            printf("%s %s %s\n",web1[0].a,web1[0].b,web1[0].c);
            printf("%s %s %s\n",web1[1].a,web1[1].b,web1[1].c);
        }
        else if(c>b)
        {
            printf("%s %s %s\n",web1[0].a,web1[0].b,web1[0].c);
            printf("%s %s %s\n",web1[1].a,web1[1].b,web1[1].c);
            printf("%s %s %s\n",web1[2].a,web1[2].b,web1[2].c);
        }
        else
        {
            printf("%s %s %s\n",web1[0].a,web1[0].b,web1[0].c);
            printf("%s %s %s\n",web1[2].a,web1[2].b,web1[2].c);
            printf("%s %s %s\n",web1[1].a,web1[1].b,web1[1].c);
        }
    }
    else if(a>b)
    {
        if(c<b)
        {
            printf("%s %s %s\n",web1[2].a,web1[2].b,web1[2].c);
            printf("%s %s %s\n",web1[1].a,web1[1].b,web1[1].c);
            printf("%s %s %s\n",web1[0].a,web1[0].b,web1[0].c);
        }
        else if(c>a)
        {
            printf("%s %s %s\n",web1[1].a,web1[1].b,web1[1].c);
            printf("%s %s %s\n",web1[0].a,web1[0].b,web1[0].c);
            printf("%s %s %s\n",web1[2].a,web1[2].b,web1[2].c);
        }
        else
        {
            printf("%s %s %s\n",web1[1].a,web1[1].b,web1[1].c);
            printf("%s %s %s\n",web1[2].a,web1[2].b,web1[2].c);
            printf("%s %s %s\n",web1[0].a,web1[0].b,web1[0].c);
        }

    }
    if(!strcmp(d,web1[0].b)) printf("%s\n",web1[0].a);
    else if(!strcmp(d,web1[1].b)) printf("%s\n",web1[1].a);
    else if(!strcmp(d,web1[2].b)) printf("%s\n",web1[2].a);

    return 0;
}
