#include <stdio.h>
void sortt(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
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
int solve(int arr[], int n, int m)
{
    sortt(arr, n);
    int total = 0;
    for (int i = 0; i < m; i++)
    {
        total += arr[i];
    }
    return total;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x < 0)
        {
            arr[i] = x * -1;
        }
    }
    printf("%d", solve(arr, n, m));
    return 0;
}