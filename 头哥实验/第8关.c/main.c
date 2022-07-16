#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    int t;
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    while (b!=0)
    {
        t=a%b;
        a=b;
        b=t;
    }
    e=c*d/a;
    printf("%d %d",a,e);
    return 0;
}
