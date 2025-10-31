#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s = 0, j, r; cin >> n;
    r = sqrt(n);

    for(ll i = 1; i <= r; i++ ) {
        if(n % i ==0) {
            s += i;
            j = n / i;
            if(i != j) s += j;
        }
    }
    s -= n;
    cout << s;
}