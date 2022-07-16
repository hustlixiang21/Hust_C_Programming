#include <stdio.h>
int main()
{
    int n,i,j,k,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-2;i++)
    {
        k=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[k]>a[j])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            t=a[k];
            a[k]=a[i];
            a[i]=t;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1) printf("%d",a[i]);
        else printf("%d ",a[i]);
    }
    return 0;
}
