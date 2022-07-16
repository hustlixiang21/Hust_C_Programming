#include <stdio.h>

int main()
{
    int i=0,j=0,k=0;
    char c;
    while((c=getchar())!=EOF)
    {
        if(c>='a'&&c<='z'||c>='A'&&c<="Z")
            i++;
        if(c>='0'&&c<='9')
            j++;
        if(c=='\t'||c==' '||c=='\n')
            k++;
    }
    printf("%d%d%d",i,j,k);
    return 0;
}
