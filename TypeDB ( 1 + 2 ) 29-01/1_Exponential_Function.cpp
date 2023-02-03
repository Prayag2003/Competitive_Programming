// Author :- Prayag Bhatt
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define MOD 1000000007
#define MOD1 998244353
#define fon for (ll i = 0; i < n; i++)
#define foj for (ll j = 0; j < n; j++)
#define PI 3.141592653589793
#define maxa *max_element
#define mina *min_element
#define sz size
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define fi first
#define se second

ll freq(ll arr[], ll n)
{
    unordered_map<ll, ll> mp;
    ll max_count = 0, res = -1;

    for (ll i = 0; i < n; i++)
        mp[arr[i]]++;

    for (auto i : mp)
    {
        if (max_count < i.second)
        {
            res = i.first;
            max_count = i.second;
        }
    }
    return res;
}

// Returns a power b
ll binexp(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b = b >> 1;
    }
    return res;
}

ll lcm(ll a, ll b)
{
    int g = __gcd(a, b);
    return (a * b) / g;
}

// Returns GCD
ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Returns Coprimacy
ll coprime(ll n1, ll n2)
{
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}

// Returns Prime or Not
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void Prag2003()
{
    ll n;
    cin >> n;

    if (isPrime(n))
    {
        cout << n << "\n";
        return;
    }
    unordered_map<ll, ll> m;
    ll max_cnt = -1;

    ll temp = n;
    ll ans = n;

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll fac_cnt = 0;
            while (temp % i == 0)
            {
                fac_cnt++;
                temp /= i;
            }

            m[i] = fac_cnt;
            max_cnt = max(fac_cnt, max_cnt);
        }
    }
    if (temp > 1)
    {
        m[temp] = 1;
    }

    ll j = 0;
    ll sum = -1;
    ll product;

    for (int j = 0; j <= max_cnt; ++j)
    {
        product = 1;
        for (auto &val : m)
        {
            if (val.se >= 1)
            {
                product *= val.fi;
                --val.se;
            }
        }
        sum += product;
        // ++j;
    }

    cout << sum << "\n";
}

int main()
{
    fastio;
    cout << fixed << setprecision(8);
    int t = 1;
    cin >> t;
    while (t--)
        Prag2003();
}