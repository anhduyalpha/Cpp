// Nhập mảng nguyên dương a[n] và 2 số nguyên dương 0 <= p <= n - 1, k <= n - p.
// Hãy hủy k phần tử trong mảng A bắt đầu từ chỉ số p.
// Chỉ số mảng bắt đầu từ 0.
// Input
// -         Nhập số phần tử của mảng > 0.
// -         Nhập mảng số nguyên dương.
// -         Nhập p
// -         Nhập k
// Output
// -         Xuất mảng vừa xóa.


#include <iostream>
using namespace std;

void NhapMang(int *, int);
void XuatMang(int *, int);
void XoaKPhanTuTuViTriP(int *, int &, int, int);


int main() {
    int n; cin >> n;
	int A[n];
	NhapMang(A, n);
	
	int p, k; cin >> p >> k;
	XoaKPhanTuTuViTriP(A, n, p, k);
	
	XuatMang(A, n);
	return 0;
}

void XoaKPhanTuTuViTriP(int *A, int &n, int p, int k) {
    for(int i = p; i < n - k; i++) {
        A[i] = A[i + k];
    }
    n -= k;
}


void NhapMang(int *A, int n) {
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

}

void XuatMang(int *A, int n) {
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}