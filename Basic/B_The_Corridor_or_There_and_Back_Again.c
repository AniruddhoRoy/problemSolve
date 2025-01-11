#include <stdio.h>
#include <math.h>
int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int room = 100000;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            int temp_room = a + (round((b / 2.0)) - 1);
            room = min(temp_room, room);
        }
        printf("%d\n", room);
    }

    return 0;
}