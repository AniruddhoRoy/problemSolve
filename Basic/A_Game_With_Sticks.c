#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int solve = (n > m) ? m : n;
    if (solve % 2 == 0)
    {
        printf("Malvika");
    }
    else
    {
        printf("Akshat");
    }
    return 0;
}