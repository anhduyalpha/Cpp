#include <iostream>
using namespace std;

void horizontal_invert(int a[][100], int n, int m) {
    int b[100][100];
    int k = 0;
    int h = 0;
    for(int i = n - 1; i >= 0; i--) {
        h = 0;
        for(int j = m - 1; j >= 0; j--) {
            b[k][h] = a[i][j];
            ++h;
        }
        ++k;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            a[i][j] = b[i][j];
        }
    }
}

void input(int a[][100], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

void output(int a[][100], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    
    int a[100][100];
    
    input(a, n, m); //Hàm này đã được code chuẩn không thể chỉnh, sinh viên không cần quan tâm
    
    horizontal_invert(a, n, m);

    output(a, n, m);//Hàm này đã được code chuẩn không cần chỉnh, sinh viên không cần quan tâm
    
    return 0;
}
