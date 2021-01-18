#include<stdio.h>
int DP_fib(int n)
{
    int fib[n+2], i;
    fib[0] = 0;
    fib[1] = 1;
    for(i=2;i<=n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}
int main()
{
    int n, x;
    printf("Enter number \n");
    scanf("%d",&n);
    x = DP_fib(n);
    printf("%d",x);
    return 0;
}