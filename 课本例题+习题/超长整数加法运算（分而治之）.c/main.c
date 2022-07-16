#include <stdio.h>
#include <ctype.h>
#define N 20
void shift(int a[],int n)
{
    int k;
    for(k=0;k<N-n-1;k++)
    {
        *(a+k)=*(a+k+n+1);
    }
    for(k=N-1-n;k<N;k++)
    {
        *(a+k)=0;
    }
}
int main()
{
    int x[N],y[N],z[N+1],i,carry=0,flag;
    for(i=0;i<N+1;i++)
    {
        *(z+i)=0;
    }
    i=N-1;
    while(i>=0&& isdigit(*(x+i)=getchar()))
    {
        *(x+i--)-='0';
    }
    if(i>=0) shift(x,i);
    i=N-1;
    while(i>=0&& isdigit(*(y+i)=getchar()))
    {
        *(y+i--)-='0';
    }
    if(i>=0) shift(y,i);
    for(i=0;i<N;i++)
    {
        *(z+i)=*(x+i)+*(y+i)+carry;
        carry=(*(z+i)-*(z+i)%10)/10;
        *(z+i)%=10;
        *(z+i)+=0; //转化为对应的数字字符,便于输出
    }
    *(z+N)=carry+'0';
    for(i=N;i>=0;i--)
    {
        if(flag==0&&*(z+i)!='0') flag=1;
        if(flag==0) putchar(*(z+i));
    }
    putchar('\n');
    return 0;
}
