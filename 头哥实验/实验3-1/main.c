#include <stdio.h>
int lx(int a);
int main()
{
    int n,x,y;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>=4&&n%2==0)
        {
            for(x=2;x<n;x++)
            {
                if(!lx(x))
                {
                    y=n-x;
                    if(!lx(y))
                    {
                        printf("%d=%d+%d\n",n,x,y);
                        break;
                    }
                }
            }
        } else printf("error\n");
    }
    return 0;
}
int lx(int a)
{
    int flag=0;
    for(int i=2;i<a;i++)
    {
        if(!(a%i))
        {
            flag=1;
            break;
        }
    }
    return flag;
}
