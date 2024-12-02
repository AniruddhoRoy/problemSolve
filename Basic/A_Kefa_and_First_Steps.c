#include <stdio.h>
int solve(int arr[], int n)
{
    int sub = 0;
    int max = 0;
    ;
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            sub++;
            // printf("%d ", sub);
        }
        else
        {
            max = (max > sub) ? max : sub;
            sub = 0;
        }
    }
    max = (max > sub) ? max : sub;
    return max;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", solve(arr, n) + 1);
    return 0;
}