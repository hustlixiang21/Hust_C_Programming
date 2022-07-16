#include <stdio.h>
#define fixedyear 2019
#define fixedmonth 7
#define fixedday 9
int main()
{
    int year,month,day,leap,sum;
    int montharray[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("请宝贝儿输入一个日期（输入格式:2019 7 9）：\n");
    while((scanf("%d%d%d",&year,&month,&day))!=EOF)
    {
        sum=0;
        if(year<fixedyear||(year==fixedyear&&month<fixedmonth)||(year==fixedyear&&month==fixedmonth&&day<fixedday)) printf("输入出错啦！请宝贝儿再输一个！\n");
        else
        {
            if(year==fixedyear)
            {
                if(month==fixedmonth) printf("我们俩在一起%d天啦！要一直在一起哦！\n",day-9);
                else
                {
                    for (int i=0;i<month-fixedmonth-1;i++)
                    {
                        sum+=montharray[fixedmonth+i];
                    }
                    sum=sum+day+22;
                    printf("我们俩在一起%d天啦！要一直在一起哦！\n",sum);
                }
            }
            else
            {
                for(int i=0;i<year-fixedyear-1;i++)
                {
                    leap=0;
                    if((fixedyear+i+1)%4==0&&((fixedyear+i+1)%100)!=0||(fixedyear+i+1)%400==0) leap=1;
                    sum=sum+365+leap;
                }
                sum+=175;
                leap=0;

                if(month==1)
                {
                    sum=sum+day;
                }
                else if(month==2)
                {
                    sum=sum+31+day;
                }
                else
                {
                    if(year%4==0&&(year%100)!=0||year%400==0) leap=1;
                    for(int j=0;j<month-1;j++)
                    {
                        sum+=montharray[j];
                    }
                    sum+=day;
                }
                sum+=leap;
                printf("我们俩在一起%d天啦！要一直在一起哦！\n",sum);
            }
        }
    }
    return 0;
}