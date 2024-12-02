#include <stdio.h>
void sortt(int arr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (arr[i] > arr[j])
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
    sortt(arr, m);
    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    int diff = 1000;
    for (int i = 0, j = n - 1; j < m; i++, j++)
    {
        diff = (arr[j] - arr[i] > diff) ? diff : arr[j] - arr[i];
    }
    return diff;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", solve(arr, n, m));
    return 0;
}