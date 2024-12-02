#include <stdio.h>
void min_number(int arr[], int n)
{
    int small = 100, index;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < small)
        {
            small = arr[i];
            index = i;
        }
    }
    arr[index]++;
}
int product(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
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
        min_number(arr, n);
        printf("%d\n", product(arr, n));
    }
    return 0;
}