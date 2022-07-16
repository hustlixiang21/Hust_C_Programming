#include <stdio.h>
int main(void)
{
    short a=0x253f,b=0x7b7d;//short 两个字节//25是%，3f是？，7b{，7d}//这代表了高低位反正存入的
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("d:\\abc1.bin","wb+");//mode为打开或创建二进制文件更新，对已存在的文件，清除原有内容
    fp2=fopen("d:\\abc2.txt","w+");//mode为打开或创建文本文件更新，对已存在的文件，清除原有内容
    fwrite(&a,sizeof(short),1,fp1);//读入记录一条，字节数为两个字节，这条记录存放的地址是a的地址，就是读a到文件abc1.bin中
    fwrite(&b,sizeof(short),1,fp1);//读入记录一条，字节数为两个字节，这条记录存放的地址是b的地址，就是读b到文件abc1.bin中
    fprintf(fp2,"%d %d",a,b);//a,b写入abc2.txt中
    //C库函数 void rewind(FILE *stream) 设置文件位置为给定流 stream 的文件的开头。
    //rewind功能是将文件内部的指针重新指向一个流的开头
    //注意：不是文件指针而是文件内部的位置指针，随着对文件的读写文件的位置指针（指向当前读写字节）向后移动。
    //而文件指针是指向整个文件，如果不重新赋值文件指针不会改变。
    rewind(fp1);
    rewind(fp2);
    while((ch = fgetc(fp1)) != EOF)
        putchar(ch);//由于一个字节一个字节的输出，而存入是两个字节两个字节的存入，这告诉我们数据类型存入是什么读出就要是什么！！！
    putchar('\n');
    while((ch = fgetc(fp2)) != EOF)
        putchar(ch);//正常输出
    putchar('\n');
    fclose(fp1);
    fclose(fp2);
    return 0;
}
//（1）请思考程序的输出结果，然后通过上机运行来加以验证。
//（2）将两处sizeof(short)均改为sizeof(char)结果有什么不同，为什么？
//（3）将fprintf(fp2,"%hx %hx",a,b) 改为 fprintf(fp2,"%d %d",a,b)结果有什么不同。
/*收获：二进制文件并不能被文本编辑器创建，只能通过程序的创建。文本文件数据都按照写入文件的先后顺序以及ascii码的形式存放
存放的时候\n和\0都将被忽略。
 */