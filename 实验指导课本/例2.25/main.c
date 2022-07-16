#include <stdio.h>

int main()
{
    long int a,maskx=0xf0f0f0f0,maske=0x0f0f0f00,maskv=0x0f;
    while (scanf("%lx",&a))
    {
        a=(a&maskx)|(a<<8)&maske|(a>>24)&maskv;
        printf("%lx\n",a);
    }
    return 0;
}
