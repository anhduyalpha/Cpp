// Method 1 using subtraction ( Trash method )
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcdSubtraction(ll a, ll b) {
    int s = 0;
    while( a != b ) {
        a > b ? a -= b : b -= a;
        cout << "A: " << a << " B: " << b << endl; s++;
    }
    cout << "Steps: " << s << endl;
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b; cin >> a >> b;
    cout << gcdSubtraction(a, b);
}