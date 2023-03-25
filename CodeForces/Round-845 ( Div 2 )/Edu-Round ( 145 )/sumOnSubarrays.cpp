#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll prod = 0, temp = 0;
        while (prod * (prod + 1) / 2 < k)
        {
            prod++;
        }
        for (int i = 0; i < prod; i++)
        {
            arr[i] = 2;
        }
        for (int i = prod; i < n; i++)
        {
            arr[i] = -1000;
        }

        temp = prod * (prod + 1);
        temp /= 2;
        temp -= k;

        if (temp)
        {
            arr[prod - 1] = 1 - 2 * temp;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}