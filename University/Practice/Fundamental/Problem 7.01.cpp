// Người dùng nhập 2 số m và n là số dòng và số cột của một ma trận A (m x n). Người dùng tiếp tục nhập các phần tử của ma trận A. Chương trình xuất ma trận A ra màn hình theo đúng định dạng m dòng và n cột.
// INPUT
// -      2 số nguyên là số dòng, số cột của ma trận A
// -      Giá trị các phần tử của ma trận A là số thực
// OUTPUT
// -    Ma trận A đã nhập


#include <iostream>
using namespace std;
#define maxindex 100

void inputArr(double (*)[maxindex], int &, int &);
void exArr(double [][maxindex], int, int);

int main() {
    double maxtrix[maxindex][maxindex];
    int m, n;
    inputArr(maxtrix, m, n);
    exArr(maxtrix, m, n);
}

void inputArr(double (*matrix)[maxindex], int &m, int &n) {
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

void exArr(double matrix[][maxindex], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl << "\n";
    }
}