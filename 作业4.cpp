#include <stdio.h>
int main()
{
    int m, n, t, num1, num2;
    scanf("%d%d", &m, &n);
    num1 = m;
    num2 = n;
    if (num1 >= num2)
    {
        while (n != 0)
        {
            t = m % n;
            m = n;
            n = t;
        }
        printf("最大公约数为%d", m);
        printf("最小公倍数为%d", num1 * num2 / m);
    }

    if (num1 < num2)
    {
        while (m != 0)
        {
            t = n % m;
            n = m;
            m = t;
        }
        printf("最大公约数为%d", n);
        printf("最小公倍数为%d", num1 * num2 / n);
    }
}
