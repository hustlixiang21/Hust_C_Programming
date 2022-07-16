#include <stdio.h>

int main() {
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int x,y,z;
    int sum=0;
    scanf("%d %d %d",&x,&y,&z);
    if(x%4==0)
    {
        for (int i=0; i<y-1; i++)
        {
            sum+=b[i];
        }
        sum+=z;
    }
    else
    {
        for (int i=0; i<y-1; i++)
        {
            sum+=a[i];

        }
        sum+=z;
    }
    printf("%d",sum);
    return 0;
}
