#include <stdio.h>

int main() {
    int i,j;
    char t;
    char s[1000];
    fgets(s,1000,stdin);
    j=0;
    while(s[j]!='\0')
        j++;
    for(i=0,--j;i<j;i++,j--)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    printf("%s",s);
    return 0;
}
