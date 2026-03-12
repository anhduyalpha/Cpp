#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long valleys = 0;
    int h = 0;
    char c;

    for (int i = 0; i < n; i++) {
        cin >> c; // đọc 'U' hoặc 'D', tự bỏ qua khoảng trắng
        if (c == 'U') {
            h++;
            if (h == 0) valleys++; // vừa thoát khỏi vùng dưới mực nước biển
        } else if (c == 'D') {
            h--;
        }
    }
    cout << valleys;
    return 0;
}
