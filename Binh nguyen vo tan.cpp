#include <bits/stdc++.h>
using namespace std;
#define index 600

void inMat(int (*a)[index], int &n, int &m);
void count(int a[][index], int n, int m);

int main() {
    int n, m;
    int a[index][index];
    inMat(a, n, m);
    count(a, n, m);    
}

void inMat(int (*a)[index], int &n, int &m) {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

void count(int a[][index], int n, int m) {
    int cnt = 0, best = -1, ways = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            cnt = 0;
            for(int k = 0; k < m; k++) {
                if(a[i][k] || a[j][k]) {
                    cnt++;
                }
            }
            if(cnt > best) {
               best = cnt;
               ways = 1;  
            } 
            else if(cnt == best) ways++;
        }
    }
    cout << best << endl << ways;
}
