/*
 * struct T
 * {
        int a[3], *pa;
        char b[20],*pb;
    }s={{-1,0,1},s.a,“abcdef”,s.b},*ps=&s;
请计算下列表达式的值：
（1）++*s.a  （2）*s.a+2  （3）*（s.a+2） （4）ps->pa[1]++
（5）++*++ps->pa  （6）*（s.b+2） （7）*（++s.pb）+2
（8）(++s.pb)[3] （9）ps->pb[2]++  （10）*（++ps->pb）++
 */
#include <stdio.h>
struct T
        {
    int a[3],*pa;
    char b[20],*pb;
        }s={{-1,0,1},s.a,"abcdef",s.b},*ps=&s;//这个花括号里的s.a和s.b的目的就是给所定义的这个指针赋值
int main()
{
    printf("++*s.a=%d\n",++*s.a);//*s.a指的是a[0]
    printf("*s.a+2=%d\n",*s.a+2);//经过第一次的自增，s[0]=0然后再加上2
    printf("*(s.a+2)=%d\n",*(s.a+2));//*(s.a+2)这个指的是a[3]
    printf("ps->pa[1]++=%d\n",ps->pa[1]++);//根据优先级和结合性，该表达式先ps->pa[1]再自增
    // 但是++放在后面所以输出原值也就是a[1]，此时a[1]的值已经变成了1
    printf("++*++ps->pa=%d\n",++*++ps->pa);//先指向了a[0],然后地址自增到a[1],a[1]原本为1然后自增到2
    printf("*(s.b+2)=%c\n",*(s.b+2));//该表达式就是b[2]
    printf("*(++s.pb)+2=%c\n",*(++s.pb)+2);//.的优先级最高，先是b[0]，地址自增到b[1]，后ascii码的值加2
    printf("(++s.pb)[3]=%c\n",(++s.pb)[3]);//由于上一轮有++s.pb表示的是该地址已经到达了b[1],又一次++表明初始地址到达了b[2]
    //然后[3]表明从这个地址开始往后加三个地址，就是b[5]
    printf("ps->pb[2]++=%c\n",ps->pb[2]++);//pb的初始地址已经到了b[2],再往后去两个就是b[4],然后后缀自增，输出b[4]=e,然后加上1变为f
    printf("(*(++ps->pb))++=%c\n",(*(++ps->pb))++);//初始地址b[2]，地址自增到b[3],输出b[3]=d后自增到e
    return 0;
}
