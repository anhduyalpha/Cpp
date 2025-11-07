// The smallest factor of a number greater than one cannot be greater than the square root of that number.
// Time Complexity O(sqrt(n))
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    bool flag = true;
    if(n < 2) flag = false;
    if(n % 2 == 0 && n != 2) flag = false;
    else{ 
        for(ll i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0) return false;
        }
    }
    switch(flag){
        case false : cout << n << " is not prime"; break;
        case true : cout << n << " is prime";
    }
}