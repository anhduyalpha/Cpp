// Xoá tất cả các phần tử có giá trị x trong mảng.
// Input
// - Nhập số phần tử của mảng >= 0.
// - Nhập mảng số nguyên dương.
// - Nhập giá trị x.
// Output
// - Xuất mảng vừa xóa.

#include <iostream>
using namespace std;

void NhapMang(int *, int);
void XuatMang(int *, int);
void XoaPhanTu(int *, int &, int);


int main() {
    int n; cin >> n;
	int A[n];
	NhapMang(A, n);
	
	int x; cin >> x;
	XoaPhanTu(A, n, x);
	
	XuatMang(A, n);
	return 0;
}

void XoaPhanTu(int *A, int &n, int x) {
    int size = 0;
    for(int i = 0; i < n; i++) {
        if(A[i] != x) {
            A[size++] = A[i];
        }
    }
    n = size;
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