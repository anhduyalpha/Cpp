#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using i128 = __int128_t;

bool accept(ll ngay, ll a, ll k, ll b, ll m, ll n) {
    // so ngay lam viec doi 1
    ll team1 = ngay - ngay/k;
    // so ngay lam viec doi 2
    ll team2 = ngay - ngay/m;

    // so cay 2 doi chat duoc sau x ngay
    i128 cut = (i128)a * team1 + (i128)b * team2;
    return cut >= n;

}

int main() {
    ll a, k, b ,m, n;
    cin >> a >> k >> b >> m >> n;
    ll low = 1, high = (ll)1e18;
    ll ans;

    while(low <= high) {
        ll mid = low + (high - low) / 2;
        if(accept(mid, a, k, b, m, n)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << ans;
}