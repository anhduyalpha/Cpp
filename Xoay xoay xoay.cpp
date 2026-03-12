#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q; cin >> n >> k >> q; k %= n; // theo chu ki
    int *a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < q; i++) {
        int idx;
        cin >> idx;
        cout << a[(idx - k + n) % n] << endl;
    }
    delete[] a;
}