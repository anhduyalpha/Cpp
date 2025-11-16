// Tìm giá trị lớn nhất (max) của mảng, cho biết trong mảng có bao nhiêu phần tử có giá trị bằng max.
// Input
// - số phần tử của mảng.
// - Nhập mảng số nguyên.
// Output
// - Giá trị max.
// - Số phần tử bằng max
#include <iostream>
#include <cmath>
using namespace std;
#define maxindex 100

void inputArr(int *, int &);
void exArr(int *, const int);

int main() {
    int n;
    int a[maxindex];
    inputArr(a, n);
    exArr(a, n);
}

void inputArr(int *a, int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

}

void exArr(int *a, const int n) {
    int max = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if(max < a[i])
            max = a[i];
    }
    cout << max << endl << "\n";

    for(int i = 0; i < n; i++) {
        if(max == a[i])
            cnt++;
    }
    cout << cnt;
}