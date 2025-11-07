#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

bool isPrime(ll idex){
    if(idex < 2) return false;
    if(idex % 2 == 0 && idex != 2) return false;
    else {
        for(int i = 3; i <= sqrt(idex); i += 2){
            if(idex % i == 0) return false;
        }
    }
    return true;
}

int main(){
    ll n, temp = 2, cnt = 0; cin >> n;
    for(ll i = 2; i <= n; i++){
        if(isPrime(i) == true){
            if((i - temp) == 2) { 
                cout << temp << ", " << i << endl; 
                cnt++;
            }
            temp = i;
        }
    }
    cout << "Tong: "<< cnt << " cap so sinh doi < " << n;

}