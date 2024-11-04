#include <stdio.h>
int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int N, i;
    printf("请输入一个数");
    scanf("%d", &N);
    for (i = 2; i <= N; i++)
    {
        if (isPrime(i) == 1)
            printf("\n%d", i);
    }
}
