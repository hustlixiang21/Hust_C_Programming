#include <stdio.h>
#include "string.h"
void reverse_string(char* str)
{
    if (*str != '\0')
    {
        char tmp = *str;
        int length = strlen(str);
        *str = *(str+ length - 1);
        *(str + length - 1) = '\0';
        reverse_string(str + 1);
        *(str + length - 1) = tmp;
    }

}
int main()
{
    char arr[100];
    scanf("%s",arr);
    reverse_string(arr);
    printf("%s\n", arr);
    return 0;
}

