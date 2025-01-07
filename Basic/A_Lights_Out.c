#include <stdio.h>
#include <stdbool.h>
void printf_arr(bool arr[][6])
{
    for (int i = 2; i < 5; i++)
    {
        for (int j = 2; j < 5; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    // printf("----------\n");
}
void change(bool arr[][6], int x, int y)
{

    arr[x + 1][y] = !arr[x + 1][y];
    arr[x - 1][y] = !arr[x - 1][y];
    arr[x][y + 1] = !arr[x][y + 1];
    arr[x][y - 1] = !arr[x][y - 1];
    arr[x][y] = !arr[x][y];
    // printf_arr(arr);
}
int main()
{
    bool arr[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            arr[i][j] = true;
        }
    }

    int input[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &input[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (input[i][j] % 2 != 0)
            {
                change(arr, i + 2, j + 2);
            }
        }
    }
    printf_arr(arr);
    return 0;
}
