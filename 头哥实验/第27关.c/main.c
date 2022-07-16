#include <stdio.h>
#include <string.h>
int ret=0;
int judge(char ch[],int n);
int main()
{
    char ch[100],len;
    scanf("%s",ch);
    len=strlen(ch);
    if(len==1) printf("1");
    else
    {
    if(judge(ch,len)) printf("1");
    else printf("0");
    }
    return 0;
}
int judge(char ch[],int n)
{
    for(int i=0;i<n-1-i;i++)
    {
        if(ch[i]==ch[n-1-i]) ret=1;
        else
        {
            ret=0;
            break;
        }
    }
    return ret;
}
