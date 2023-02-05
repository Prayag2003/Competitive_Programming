// https://www.hackerrank.com/contests/code-wars-2023/challenges/is-it-possible-1-3

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;


int main() {
    ll t;
    cin >> t;
    while(t--)
    {
        ll o,e,s;
        cin >> o >> e >> s;
   
        if(o + e*2 <= s )
        {
        if( (o%2==1 && s%2==1) || (o%2==0 && s%2==0  ))
        {
            cout << "YES\n";   
        }
        
        else cout << "NO\n";
        
        }
       
        else cout << "NO\n";
        
        
    }
}
