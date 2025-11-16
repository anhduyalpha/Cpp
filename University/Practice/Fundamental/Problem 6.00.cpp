// Nhập mảng nguyên dương gồm n phần tử, hãy tính tổng các phần tử trong mảng.
// Input
// - Nhập số phần tử của mảng > 0.
// - Nhập mảng số nguyên dương.
// Output
// - Xuất tổng các phần tử có trong mảng.

#include <iostream>
using namespace std;
#define max 1000

void inputArr(int *, int &);
void sumArr(int *, const int);

int main() {
    int a[max];
    int n;
    inputArr(a, n);
    sumArr(a, n);
}


void inputArr(int* a, int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void sumArr(int *a, const int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        s += a[i];
    }
    cout << s;
}



