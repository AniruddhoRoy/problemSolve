#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n == 5)
    {
        cout << "3 1 1" << endl;
        return 0;
    }
    if (n == 3)
    {
        cout << "1 1 1" << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << "0 1 1" << endl;
        return 0;
    }
    if (n == 1)
    {
        cout << "0 0 1" << endl;
        return 0;
    }
    if (n == 0)
    {
        cout << "0 0 0" << endl;
        return 0;
    }
    vector<int> v;
    int i = 0;
    int a = 0;
    int b = 1;
    while (b != n)
    {
        int temp = a + b;
        v.push_back(temp);
        a = b;
        b = temp;
        i++;
    }
    i = i - 2;
    cout << v[i] << " " << v[i - 2] << " " << v[i - 3] << endl;
    return 0;
}