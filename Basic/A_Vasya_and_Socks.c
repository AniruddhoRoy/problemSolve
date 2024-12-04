#include <stdio.h>
int solve(int n, int m)
{

    int days = n, temp = 0;
    while (n / m > 0)
    {
        temp += n % m;
        n = n / m;
        days += n;
    }
    days += temp / m;
    return (days % 2 == 0) ? days + 1 : days;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", solve((int)n, (int)m));
    return 0;
}