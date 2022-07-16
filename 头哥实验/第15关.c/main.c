#include <stdio.h>
#include "string.h"
int main()
{
    int len,a=0,b=0,c=-1;
    char ch[1000];
    scanf("%s",ch);
    //fgets(ch,1000,stdin);//fgets会读回车
    len=strlen(ch);
    for(int i=0;i<len;i++)
    {
        if(ch[i]>='0'&&ch[i]<='9')
        {
            a++;
        }
        else if(ch[i]>='a'&&ch[i]<='z'||ch[i]>='A'&&ch[i]<='Z')
        {
            b++;
        } else c++;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
