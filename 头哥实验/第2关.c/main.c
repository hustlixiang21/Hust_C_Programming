#include <stdio.h>

int main()
{
        unsigned short k,x;
        scanf("%hu",&k);
        x = k;
        char low4 =x&0xF;
        char high4 =x>>12&0xF;
        x &= 0xFFF0;
        x |= high4;
        x &= 0x0FFF;
        x |= low4 << 12;
        printf("%hu",x);
        return 0;
}