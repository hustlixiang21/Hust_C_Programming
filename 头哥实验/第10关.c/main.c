#include <stdio.h>
int digit(int n,int k);
int main() {

    int n;
    int k;
    scanf("%d,%d",&n,&k);
    printf("%d", digit(n,k));
    return 0;

}
int digit(int n,int k)
{
    int cnt;
    int a=n;
    int b;
    for(cnt=0;a>0;cnt++)
    {
       a/=10;
    }
    if(k>cnt)
    {
        return -1;
    }
    else
    {
        for(int i=0;i<k;i++)
        {
            b=n%10;
            n/=10;
        }
        return b;
    }
}