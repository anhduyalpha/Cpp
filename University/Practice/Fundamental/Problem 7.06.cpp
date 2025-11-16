// Nhập ma trận vuông A (n x n). Kiểm tra A có phải là ma trận đường chéo hay không?
// Ma trận đường chéo là ma trận vuông có các phần tử không nằm trên đường chéo chính bằng 0.
// INPUT
// -  2 số nguyên là số dòng, số cột của ma trận A
// -  Giá trị các phần tử của ma trận A là số thực
// OUTPUT
// -  "Yes", nếu A là ma trận đường chéo
// -  "No", nếu A không là ma trận đường chéo

#include <iostream>
using namespace std;
#define maxindex 100

void inputMat(double (*a)[maxindex], int &m, int &n);
void exMat(double a[][maxindex], int m, int n);
bool isdiaMat(double a[][maxindex], int m);

int main() {
    int m, n;
    double a[maxindex][maxindex];
    inputMat(a, m, n);
    exMat(a, m, n);
}

void inputMat(double (*a)[maxindex], int &m, int &n) {
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

bool isdiaMat(double a[][maxindex], int m) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(i != j && a[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

void exMat(double a[][maxindex], int m, int n) {
    
    if(isdiaMat(a, m) == true) cout << "Yes";
    else {
        cout << "No";
    }
}