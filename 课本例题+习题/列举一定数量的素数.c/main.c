#include <stdio.h>

int main() {
    int x;
    int cnt=0;
    for(x=2;cnt<50;x++)
    {
        int i;
        int judge=1;
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                judge=0;
                break;
            }
        }
            if(judge==1)
            {
                printf("%d\t",x);
                cnt++;
            }
            if(cnt%5==0)
            {
                printf("\n");
            }

    }
    return 0;
}
