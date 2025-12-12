
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Method 1
    struct diem {
        int x, y;
    } A;
    cout << A.x;
    cout << A.y;


    // Method 2
    struct diem2 {
        int x, y;
    } *B;
    cout << B -> x;
    cout << B -> y;
}