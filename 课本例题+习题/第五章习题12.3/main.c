#include <stdio.h>
#include "string.h"
int main()
{
    int len;
    char s[1000],t;
    gets(s);
    len=strlen(s);
    len-=1;
    for(int i=0;i<len;i++,len--)
    {
        t=s[i];
        s[i]=s[len];
        s[len]=t;
    }
    puts(s);
    return 0;
}
