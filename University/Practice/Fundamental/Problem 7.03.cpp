// Cho ma trận vuông gồm n dòng và n cột lưu trữ các số nguyên (0 < n ≤ 100). Kiểm tra ma trận trên có phải là ma trận đơn vị không?
// Định nghĩa: Ma trận đơn vị có số chiều n là một ma trận (n x n)  trong đó mọi phần tử trên đường chéo chính bằng 1 và tất cả những phần tử khác đều bằng 0.
// INPUT
//  -Dãy các số nguyên trong đó: (Giả sử luôn thỏa điều kiện nhập)
// - Số nguyên không âm đầu tiên: n dòng, n cột của ma trận
// - Các số nguyên còn lại: giá trị của các phần tử của ma trận
// OUTPUT
// - Xuất true nếu là ma trận đơn vị. Ngược lại xuất false

#include <iostream>
using namespace std;
#define MAXR 100
#define MAXC 100

void NhapMaTran(int a[MAXR][MAXC], int &n);
bool isMaTranDonVi(int a[MAXR][MAXC], int n);

int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout <<  std::boolalpha << isMaTranDonVi(a, n);
    return 0;
}

void NhapMaTran(int a[MAXR][MAXC], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

bool isMaTranDonVi(int a[MAXR][MAXC], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j && a[i][j] != 1) return false;
            if(i != j && a[i][j] != 0) return false;
        }
    }
    return true;
}
