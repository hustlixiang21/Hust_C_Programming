#include <stdio.h>

int main() {
    int i,j;
    char s[1000];
    printf("输入一个字符：\n");
    fgets(s,1000,stdin);
    j=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            j++;
        if(s[i]>='a'&&s[i]<='f')
            j++;
        if(s[i]>='A'&&s[i]<='F')
            j++;
    }
    printf("%d",j);
    return 0;
}
