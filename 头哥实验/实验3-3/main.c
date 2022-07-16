#include <stdio.h>
#include <math.h>
int lx(int a);
int main() {
    int k,j,i,l;
    while(scanf("%d",&k)!=EOF)
    {
        if(k!=0)
        {
            for(j=0,i= pow(10,k-1);i<pow(10,k);i++)
            {
                if(lx(i)) j++;
            }
            if(k==3) printf("3位的水仙花数共有%d个",j);
            else if(k==4) printf("4位的四叶玫瑰数共有%d个",j);
            else if(k==5) printf("5位的五角星数共有%d个",j);
            else if(k==6) printf("6位的六合数共有%d个",j);
            else if(k==7) printf("7位的北斗星数共有%d个",j);
            else printf("8位的八仙数共有%d个",j);
            for(l=0,i= pow(10,k-1);i<pow(10,k);i++)
            {
                if(l<j-1&& lx(i))
                {
                    printf("%d,",i);
                    l++;
                }
                else if (l==j-1&& lx(i)) printf("%d\n",i);
            }
        }
        else break;
    }
    return 0;
}
int lx(int a)
{
    int sum=0,flag=0,b,c,cnt;
    c=b=a;
    for(cnt=0;b!=0;cnt++) b/=10;
    for(;c!=0;)
    {
        sum+=pow(c%10,cnt);
        c/=10;
    }
    if(a==sum) flag=1;
    return flag;
}
