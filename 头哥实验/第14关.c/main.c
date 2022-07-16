#include <stdio.h>

int main()
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;k<n;i++,k++)
    {
        b[i]=a[k];
    }
    for(int k=0;i<n;k++,i++)
    {
        b[i]=a[k];
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1) printf("%d",b[i]);
        else printf("%d ",b[i]);
    }
    return 0;
}
