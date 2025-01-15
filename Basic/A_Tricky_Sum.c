#include <stdio.h>
#include <math.h>

int main()
{
    long long arr[60];
    long long temp = 0;
    for (int i = 0; i < 60; i++)
    {
        arr[i] = temp + pow(2, i);
        temp = arr[i];
    }
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        long long sum = n * (n + 1) / 2;
        int index = floor(log2(n));
        // printf("[%lld]", index);
        printf("%lld\n", sum - 2 * arr[index]);
    }
    return 0;
}