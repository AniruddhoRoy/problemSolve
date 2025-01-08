#include <stdio.h>
int check(int b, int c, int a, int arr[2][a])
{
    for (int i = 0; i < a; i++)
    {
        if (b == arr[0][i] && c == arr[1][i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int arr[2][a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d %d", &arr[0][i], &arr[1][i]);
        }
        int x = 1;
        int time = 0;

        while (x)
        {
            if (check(b, c, a, arr))
            {
                break;
            }
            time++;
            c++;

            if (c == 60)
            {
                b++;
                c = 0;
            }
            if (b == 24)
            {
                b = 0;
            }
        }
        printf("%d %d\n", time / 60, time % 60);
    }
    return 0;
}