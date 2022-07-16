#include <stdio.h>
int leap=0;
struct date
        {
    int year;
    int month;
    int day;
        };
int judge(struct date a);
int main()
{
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31},sum=0;
    struct date today;
    scanf("%i%i%i",&today.year,&today.month,&today.day);
    if(!judge(today)) printf("error\n");
    else
    {
        for(int i=0;i<today.month-1;i++)
    {
        sum+=months[i];
    }
    sum+=today.day;
    if(today.month>2) sum+=leap;
    printf("%d\n",sum);
    }
    return 0;
}
int judge(struct date a)
{
    int ret=1;
    if(a.month>12||a.month<1) ret=0;
    else if((a.month==4||a.month==6||a.month==9||a.month==11)&&(a.day>30||a.day<1)) ret=0;
    else if((a.month==1||a.month==3||a.month==5||a.month==7||a.month==8||a.month==10||a.month==12)&&(a.day>31||a.day<1)) ret=0;
    else if(a.year%4==0&&(a.year%100)!=0||a.year%400==0)
    {
        leap=1;
        if(a.month==2&&a.day>29||a.day<1) ret=0;
    }
    else if(a.month==2&&a.day>28||a.day<1) ret=0;
    return ret;
}

