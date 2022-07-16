#include<stdio.h>
void spinning(int m,int n,int a[],int b[][n]);
int main()
{
    int i,j,m,n;
    scanf("%d %d",&m,&n);
    int a[m*n],b[m][n];
    for(i=0;i<m*n;i++)
    {
        scanf("%d",&a[i]);
    }
    spinning(m,n,a,b);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(j==m-1) printf("%d",b[i][j]);
            else printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void spinning(int m,int n,int a[],int b[][n])
{
    int *p=a;
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=n-1;j>=0;j--,p++)
        {
            b[j][i]=*p;
        }
    }
}