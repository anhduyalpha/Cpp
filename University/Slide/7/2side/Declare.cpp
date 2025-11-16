#include <bits/stdc++.h>
using namespace std;
#define maxindex 10000
using ll = long long;

void nhap(int *a, int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void xuat(int *a, const int &n){
    int max = 0, max_2 = 0;
    for(int i = 0; i < n; i++) {
        if(max < a[i])
            max = a[i];
    }

    for(int i = 0; i < n; i++) {
        if(max_2 < a[i] && max_2 != max)
            max_2 = a[i];
    }
    cout << max_2;
}
    

int main(){
    int a[maxindex];
    int n;
    nhap(a, n);
    xuat(a, n);
}