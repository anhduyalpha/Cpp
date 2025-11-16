// Nhập 2 ma trận A (m x n) và B (m x n). Tính tổng A + B của 2 ma trận A và B.
// Input
// - 2 số nguyên m, n là số dòng, số cột của ma trận A.
// - m x n số thực (float) là giá trị các phần tử của ma trận A.
// - 2 số nguyên l, k (với l = m, k = n) là số dòng, số cột của ma trận B.
// - l x k số thực (float) là giá trị các phần tử của ma trận B.
// Output
// - Ma trận kết quả của A + B.

#include <bits/stdc++.h>
using namespace std;
#define maxindex 100

void inputMat(float (*)[maxindex], int &, int &);
void exMat(float (*c)[maxindex], int m, int n);
void sumMat(float c[][maxindex], float a[][maxindex], float b[][maxindex], int m, int n);

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Khai bao
    int m, n;
    typedef float Mat[maxindex][maxindex];
    Mat a, b, c;
    // Goi ham
    inputMat(a, m, n);
    inputMat(b, m, n);
    sumMat(c, a, b, m, n);
    exMat(c, m, n);
}

void inputMat(float (*mat)[maxindex], int &m, int &n) {
    cin >> m >> n;
    for(int i = 0; i < m*n; i++) {
        cin >> mat[i / n][i % n];
    }
    
}

void exMat(float (*c)[maxindex], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl << "\n";
    }
}

void sumMat(float c[][maxindex], float a[][maxindex], float b[][maxindex], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}