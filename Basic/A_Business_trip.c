#include <stdio.h>
void sortt(int arr[])
{

    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++)
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
int solve(int arr[], int n)
{
    sortt(arr);
    int total = 0;
    int i = 0;
    while (n > total)
    {
        // printf("X");
        total += arr[i];
        i++;
    }
    return (i > 12) ? -1 : i;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[12];
    for (int i = 0; i < 12; i++)
    {

        scanf("%d", &arr[i]);
    }

    printf("%d", solve(arr, n));
    return 0;
}