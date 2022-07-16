#include <stdio.h>
int main()
{
    char c,t,s[30];
    int n;
    c=getchar();
    if(c>='A'&&c<='Z')
    {
        n=c-'A'+1;
        for(int i=0;i<n;i++)
        {
            s[i]='A'+i;
            if(i==n-1) printf("%c\n",s[i]);
            else printf("%c ",s[i]);
        }
        for(int i=1;i<n;i++)
        {
            t=s[0];
            for(int j=0;j<n-1;j++) s[j]=s[j+1];
            s[n-1]=t;
            for(int k=0;k<n;k++)
            {
                if(k==n-1) printf("%c\n",s[k]);
                else printf("%c ",s[k]);
            }
        }
    }
    else
    {
        n=c-'a'+1;
        for(int i=0;i<n;i++)
        {
            s[i]='a'+i;
            if(i==n-1) printf("%c\n",s[i]);
            else printf("%c ",s[i]);
        }
        for(int i=1;i<n;i++)
        {
            t=s[0];
            for(int j=0;j<n-1;j++) s[j]=s[j+1];
            s[n-1]=t;
            for(int k=0;k<n;k++)
            {
                if(k==n-1) printf("%c\n",s[k]);
                else printf("%c ",s[k]);
            }
        }
    }
    return 0;
}