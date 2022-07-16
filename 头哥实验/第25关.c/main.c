/*本关任务：编写一个程序cpy_cat，它将命令行指定的多个文件复制连接到一个新文件中。例如，命令行：
    cpy_cat  filel  filel2  … filen newfile*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fin,*fout;
    char ch;
    if((fout= fopen(argv[argc-1],"w"))==NULL)//打开命令行最后的那个新文件，如果无法打开则退出
    {
        printf("Can't open the file!\n");
        exit(-1);
    }
    for(int i=1;i<argc-1;i++)//从第二个文件到倒数第二个文件循环进行写入新文件中
    {
        fin= fopen(argv[i],"r");//打开中间需要录入的文件
        while((ch= fgetc(fin))!=EOF) fputc(ch,fout);//用fgetc和fputc挨个进行复制
        fclose(fin);//关闭文件
    }
    printf("Process completed!\n");//表示进程结束
    fclose(fout);//关闭文件
    return 0;
}
