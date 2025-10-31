#include <bits/stdc++.h>
using namespace std;

double sum1(int n) {
    if(n == 1) return 1;
    return pow(n,n) + sum1(n-1);
}

double sum2(int n) {
    double s = 0, fac = 1;
    for(int i = 1; i <= n; i++) {
        fac *= i;
        s += fac;
    }
    return s;
}

double sum3(int n) {
    double s = 0;
    for(int i = 1; i <= n; i++) {
        double sumNum = 0;
        for(int j = 1; j <= i; j++) {
            sumNum += j;
        }
        s += pow(sumNum, -1);
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    cout << sum1(n) << endl << "\n";
    cout << sum2(n) << endl << "\n";
    cout << sum3(n) << endl << "\n";
    
}