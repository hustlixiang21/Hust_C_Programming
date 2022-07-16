#include <stdio.h>
int lx(int n);
int main()
{
    int i,j,k,m,l;
    for(i=2;i<10000;i++)
    {
        if(lx(i))
        {
            for(j=1,k=0;j<i;j++)
            {
                if(!(i%j)) k++;
            }
            for(l=1,m=0;l<i;l++)
            {
                if(!(i%l))
                {
                    m++;
                    if(m==1) printf("%d=%d+",i,l);
                    else if(m<k) printf("%d+",l);
                    else if(m==k) printf("%d\n",l);
                }
            }

        }
    }
    return 0;
}
int lx(int n)
{
    int sum=0,flag=0;
    for(int i=1;i<n;i++)
    {
        if(!(n%i)) sum+=i;
    }
    if(n==sum) flag=1;
    return flag;
}
