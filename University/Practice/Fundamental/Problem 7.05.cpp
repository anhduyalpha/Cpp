// Nhập ma trận vuông A (n x n). Tính vết (trace) của A (Vết của ma trận là tổng giá trị các phần tử trên đường chéo chính).
// INPUT
// - 2 số nguyên là số dòng, số cột của ma trận A.
// - Giá trị các phần tử của ma trận A là số thực.
// OUTPUT
// - Vết của ma trận A.

#include <iostream>
using namespace std;
#define maxindex 100

void inputMat(double (*a)[maxindex], int &m, int &n);
void traceMat(double a[][maxindex], int m, int n);

int main() {
    int m, n;
    double a[maxindex][maxindex];
    inputMat(a, m, n);
    traceMat(a, m, n);
}

void inputMat(double (*a)[maxindex], int &m, int &n) {
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void traceMat(double a[][maxindex], int m, int n) {
    double s = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) s += a[i][j];
        }
    }
    cout << s;
}