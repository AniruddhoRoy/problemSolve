#include <stdio.h>
int check(int arr[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int arr[26] = {0};
    char s1[100];
    char s2[100];
    char s3[100];
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);
    for (int i = 0; s1[i] != '\0'; i++)
    {
        arr[s1[i] - 65]++;
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
        arr[s2[i] - 65]++;
    }
    for (int i = 0; s3[i] != '\0'; i++)
    {
        arr[s3[i] - 65]--;
    }
    if (check(arr))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}