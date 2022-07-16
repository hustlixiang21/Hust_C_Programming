/*在IDE（比如DevC++）中，选择“运行”｜“参数”菜单，
 * 在 “传递给主程序的参数”文本框中输入main函数的参数arg1 arg2 arg3，
 * 只输入命令行中文件名后的参数，文件名不作为参数输入，参数间以空格隔开。
 * 编写程序在命令行输出这三个参数。（
 * 注意不同IDE输入参数的方式不相同，可参考各个IDE的使用手册。）*/

#include <stdio.h>

int main(int argc,char *argv[])//指针数组，每个元素都是一个指针，指针的值就是首地址
{
    int n=argc;
    printf("%d\n",n);
    for(n=0;n<argc;n++)
    {
        printf("%s\n",argv[n]);
    }
    return 0;
}