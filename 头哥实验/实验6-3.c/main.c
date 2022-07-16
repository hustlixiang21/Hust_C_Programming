#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#define MAXLINES 2
#define MAXLEN 80
int readlines(char *pline[],int maxlines)
{
    int nlines=0;
    char temp[MAXLEN];
    for(int i=0;i<maxlines&&gets(temp);i++)
    {
        pline[i]=(char *)malloc(strlen(temp)+2);
        if(pline[i]==NULL) return -1;
        nlines++;
        strcpy(pline[i],temp);
        pline[i][strlen(temp)]='\n';
        pline[i][strlen(temp)+1]='\0';
    }
    return (nlines);
}
void delete(char *s[],int n)
{
    int i,j,k,flag,sign;
    char temp[81];
    for(i=0;i<n;i++)
    {
        strcpy(temp,s[i]);
        flag=1;

        for(j=0;temp[j]!='\0';j++)
        {
            sign=0;
            if(flag==1&&temp[j]==' ')
            {
                for(k=j;temp[k]!='\0';k++)
                {
                   temp[k]=temp[k+1];
                }
                sign=1;
            }
            if(temp[j]!=' ') flag=0;
            if(temp[j]=='\t')
            {
                for(k=j;temp[k]!='\0';k++)
                {
                    temp[k]=temp[k+1];
                }
                sign=1;
            }
            if(sign==1) j--;
        }
        strcpy(s[i],temp);
    }
}
int main()
{
    int nlines;
    char *s[MAXLINES];
    nlines=readlines(s,MAXLINES);
    delete(s,nlines);
    for(int i=0;i<2;i++)
    {
        printf("%s",s[i]);
    }
    return 0;
}