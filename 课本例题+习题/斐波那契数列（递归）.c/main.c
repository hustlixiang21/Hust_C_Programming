#include <stdio.h>
#include <time.h>
int fibonacci(int n)
{
    if(n==1||n==2) return 1;
    else return fibonacci(n-1)+ fibonacci(n-2);
}
int main()
{
    int n;
    printf("input a number:");
    scanf("%d",&n);
    double start=clock();
    fibonacci(n);
    double end=clock();
    printf("%d\n", fibonacci(n));
    printf("Duration time=%fs\n", (end-start)/CLOCKS_PER_SEC);
    return 0;
}
