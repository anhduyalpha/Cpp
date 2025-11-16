// Nhập ma trận vuông A (n x n). Kiểm tra A có phải là ma trận Frobenius hay không.
// Ma trận Frobenius được định nghĩa là ma trận vuông thoả các tính chất sau:
// 1. Tất cả các phần tử trên đường chéo chính bằng 1.
// 2. Có tối đa một cột mà các phần tử dưới đường chéo chính có thể nhận giá trị bất kì.
// 3. Ngoài ra, tất cả các phần tử khác có giá trị bằng 0.
// INPUT
// - 2 số nguyên là số dòng, số cột của ma trận A.
// - Giá trị các phần tử của ma trận A là số thực.
// OUTPUT
// - "Yes", nếu A là ma trận Frobenius.
// - "No", nếu A không là ma trận Frobenius.

#include <bits/stdc++.h>
using namespace std;
#define maxindex 100

void inputArr(double (*a)[maxindex], int &, int &);
bool isFrobenius(double a[][maxindex], int n);

int main() {
    int n, m;
    double a[maxindex][maxindex];
    inputArr(a, n, m);
    // Khong phai ma tran vuong
    if (n != m) {
        cout << "No";
        return 0;
    }
    // Check ma tran Frobenius
    if(isFrobenius(a,n) == true) cout << "Yes";
    else {
        cout << "No";
    }
}

void inputArr(double (*a)[maxindex], int &n, int &m) {
    cin >> n >> m;

    for(int k = 0; k < n*m; k++) {
        cin >> a[k / n][k % n];
    }
}

bool isFrobenius(double a[][maxindex], int n) {
    int indexCol = 0;

    // Check duong cheo chinh
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == i && a[i][j] != 1) return false;
        }
    }

    // Check tren duong cheo chinh
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(i != j && a[i][j] != 0) return false;
        }
    }

    // Check cot dac biet
    for(int i = 0; i < n; i++) {
        bool hasCol = false;
        for(int j = i + 1; j < n; j++) {
            if(a[j][i] != 0) {
                hasCol = true;
                break;
            }
        }
        if(hasCol == true) indexCol++;
        if(indexCol > 1) return false;
    }

    return true;

}

