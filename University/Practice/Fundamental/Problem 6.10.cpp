// Giả sử có 2 mảng a và b đã được sắp xếp theo thứ tự tăng dần.
// Hãy trộn 2 mảng a và b thành mảng c sao cho mảng c vẫn đảm bảo thứ tự tăng dần (không sử dụng thuật toán sắp xếp trên mảng c)
// Input
// - Nhập số phần tử của mảng a, b
// - Nhập mảng a, b.
// Output
// - Xuất mảng c vừa tạo

#include <iostream>
using namespace std;

void NhapMang(int *, int);
void XuatMang(int *, int);
void GopMang(int *, int, int *, int, int *, int );

int main() {
    int n; cin >> n;
	int A[n];
	NhapMang(A, n);
	
	int m; cin >> m;
	int B[m];
	NhapMang(B, m);
	
	int mn = m + n;
	int C[mn];

	GopMang(A, n, B, m, C, mn);
	
	XuatMang(C, mn);
	return 0;
}

void GopMang(int *A, int n, int *B, int m, int *C, int nm) {
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(A[i] < B[j])
            C[k++] = A[i++];
        else {
            C[k++] = B[j++];
        }
    }
    while(i < n)
        C[k++] = A[i++];
    while(j < m)
        C[k++] = B[j++];
}

void NhapMang(int *arr, int index) {
    for(int i = 0; i < index; i++) {
        cin >> arr[i];
    }
}

void XuatMang(int *C, int c) {
    for(int i = 0; i < c; i++) {
        cout << C[i] << " ";
    }
}