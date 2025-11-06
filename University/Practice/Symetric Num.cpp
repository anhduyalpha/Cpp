#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, s = 0; cin >> n;
    for(ll i = 1; i <= sqrt(n); i++) {
        if(n % i ==0) {
            ll j = n / i;
            s += i;
            if(i != j) s += j;
        }
    }
    cout << s;
}  