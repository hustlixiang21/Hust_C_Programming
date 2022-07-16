#include <stdio.h>

int main()
{
    int n,t;
    scanf("%d",&n);
    int x[n];
    int *p=x;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n-i-1;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)=t;
    }
    for(p=x;p<&x[n];p++)
    {
        if(p==&x[n-1]) printf("%d",*p);
        else printf("%d ",*p);
    }
    return 0;
}
