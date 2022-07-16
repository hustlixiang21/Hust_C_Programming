#include <stdio.h>
#include "ctype.h"
int getint(int *pn)
{
    int c,sign;
    while(isspace(c=getchar()));
    if(!isdigit(c)&&c!=EOF&&c!='-'&&c!='+')
    {
        printf("error");
        return 0;
    }
    sign=(c=='-')?-1:1;
    if(c=='+'||c=='-') c= getchar();
    for(*pn=0; isdigit(c);c= getchar())
        *pn=10 * *pn +(c-'0');
    *pn*=sign;
    return c;
}
int main()
{
    int a[100],i,j,k;
    printf("input integers ends with enter\n");
    for(i=0;i<100&&(k= getint(&a[i]))!='\n';)
    {
        if(k) i++;
    }
    for(j=0;j<=i;j++)
    {
        printf("%8d",a[j]);
    }
    printf("\n");
    return 0;
}
