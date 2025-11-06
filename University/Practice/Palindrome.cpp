#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string s) {

    int left = 0; int right = s.size() - 1;

    bool flag = true;

    while(left < right) {
        if(s[right] != s[left]){
            flag = false;
            break;
        }
        left++; right--;
    }
    switch(flag){
        case true : cout << "true"; break;
        case false : cout << "false"; break;
    }

}

int main() {
    string s; getline(cin, s);
    isPalindrome(s);
}