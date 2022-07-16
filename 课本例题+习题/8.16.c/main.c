#include <stdio.h>
#define I 2
#define J 3
#define K 4
int main()
{
    int a[I][J][K],*p,n=1;
    p=&a[0][0][0];
    int i,j,k;
    for(i=0;i<I;i++)
    {
        for(j=0;j<J;j++)
        {
            for(k=0;k<K;k++)
            {
                *(p+i*J*K+j*K+k)=n++;
            }
        }
    }
    for(i=0;i<I;i++)
    {
        for(j=0;j<J;j++)
        {
            for(k=0;k<K;k++)
            {
                printf("%4d\n",*(a[i][j]+k));
            }
        }
    }

    return 0;
}
