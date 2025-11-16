// // Nhân 2 ma trận
// INPUT
// - 2 số nguyên m, n là số dòng, số cột của ma trận A.
// - m x n số thực (float) là giá trị các phần tử của ma trận A.
// - 2 số nguyên l, k (với l = n) là số dòng, số cột của ma trận B.
// - l x k số thực (float) là giá trị các phần tử của ma trận B.
// OUTPUT
// - Ma trận kết quả của AB

#include <bits/stdc++.h>
using namespace std;
#define maxindex 100

void inputMat(float (*)[maxindex], int &, int &);
void multiMat(float (*c)[maxindex], float(*)[maxindex], float(*)[maxindex], int, int, int);
void exMat(float (*c)[maxindex], int m, int k);

int main() {
    int m, n, k;
    typedef float Mat[maxindex][maxindex];
    Mat a, b, c;

    inputMat(a, m, n);
    inputMat(b, n, k);
    multiMat(c, a, b, m, n, k);
    exMat(c, m, k);
}

void inputMat(float (*mat)[maxindex], int &row, int &col) {
    cin >> row >> col;
    for(int i = 0; i < row*col; i++) {
        cin >> mat[i / col][i % col];
    }
}

void exMat(float (*c)[maxindex], int m, int k) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl << "\n";
    }
}

void multiMat(float (*c)[maxindex], float(*a)[maxindex], float(*b)[maxindex], int m, int n, int k) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
             c[i][j] = 0;
             for(int h = 0; h < n; h++) {
                c[i][j] += a[i][h] * b[h][j];
             }
        }
    }
}
