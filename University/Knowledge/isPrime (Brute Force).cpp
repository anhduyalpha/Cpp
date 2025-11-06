// Using brute force check if the num is divisible by more than 2 times
// Time complexity O(n)

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, cnt = 0; cin >> n;
    
    if(n <= 1) 
        cout << n << " is not prime number";
    
    else { 
        for(int i = 1; i <= n; i++) {
            if(n % i == 0) 
                cnt++;
        }
        if(cnt > 2) 
            cout << n << " is not prime number";
        else 
            cout << n << " is prime number";
    }
}