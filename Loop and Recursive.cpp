#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Bai1(ll x, ll n);
void Bai2(ll x, ll n);
void Bai3(ll x, ll n);
void Bai4(ll x, ll n);
void Bai5(ll x, ll n);
double Bai5_Dequy(ll x, ll n);
void Bai6(ll x, ll n);

int main() {
    long long x, n;
    cin >> x >> n;
    
    Bai1(x, n);
    cout << endl;
    Bai2(x, n);
    cout << endl;
    Bai3(x, n);
    cout << endl;
    Bai4(x, n);
    cout << endl;
    Bai5(x, n);
    cout << endl;

    cout << Bai5_Dequy(x, n) << endl;
    
    cout << endl;
    Bai6(x, n);
    
}

void Bai1(ll x, ll n) {
    // u1 = 1, q = 1/x, n = n + 1
    if(x == 1) {
        cout << n + 1;
        return;
    }
    double q = 1.0 / x;
    double s = (1.0 - pow(q, n + 1))/ (1.0 - q);
    cout << s << endl;
}

void Bai2(ll x, ll n) {
    double mau = 1;
    double s = 0;
    for(int i = 0; i <= n; i++) {
        s += (double)(i + 1) / mau;
        mau = mau * x;
    }
    cout << s << endl;
}

void Bai3(ll x, ll n) {
    double tu = 1;
    double mau = 1;
    double s = 0;
    for(int i = 0; i <= n; i++) {
        s += tu / mau;
        tu = tu * x;
        mau = mau * (i + 1);
    }
    cout << s << endl;
}

void Bai4(ll x, ll n) {
    double tu = x;
    double mau = 1;
    double s = 0;
    int sign = 1;
    for(int i = 1; i <= n; i += 2) {
        s = s + (tu / mau) * sign;
        tu = tu * x * x;
        mau = mau * (i + 1) * (i + 2);
        sign = -sign;
    }
    cout << s << endl;
}

void Bai5(ll x, ll n) {
    double s = 0;
    for(int i = 0; i < n; i++) {
        s = sqrt(2 + s);
    }
    cout << s << endl;
}

double Bai5_Dequy(ll x, ll n) {
    if(n == 0) return 0;
    return sqrt(2 + Bai5_Dequy(x, n - 1));
}

void Bai6(ll x, ll n) {
    double s = 0;
    double dau = sqrt(1);
    for(int i = n - 1; i >= 0; i--) {
        s = sqrt((n - i) + s);
    }
    cout << s << endl;
}
