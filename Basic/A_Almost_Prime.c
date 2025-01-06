#include <stdio.h>
int isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int find_divisor(int n)
{
    int f = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isprime(i))
            {
                f++;
            }
        }
    }
    if (f == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    // int arr[300];
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (find_divisor(i))
        {
            count++;
            // printf("%d ", i);
        }
    }
    printf("%d", count);
}