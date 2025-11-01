#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n, s = 0; cin >> n;
    for(int i = 1; i <= n; ) { // Do not use i++ because for each loop it may cause wrong answer
        s += n % 10;
        n /= 10;
    }
    cout << s;
}