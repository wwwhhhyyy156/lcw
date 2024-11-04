#include <stdio.h>
int main()
{
    int date[10] = {1, 7, 8, 17, 23, 24, 59, 62, 101};
    int m, t;
    printf("请输入一个数");
    scanf("%d", &m);
    for (int i = 0; i < 9; i++)
    {
        if (m > date[i] && m < date[i + 1])
        {
            t = i + 1;
            break;
        }
    }
    for (int i = 9; i >= t; i--)
        date[i + 1] = date[i];
    date[t] = m;
    for (int i = 0; i <= 9; i++)
    {
        printf("%d", date[i]);
    }
}