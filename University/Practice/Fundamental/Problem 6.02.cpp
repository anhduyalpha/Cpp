// Tạo mảng một chiều a bao gồm n số nguyên tố theo thứ tự tăng dần. Nhập vào chữ số y (0 ≤ y ≤ 9). Tìm xem trong mảng a có bao nhiêu phần tử chứa số y.
// Input
// - Dòng đầu tiên là số nguyên y.
// - Dòng tiếp theo là số phần tử của mảng a.
// Output
// - Số phần tử chứa y có trong mảng a.

#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);


int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}

bool isPrime(int n) {
    if(n < 2) return 0;
    if(n % 2 == 0 && n != 2) return 0;
    for(int i = 3; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}


void NhapmangSNT(int a[], int &n) {
    cin >> n;
    int i = 0;
    for(int x = 0; ; x++) {
        if(isPrime(x)) {
            a[i] = x;
            i++;
        }
        if(i == n) break;
    }
}

int SoPhanTuChuaY(int a[], int n,int y) {
    int unit, cnt = 0;
    for(int i = 0; i < n; i++) {
        while(a[i] > 0) {
            unit = a[i] % 10;
            a[i] /= 10;
            if(unit == y){
                cnt++;
                break;
            }
        }
    }
    return cnt;
}