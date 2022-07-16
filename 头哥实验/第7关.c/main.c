#include <stdio.h>

int main()
{
    int judge=1;
    double sum=0;
    for(int i=1;i<=100000;)
    {
        sum+=judge*(1.0/i);
        judge=0-judge;
        i+=2;
    }
    printf("%f\n",4*sum);
    return 0;
}
