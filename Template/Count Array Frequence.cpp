#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &i : arr) cin >> i;
    

    sort(arr.begin(), arr.end());
    int temp = arr[0];
    int cnt = 0;
    vector<int> count;
    for(int num : arr) {
        if(temp == num) {
            cnt++;
        }

        else {
            count.push_back(cnt);
            cnt = 0;
            temp = num;
        }
    }
    count.push_back(cnt);


    auto it = unique(arr.begin(), arr.end());
    arr.erase(it, arr.end());
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "-" << count[i] << " " << endl;
    }
}