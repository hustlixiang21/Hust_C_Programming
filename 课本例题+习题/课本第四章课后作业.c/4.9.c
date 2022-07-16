//斐波那契数列
#include<stdio.h>
int main()
{
    int a=1,b=1;
    int n,sum=0;
    int cnt=2;
    scanf("%d",&n);
    printf("%8d%8d",a,b);
    for(cnt=2;cnt<=n;cnt++)
    {
        if(cnt%8==0) printf("\n");
        sum=a+b;
        b=a;
        a=sum;
        printf("%8d",sum);
    }
    return 0;
}