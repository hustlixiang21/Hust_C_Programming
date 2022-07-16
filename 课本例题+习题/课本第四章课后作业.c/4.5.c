#include <stdio.h>
int main()
{
    double a;
    double b;
    char sign;
    scanf("%lf %lf %c",&a,&b,&sign);
    if(sign=='+')
    {
        printf("%.6f",a+b);
    }
    else if(sign=='-')
    {
        printf("%.6f",a-b);
    }
    else if(sign=='*')
    {
        printf("%.6f",a*b);
    }
    else if(b==0)
    {
        printf("Error");
    }
    else if(sign=='/')
    {
        printf("%.6f",a/b);
    }
    else
    {
        printf("Error");
    }
    return 0;
}
