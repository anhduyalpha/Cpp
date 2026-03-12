#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m ,h ,w;
    cin >> n >> m >> h >> w;
    double mn1 = min(n, m);
    double mn2 = min(h, w);

    int cnt = 0;
    while(true) {
        if(mn1 > mn2) {
            mn1 /= 2;
            cnt++;
        }
        else {
            break;
        }
    }

    double mx1 = max(n, m);
    double mx2 = max(h, w);
    while(true) {
        if(mx1 > mx2) {
            mx1 /= 2;
            cnt++;
        }
        else {
            break;
        }
    }
    cout << cnt;
    
}