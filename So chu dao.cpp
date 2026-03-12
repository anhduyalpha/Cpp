#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a;
    int num = 0;
    getline(cin, a);
    for(unsigned char c : a) {
        if(isdigit(c)) num += c - '0';
    }
    while(num > 11) {
        int n = num;
        int sum = 0;
        while(n > 0) {
            sum += n % 10;
            n /= 10; 
        }
        num = sum;
    }
    cout << num;
}