#include<stdio.h>

int main()
{
    unsigned int x,m,n;
    scanf("%x %d %d",&x,&m,&n);
    if(m>=0 && m<=15 && n>=1 && n<=16-m)
    {
        unsigned int y=(((x>>m)<<m)<<(32-m-n))>>16;
        printf("%x\r\n",y);
    }
    else
    {
        printf("error");
    }
    return 0;
}
