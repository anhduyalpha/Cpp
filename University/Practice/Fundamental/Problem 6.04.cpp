// Xuất tất cả các số nguyên tố trong mảng, nếu mảng không có số nguyên tố xuất số 0.
// Input
// - Nhập số phần tử n.
// - Nhập mảng một chiều các số nguyên dương có n phần tử.
// Output
// - Xuất tất cả các số nguyên tố trong mảng.
// - Nếu mảng không có số nguyên tố, xuất số 0.

#include <iostream>
#include <cmath>
using namespace std;
#define max 100

void inputArr(int *, int &);
void exArr(int *, const int);
bool isPrime(long long);

int main() {
    int n;
    int a[max];
    inputArr(a, n);
    exArr(a, n);
}

bool isPrime(long long n) {
    if(n < 2) return 0;
    if(n % 2 == 0 && n != 2) return false;
    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0) return 0;
    }
    return 1;
}


void inputArr(int *a, int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

}

void exArr(int *a, const int n) {
    bool flag = true;
    for(int i = 0; i < n; i++) {
        if(isPrime(a[i])) {
            flag = false;
            cout << a[i] << " "; 
        }
    }
    if(flag == true) cout << 0;
}