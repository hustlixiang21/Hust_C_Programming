/**
【例4.29】 盒子里有n(n<10000)个球，A、B两人轮流从盒中取球，我们约定游戏规则为：
(1) 每次从盒子中取出的球的数目必须是1，3，7或者8个；
(2) A先取球，B接着取球，如此双方交替取球，直到盒里的球被取完；
(3) 取走盒中最后一个球的一方为输方。
假设取球过程中A和B都不存在失误，即不会将赢的局面变为输。编程实现，输入小球的数目n，按规则取球，如果A为赢方则输出1，A为输方则输出0。
 */

#include <stdio.h>

int main()
{
    char tab[10000];
    int ins[] = {1, 3, 7, 8};
    int i, j, n, num;

    for (tab[0]=1,i=1; i<10000; i++)
        tab[i] = 0;
    for (i=1; i<10000; i++) {
        if (tab[i] == 0)
            for (j=0; j<4; j++)
                if ((num=i+ins[j]) < 10000)
                    tab[num] = 1;
    }
    scanf("%d", &n);
    printf("%d\n", tab[n]);

    return 0;
}