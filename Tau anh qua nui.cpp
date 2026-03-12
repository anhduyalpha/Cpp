#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Xu li n buoc dau
    int n; cin >> n;    
    long long h = 0; 
    for(int i = 0; i < n; i++) {
        char step; cin >> step;
        if(step == 'U') h++;
        else { 
            h--;
        }
    }
    // Xu li m buoc sau
    int m; cin >> m;
    bool inMount = false;
    long long cur_mount_h = -1;
    long long peak = -1;
    
        // Neu sau n buoc ma h > 0 thi dang tren 1 cai nui
    if(h > 0) {
        cur_mount_h = h;
        inMount = true;
    }
    for(int i = 0; i < m; i++) {
        char step; cin >> step;
        
        if(step == 'U') h++;
        else if(step == 'D') h--;
        // TH1 moi tren nui xuong
        if(h == 0 && inMount == true) {
            peak = max(peak, cur_mount_h);
            // Reset cho nui tiep theo
            inMount = false;
        }
        // TH2 moi len nui
        else if(h > 0 && inMount == false) {
            cur_mount_h = h;
            inMount = true;
        }
        // TH3 dang tren nui
        else if(h > 0 && inMount == true) {
            cur_mount_h = max(cur_mount_h, h);
        }
        // TH4 duoi muc nuoc bien 
        else if(h < 0 && inMount == true) {
            inMount = false;
            cur_mount_h = -1;
        }
        
    }

    if(peak == -1) cout << "NO MOUNTAIN!";
    else {
        cout << peak;
    }
}