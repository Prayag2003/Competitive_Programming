// https://www.hackerrank.com/contests/code-wars-2023/challenges/balance-out-the-word

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void fun()
{
    ll t;
    cin >> t;
    string s;
    cin >> s;
    set<char> ss;

    if (t < 26)
    {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < t; ++i)
    {

        for (int j = i; j < i + 26 && j < t; ++j)
        {
            ss.insert(s[j]);
        }

        if (ss.size() >= 25)
        {
            cout << "YES\n";
            return;
        }
        ss.clear();
    }
    cout << "NO\n";
}

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        fun();
    }
}
