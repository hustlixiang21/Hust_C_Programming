#include <stdio.h>
int strncpy(char s[],char t[],int n);
int main()
{
    char s[100],t[100];
    int n,i,j;
    for(i=0;(s[i]=getchar())!=' ';i++);
    for(j=0;(t[j]=getchar())!=' ';j++);
    scanf("%d",&n);
    strncpy(s,t,n);
    for(int k=0;k<i;k++)
    {
        printf("%c",s[k]);
    }
    return 0;
}
int strncpy(char s[],char t[],int n)
{
    for(int k=0;k<n;k++)
    {
        s[k]=t[k];
    }
}
