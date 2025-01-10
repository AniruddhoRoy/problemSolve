
#include <stdio.h>
int check(long long arr[], int n)
{
    if (arr[0] == 0 && arr[1] == 0)
    {
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] >= arr[i])
        {
            return 1;
        }
    }
    return 0;
}
void print(long long arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("[%lld]", arr[i]);
    }
    printf("\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        int i = 1;
        int num = 0;
        while (check(arr, n) && i < n)
        {
            if (arr[i - 1] >= arr[i])
            {
                arr[i - 1] = arr[i - 1] / 2;
                i = 1;
                num++;
            }
            else
            {
                i++;
            }
        }
        // print(arr, n);
        if (arr[0] == 0 && arr[1] == 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", num);
        }
    }
    return 0;
}