// https://www.hackerrank.com/contests/code-wars-2023/challenges/can-you-win-this-game/submissions/code/1355836388

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
#define fon for(int i = 0 ; i<n ; ++i)
using namespace std;


int main() {
   ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n+1];
        ll sum = 0 ;
        ll  b[n+1];
        for( int i =1;i<=n ; ++i)
        {
            b[i] = i;
        }
        for(int i = 1 ; i<=n ; ++i)
         {
             cin >> a[i];
         }
         sort(a+1,a+n+1);
         for(int i = 1 ; i<=n ; ++i)
         {
            sum += abs(a[i] - b[i] );
         }
     
        cout << sum << "\n";
        
        
    }
}
