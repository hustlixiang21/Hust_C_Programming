#include <stdio.h>
int main()
{
    int cnt=0;
    long x,k;
    scanf("%ld",&x);
    char *p=(char *)&x;
    char high4,low4,ch[8];
    for(k=0;k<4;k++)
    {
        low4=(*p)&0x0f;
        if(low4<10)
        {
            low4+='0';
        }
        else
        {
            low4=(low4-10)+'A';
        }
        high4=(*p>>4)&0x0f;
        if(high4<10)
        {
            high4+='0';
        }
        else
        {
            high4=(high4-10)+'A';
        }
        p++;
        ch[cnt]=low4;
        cnt++;
        ch[cnt]=high4;
        cnt++;
        if(cnt==8)
        {
            for(int i=7;i>=0;i--)
            {
                printf("%c",ch[i]);
            }
        }
    }
    return 0;
}
