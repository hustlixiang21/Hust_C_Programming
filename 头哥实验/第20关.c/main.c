#include <stdio.h>

int main()
{   int year,month,day,sum=0;
    scanf("%d %d %d",&year,&month,&day);
    int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(year%4==0&&((year%100)!=0||year%400==0))
    {
        if(month==2&&day>29) printf("error");
        else if(month==4||month==6||month==9||month==11&&day>30) printf("error");
        else if(day>31) printf("error");
        else
        {
            for(int i=0;i<month-1;i++)
            {
                sum+=a[i];
            }
            sum+=day;
            printf("%d",sum);
        }
    }
    else
    {
        if(month==2&&day>28) printf("error");
        else if(month==4||month==6||month==9||month==11&&day>30) printf("error");
        else if(day>31) printf("error");
        else
        {
            for(int i=0;i<month-1;i++)
            {
                sum+=b[i];
            }
            sum+=day;
            printf("%d",sum);
        }
    }

    return 0;
}
