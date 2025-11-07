// Every number have a pair of divisor so we can loop till sqrt(n)
// Time complexity O(sqrt(n))

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, s = 0; cin >> n;
    for(ll i = 1; i <= sqrt(n); i++){ 
        if(n % i == 0) {
            s += i;
            cout << "The " << i << " factor is " << i << endl;
            cout << "The another factor is " << n/i << endl;
            if((n/i) != i) {
                s += (n/i);
            }
            if((n/i) == i) 
                cout << "Because both factors is the same." << endl;
            cout << "Update s to: " << s << endl << "\n";
        }
    }
    cout << "Final sum is: " << s;
}
