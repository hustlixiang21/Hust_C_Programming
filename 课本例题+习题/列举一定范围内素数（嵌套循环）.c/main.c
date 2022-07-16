#include <stdio.h>

int main()
{

    for(int x=2;x<50;x++)
    {
        int i;
        int judge=1;
    for(i=2;i<x;i++)
    {
        if(x%i==0){
            judge=0;
            break;
        }
    }if(judge==1){
        printf("%d\n",x);
    }
    }
    return 0;
}
