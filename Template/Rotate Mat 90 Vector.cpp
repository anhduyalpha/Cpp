#include <bits/stdc++.h>
using namespace std;

void rotate90(vector<vector<int>> &mat) {
    int n = mat.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(i != j) {
                swap(mat[i][j], mat[j][i]);
            } 
        }
    }
    for(int i = 0; i < n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

void input(vector<vector<int>> &mat, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
        cin >> mat[i][j];
    }
}
    
void output(vector<vector<int>> &mat, int n) { 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n; cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    input(mat, n);
    rotate90(mat);
    output(mat, n);

}