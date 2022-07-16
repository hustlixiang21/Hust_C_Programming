#include <stdio.h>
#include "string_func.h"

int main()
{
    char a[]="      I love you!     ";
    char b[20];
    printf("%d\n", Strlen(a));//Strlen函数的使用
    Strcpy(a,b);//Strcpy函数的使用
    printf("%s\n",b);
    Reverse(b);
    printf("%s\n",b);//Reverse函数的使用
    trim(a);
    printf("%s\n",a);
    return 0;
}
