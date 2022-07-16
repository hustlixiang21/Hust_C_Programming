#include "string.h"
#ifndef _C_STRING_FUNC_H
#define _C_STRING_FUNC_H
//能够输出字符串长度的函数strlen
int Strlen(char s[])
{
    int j=0;
    while(s[j]!='\0') j++;//此处可以用while(s[j++]),更加简洁
    return j;
}
//复制一个字符串到另一个字符串数组里
void Strcpy(char s[],char t[])
{
    int j;
    for(j=0;s[j]!='\0';j++) t[j]=s[j];
    t[j+1]='\0';
}
//方式2 课本简介许多
/*
 void Strcpy(char s[],char t[])
{
    int j=0;
    while(t[j]=s[j++]);
}
 */
//比较两个字符串
int Strcmp(char s[],char t[])
{
    int j=0;
    while (s[j]==t[j]&&s[j]!='\0') j++;//s[j]!='\0'可以写成s[j]
    return  s[j]-t[j];
}
//链接字符串
char * Strcat(char t[],char s[])
{
    int j=0,k=0;
    while(t[j++]!='\0');
    j--;
    while((t[j++]=s[k++]));
    return t;
}
//字符串反转函数
void Reverse(char s[])
{
    int j,k;
    char c;
    for(j=0,k= strlen(s)-1;j<k;j++,k--)
        c=s[j],s[j]=s[k],s[k]=c;
}
//求字符串子串
int Strstr(char cs[],char ct[])
{
    int j=0,k;
    for(;cs[j]!='\0';j++)
    {
        if(cs[j]==ct[0])
        {
            k=1;
            while(cs[j+k]==ct[k]&&ct[k]!='\0') k++;
            if(k== strlen(ct))
                return j;
        }
    }
    return -1;
}
//编写删除字符串首尾空白字符的trim函数
int trim(char s[])
{
    int i=0,j,k=0;
    int len=strlen(s);
    while(s[i]==' '||s[i]=='\n'||s[i]=='\t'||s[i]=='\r') i++;
    len--;
    while(s[len-k]==' '||s[len-k]=='\n'||s[len-k]=='\t'||s[len-k]=='\r') k++;
    j=len+1-i-k;
    for(k=0;k<j;k++)
    {
        s[k]=s[i+k];
    }
    s[j]='\0';
    return strlen(s);
}
//编写从字符串s中删除所有和给定字符相同的的字符
void delete_c(char s[],char c)
{
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(s[i]!=c) s[j++]=s[i];
        i++;
    }
    s[j]='\0';
}
#endif
