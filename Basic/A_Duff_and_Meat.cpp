#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pr pair<int, int>
#define PB(v)           \
    {                   \
        int x;          \
        std::cin >> x;  \
        v.push_back(x); \
    }
#define out(text)             \
    {                         \
        cout << text << endl; \
    }
#define loop(n) for (int i = 1; i <= (n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> meat;
    vector<int> money;
    loop(n)
    {
        int x, y;
        cin >> x >> y;
        meat.push_back(x);
        money.push_back(y);
    }
    int amount = 0;
    int current_Price = money[0];
    for (int i = 0; i < meat.size(); i++)
    {
        if (current_Price > money[i])
        {
            current_Price = money[i];
        }
        amount += meat[i] * current_Price;
    }
    out(amount);

    return 0;
}