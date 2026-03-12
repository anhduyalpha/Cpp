#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;
    long long *a = new long long[n];
    long long mn = LLONG_MAX, mx =LLONG_MIN;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    sort(a, a + n);
    long long *new_end = unique(a, a+n); //tra ve con tro toi vi tri ket thuc sau khi day cac p.tu khong trung len dau
    
    /* 
    for(long long *p = a; p != new_end; p++) {
        cout << *p << " ";
    } 
    */
    
    long long distinct = new_end - a ; // con tro den vi tri cuoi - tro den vi tri dau = so p.tu
    cout << mx - mn + 1 - distinct;

}