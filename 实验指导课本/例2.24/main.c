#include <stdio.h>

int main()
{
    int v,i;
    while(scanf("%x",&v)!=EOF)
    {
        for(i=0;v!=0;i++)
        {
            v&=(v-1);
            if(v==0)
                printf("%d\n",i+1);
        }
    }

    return 0;
}
