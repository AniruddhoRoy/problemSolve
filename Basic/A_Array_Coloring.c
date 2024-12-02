#include <stdio.h>
int sum(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        if (sum(arr, n) % 2 == 0)
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