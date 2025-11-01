#include <bits/stdc++.h>
using namespace std;

double sum1(int n, int x) {
    if(n == 0) return 1;
    return pow(x, n) + sum1(n - 1, x);
}

double sum2(int n, int x) {
    if(n == 0) return 1;
    return pow(x, 2*n) + sum2(n - 1, x);
}

double factorial(int k) {
    double fac = 1;
    for(int i = 1; i <= k; i++) {
        fac *= i;
    }
    return fac;
}

double sum3(int n, int x) {
    if(n == 0) return 1;
    return pow(x, n)/factorial(n) + sum3(n-1,x);

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    cout << sum1(n, x) << endl << "\n";
    cout << sum2(n, x) << endl << "\n";
    cout << sum3(n, x) << endl << "\n";
}
