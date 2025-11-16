// Viết chương trình nhập vào số nguyên n (2 ≤ n ≤ 16). Tạo ma trận vuông với số dòng = số cột = n sao cho phần tử ở dòng i, cột j là số Fibonacci thứ i + j + 1.
// INPUT
// -      Số nguyên n
// OUTPUT
// -     Ma trận vuông với số dòng = số cột = n sao cho phần tử ở dòng i, cột j là số Fiboncci thứ i + j + 1

#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
	
    return 0;
}

int fibo(int n) {
    if(n <= 1) return n;
    return fibo(n-2) + fibo(n-1);
}


void Nhapmang(int a[][MAX], int &n) {
    cin >> n;
}

void format(int a[][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = fibo(i + j + 1);
        }
    }
}

void Xuatmang(int a[][MAX], int n) {

    format(a, n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl << "\n";
    }
}