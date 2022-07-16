//算法思想：从左向右两两相邻单元比较，逆序交换之。
#include <stdio.h>
void bubble_sort(int arr[])
{
    int i,j,t;
     for(i=0;i<5;i++)
     {
         for(j=0;j<5-i;j++)
         {
             if(arr[j]<arr[j+1])//这里的大于小于号决定了是从大到小还是从小到大
             {
                 t=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=t;
             }
         }
     }
}
int main()
{
    int arr[]={31,25,12,86,42,6};
    bubble_sort(arr);
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
