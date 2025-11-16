// Tìm giá trị lớn thứ hai trong mảng.
// Nếu không có, xuất số 0.
// Input
// - Nhập số phần tử của mảng >= 0.
// - Nhập mảng số nguyên dương.
// Output
// - Giá trị lớn thứ hai trong mảng.
// - Nếu không có, xuất số 0.
#include <iostream>
using namespace std;
using ll = long long;
#define maxindex 10000

void inputArr(int *, int &);
int secondMax(int *, ll);

int main(){
    int a[maxindex];
    int n;
    inputArr(a, n);
    cout << secondMax(a, n);
}

void inputArr(int *a, int &n){
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int secondMax(int *a, ll n) {
    int max1 = 0, max2 = 0;
    for(ll i = 0; i < n; i++) {
        if(max1 < a[i]) max1 = a[i];
    }
    for(ll i = 0; i < n; i++) {
        if(a[i] != max1 && max2 < a[i]) max2 = a[i];
    }
    
    if(max2 == max1) return 0;
    else { return max2; }
}
