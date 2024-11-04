#include <stdio.h>
int main()
{
    char s1[100], s2[150];
    int i = 0, j = 0;
    scanf("%s%s", s1, s2);
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
        s1[i++] = s2[j++];
    s1[i] = '\0';
    printf("连接后的字符串是：%s", s1);
}