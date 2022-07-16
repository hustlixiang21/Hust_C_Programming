#include <stdio.h>
int main()
{
    int x,a,b,c,d;
    while(scanf("%d",&x) != EOF)
    {
        a=x>>24&0x000000ff;
        b=x>>16&0x000000ff;
        c=x>>8&0x000000ff;
        d=x&0x000000ff;
        printf("%d.%d.%d.%d\n",a,b,c,d);
    }
    return 0;
}
