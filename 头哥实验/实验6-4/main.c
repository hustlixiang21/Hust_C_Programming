#include <stdio.h>
void task0()
{
    printf("task0 is called!\n");
}
void task1()
{
    printf("task1 is called!\n");
}
void task2()
{
    printf("task2 is called!\n");
}
void task3()
{
    printf("task3 is called!\n");
}
void task4()
{
    printf("task4 is called!\n");
}
void task5()
{
    printf("task5 is called!\n");
}
void task6()
{
    printf("task6 is called!\n");
}
void task7()
{
    printf("task7 is called!\n");
}
void execute(int a[],int n)
{
    void (*t[8])()={task0,task1,task2,task3,task4,task5,task6,task7};
    for(int i=0;i<n;i++)
    {
        (*t[a[i]])();
    }
}
void scheduler()
{
    int i=0,a[8];
    char c;
    while((c=getchar())!='\n')
    {
        a[i]=c-'0';
        i++;
    }
    execute(a,i);
}
int main()
{
    scheduler();
    return 0;
}
