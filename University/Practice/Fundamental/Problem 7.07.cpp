// Nhập ma trận vuông A (n x n). Kiểm tra A có phải là ma trận đối xứng hay không.
// Ma trận đối xứng là ma trận vuông có, trong đó hai phần t    ử đối xứng qua đường chéo chính thì bằng nhau,
// INPUT
// -      2 số nguyên là số dòng, số cột của ma trận A
// -      Giá trị các phần tử của ma trận A là số thực
// OUTPUT
// -     "Yes", nếu A là ma trận đối xứng
// -     "No", nếu A không đối xứng

#include <iostream>
using namespace std;
#define maxindex 100

void inputMat(double (*a)[maxindex], int &m, int &n);
bool isPaline(double a[][maxindex], int m);

int main() {
    int m,n;
    double a[maxindex][maxindex];
    inputMat(a, m, n);

    if(isPaline(a, m) == true) cout << "Yes";
    else {
        cout << "No";
    }
}

void inputMat(double (*a)[maxindex], int &m, int &n) {
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

bool isPaline(double a[][maxindex], int m) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(i != j && a[i][j] != a[j][i]) return false;
        }
    }
    return true;
}
