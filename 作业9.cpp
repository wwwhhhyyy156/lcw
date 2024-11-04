#include <stdio.h>
int main()
{
    int arr[3][3], list[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            list[j][i] = arr[i][j];
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", list[j][i]);
        }
        printf("\n");
    }
}