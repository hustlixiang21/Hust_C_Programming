#include <stdio.h>
int main()
{
    double a;
    double b;
    char sign;
    scanf("%lf %lf %c",&a,&b,&sign);
    if(sign=='+')sign=1;
    if(sign=='-')sign=2;
    if(sign=='*')sign=3;
    if(sign=='/')sign=4;
    switch (sign)
    {
    case 1:
        printf("%.6f",a+b);
        break;
    case 2:
        printf("%.6f",a-b);
        break;
    case 3:
        printf("%.6f",a*b);
        break;
    case 4:
        printf("%.6f",a/b);
        break;
    
    }
     return 0;
}
