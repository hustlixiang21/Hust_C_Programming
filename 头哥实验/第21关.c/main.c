#include <stdio.h>
struct student
        {
    int num;
    char name[12];
    double score;
        };

int main()
{
    int i;
    struct student stu[3],*ps[3];
    for(i=0;i<3;i++)
    {
        ps[i]=&stu[i];
    }
    for(i=0;i<3;i++)
    {
        scanf("%d%s%lf",&stu[i].num,stu[i].name,&stu[i].score);
    }
    for(i=0;i<3;i++)
    {
        printf("%d %s %.0f\n",stu[i].num,stu[i].name,stu[i].score);
    }
    for(i=0;i<3;i++)
    {
        printf("%d %s %.0f\n",ps[i]->num,ps[i]->name,ps[i]->score);
    }

    return 0;
}
