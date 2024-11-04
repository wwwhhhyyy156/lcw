#include <stdio.h>
int main()
{
    int a, b, c, n;
    for (n = 100; n <= 999; n++)
    {
        a = n / 100;
        b = n % 100 / 10;
        c = n % 100 % 10;
        if (n == a * a * a + b * b * b + c * c * c)
            printf("\n%d", n);
    }
}