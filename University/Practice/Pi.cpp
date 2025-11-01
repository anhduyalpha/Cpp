#include <bits/stdc++.h>
using namespace std;

double cal_pi(int n) {
    if(n == 0) return 1;
    return pow(-1, n)/(2*n +1) + cal_pi(n-1);
}
int main() {
    int n; cin >> n;
    cout << 4.0*cal_pi(n);
}