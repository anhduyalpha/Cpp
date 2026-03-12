#include <bits/stdc++.h>
using namespace std;
#define n 1000

struct TruongHop {
    int a[2];
    int b[n];
};

int main() {
    int t_case; cin >> t_case;
    int hocsinh = 0;

    TruongHop c[t_case];
    for(int i = 0; i < t_case; i++) {

        for(int j = 0; j < 2; j++) {
            cin >> c[i].a[j];
        } 
        for(int k = 0; k < c[i].a[0]; k++) {
            cin >> c[i].b[k];
        }
        
    }
    for(int m = 0; m < t_case; m++) {
        int cnt = 0;
        int hocsinh = c[m].a[0];
        for(int i = 0; i < hocsinh; i++) {
            if(c[m].b[i] > 0) cnt++;
        }
        if(cnt >= c[m].a[1]) cout << "YES" << endl;
        else {
            cout << "NO" << endl;
        }
    }
}