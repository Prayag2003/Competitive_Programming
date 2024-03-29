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
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define fok(x) for (int k = 0; k < x; k++)

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

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int arr[26];
        map<char, int> mp;
        map<string, int> mp2;
        for (int i = 0; i < 26; i++)
        {
            cin >> arr[i];
            mp[char('A' + i)] = arr[i];
        }

        int q;
        cin >> q;
        int size = q;
        while (q--)
        {
            string s;
            cin >> s;
            string temp;
            for (int i = 0; i < s.length(); i++)
            {
                temp += char(mp[s[i]]);
            }
            mp2[temp]++;
        }

        string ans = "YES";
        if (mp2.size() == size)
        {
            ans = "NO";
        }
        cout << "Case #" << i << ": " << ans << "\n";
    }
}