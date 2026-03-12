#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void input(vector<vector<int>> &mat) {
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[0].size(); j++) {
            cin >> mat[i][j];
        }
    }
}

void output(const vector<vector<int>> &mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    for(const auto &rows : mat) {
        for(const auto &cols : rows) {
            cout << cols << " ";
        }
        cout << endl;
    }
}
 
int main() {
    int n,m; cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    input(mat);
    output(mat);
}   