#include <bits/stdc++.h>
using namespace std;
#define maxindex 100

void nhap(int *a, int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void xuat(int *a, const int &n){
    for(int i = 1; i < n; i += 2){
        cout << a[i] << " ";
    }
}

int main(){
    int a[maxindex];
    int n;
    nhap(a, n);
    xuat(a, n);
}