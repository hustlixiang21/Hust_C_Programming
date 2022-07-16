#include <stdio.h>

int main()
{
    int n,i,j,flag=0,s=0,t=0,max,min;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++) scanf("%d",&arr[i][j]);
    }
    for(i=0;i<n;i++)
    {
        max=arr[i][0];
        for(j=0;j<n-1;j++)
        {
            if(arr[i][j+1]>max)
            {
                max=arr[i][j+1];
                s=j+1;
            }
        }
        min=arr[0][s];
        for(int p=0;p<n-1;p++)
        {
            if(arr[p+1][s]<min)
            {
                min=arr[p+1][s];
                t=p+1;
            }
        }
        if(i==t)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) printf("%d %d\n",t,s);
    else printf("NO!\n");
    return 0;
}
