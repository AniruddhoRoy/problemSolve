#include <stdio.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
void sort_arr(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &arr[i]);
        }
        int team1 = max(arr[0], arr[1]);
        int team2 = max(arr[2], arr[3]);
        sort_arr(arr);
        if ((team1 == arr[0] || team1 == arr[1]) && (team2 == arr[0] || team2 == arr[1]))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}