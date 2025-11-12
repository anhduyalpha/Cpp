// Method 2 using modulo operator ( Efficient method )
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcdModulo(ll a, ll b) {
    int s = 0;
    while (b != 0 ) {
        ll temp = b;
        b = a % b;
        a = temp;
        cout << "Temp: " << temp << " B: " << b << " A: " << a << endl; s++;
    }
    cout << "Steps: " << s << endl;
    return a;
}

ll gcdModuloRecursive(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcdModuloRecursive(b, a % b);
}

int main() {
    ll a, b; cin >> a >> b;
    cout << gcdModulo(a, b) << endl;
    cout << gcdModuloRecursive(a, b);
}

