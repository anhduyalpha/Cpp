#include <bits/stdc++.h>
using namespace std;
int main() {
    long long k, t; cin >> k >> t;

    t = t % (2*k);
    if(t <= k) cout << t;
    else {
        cout << k - ( t % k);
    } 
}