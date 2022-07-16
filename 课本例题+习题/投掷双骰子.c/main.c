#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
int lx(void)
{
    int x;
    srand((unsigned)time(NULL));
    x=rand()%6+1;
    return (x);
}
int main()
{
    int a,b,c,flag=1,first;
    a=lx();
    sleep(1);
    b=lx();
    c=a+b;
    first=c;
    printf("第一个骰子点数为%d 第二个骰子点数为%d\n",a,b);
    if(c==7||c==11)
    {
        printf("congratulation,you win!\ngame over!\n");
        flag=0;
    }
    else if(c==2||c==3||c==12)
    {
        printf("sorry,you lose.\ngame over!\n");
        flag=0;
    }
    else printf("再尝试一次吧!\n");
    while(flag==1)
    {
        a=lx();
        sleep(1);
        b=lx();
        printf("第一个骰子点数为%d 第二个骰子点数为%d\n",a,b);
        c=a+b;
        if(c==7)
        {
            printf("sorry,you lose.\ngame over!\n");
            flag=0;
        }
        else if(c==first)
        {
            printf("congratulation,you win!\ngame over!\n");
            flag=0;
        }
        if(flag==1) printf("再尝试一次吧！\n");
    }
    return 0;
}
