#include <stdio.h>

int main()
{
    int x,y,s;
    for (x=3;x<=10000;x++)
    {
        s=0;
        for(y=1;y<=x/2;y++)
        {
            if(x%y==0)
            {
                s+=y;
            }
        }if(s==x)
            printf("%d\n",x);
    }
    return 0;
}
