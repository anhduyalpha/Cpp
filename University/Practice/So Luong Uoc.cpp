#include <bits/stdc++.h> 
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n; cin >> n;
    long long origin = n;
    long long s = 0;
    
    while(n > 0) {
        int temp = n % 10;
        if(temp != 0 && origin % temp == 0)
            s++ ;
        n /= 10;
    }
    cout << s;
}