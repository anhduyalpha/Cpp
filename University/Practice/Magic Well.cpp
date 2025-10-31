#include <bits/stdc++.h>
using namespace std;

long long return_throw(int a, int b, int n){
    int c, s;
    s = 0;
    for(int i = 1; i <= n; i++){
        c = a*b;
        a++, b++;
        s += c; 
    }
    return s;
}

int main(){
    int a, b, n; 
    cin >> a >> b >> n;
    cout << return_throw(a, b, n);

}