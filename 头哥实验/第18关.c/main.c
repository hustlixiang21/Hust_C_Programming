/*#include <stdio.h>

int main()
{
    int a[5],temp;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        if(i==4) printf("%d",a[i]);
        else printf("%d ",a[i]);
    }
    return 0;
}*/
#include<stdio.h>
void bubble(int*p,int len) {
    for (int i=0;i<len-1;i++)
    {
        for (int j=0;j<len-1-i;j++)
        {
            if (*(p+j)>*(p+j+1))
            {
                int temp;
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}
int main(void){
    int arr[5];
    int *p =arr;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    //for(p=arr;p<&arr[5];p++)
    //{
    //    scanf("%d",&*p);
   // }
    //p=arr;
    int len = sizeof(arr)/sizeof(arr[0]);
    bubble(p, len);
    for (p=arr;p<&arr[5];p++)//指针遍历
        {
        if(p<&arr[4]) printf("%d ", *p);//p++每次加一，就等于自动前进，所以一直打印p[0]即可。
        else printf("%d", *p);
        }
    return 0;
}


