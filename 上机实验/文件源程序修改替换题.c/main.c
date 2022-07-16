//将指定的文本文件内容在屏幕上显示出来，命令行的格式为：
//type filename
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    char ch;
    if(argc!=2){
        printf("Arguments error!\n");
        exit(-1);
    }
    if(freopen(argv[1],"r",stdin)==NULL){       /*使标准输入指向 filename */
        printf("Can't open %s file!\n",argv[1]);
        exit(-1);
    }

    while((ch=fgetc(stdin))!=EOF)          /* 从filename中读字符 */
    {
        putchar(ch);                       /* 向显示器中写字符 */
    }
    fclose(stdin);                         /* 关闭filename */
    return 0;
}