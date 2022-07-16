#include <stdio.h>
int main()
{
    int a=1,b=1,sum;
    int n,i;
    int cnt=2;
    scanf("%d",&n);
    printf("%6d%6d",a,b);
    for (i=3;i<=n;)
    {
        sum=a+b;
        b=a;
        a=sum;
        i++;
        cnt++;
        printf("%6d",sum);
        if(cnt%8==0)
        {
            printf("\n");
            cnt=0;
        }
    }
    return 0;
}

