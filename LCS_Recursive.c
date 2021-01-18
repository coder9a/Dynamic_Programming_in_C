#include<stdio.h>
#include<string.h>
int max(int, int);
int LCS(char *X, char *Y, int m, int n)
{
    int c, a, b;
    if(m == 0 || n == 0)
    {
        return 0;
    }
    if(X[m] == Y[n])
    {
        return 1+LCS(X, Y, m-1,n-1);
    }
    else
    {
        a = LCS(X, Y, m, n-1);
        b = LCS(X, Y, m-1, n);
        c = max(a, b);
        return c;
    }
}
int max(int a, int b)
{
    return (a>b)?a:b;
}
int main()
{
    char X[] = "BABA";
    char Y[] = "BABBA";
    int m = strlen(X);
    int n = strlen(Y);
    int l = LCS(X, Y, m, n);
    printf("LCS is %d", l);
    return 0;
}
