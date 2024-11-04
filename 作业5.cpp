#include <stdio.h>
int main()
{

    int sum, i, a, n;
    sum = 0;
    a = 1;
    printf("请输入一个数");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = a * i;
        sum = sum + a;
    }
    printf("%d", sum);
}