#include <bits/stdc++.h>
using namespace std;
#include <string.h>

#define MAX 1000000

int main() {
    int arr[MAX];
    int result[MAX];
    for(int i = 0; i < sizeof(result) / sizeof(int); i++) {
        cout << result[i];
    }
    int target; cin >> target;
    int len = sizeof(arr) / sizeof(int);
    
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
            if(i != j && i + j == target) 
                result[i] = i;
                result[j] = j;
        }
    }
    for(int i = 0; i < sizeof(result) / sizeof(int); i++) {
        cout << result[i];
    }
    
}
