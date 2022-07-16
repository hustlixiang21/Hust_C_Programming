#include <stdio.h>

int main()
{
    int x;
    int a[32];
    scanf("%d",&x);
    for(int i=0;i<32;i++)
    {
        a[i]=(x<<i)>>31;//此处有个原则，右移的时候若符号位是0则全补零，若符号位是1，则全补1；
        a[i]=0-a[i];
    }
    for(int i=0;i<32;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
