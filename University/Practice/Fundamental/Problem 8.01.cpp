// Viết chương trình nhập vào chuỗi ký tự không bao gồm số. Nếu chuỗi chứa số thì xuất ra màn hình thông báo chuỗi nhập vào không hợp lệ. Nếu chuỗi vừa nhập hợp lệ thì xuất chuỗi ra màn hình.
// Input:
// -      Chuỗi s
// Output:
// -      Thông báo "CHUOI KHONG HOP LE." nếu chuỗi nhập vào có chứa chữ số.
// -     Ngược lại, xuất chuỗi vừa nhập

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char *s);
void checkNum(char *s, int length);

int main() {
    char a[MAX];
    cin.getline(a, MAX);

    int length = myStrlen(a);
    checkNum(a, length);

}

int myStrlen(char *s) {
    int i = 0;
    while(s[i++] != 0);
    return i - 1;
}

void checkNum(char *s, int length) {
    bool flag = true;
    for(int i = 0; i < length; i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            flag = false;
            break;
        }
    }

    switch (flag) {
        case true: cout << s; break;
        case false: cout << "CHUOI KHONG HOP LE.";
    }
}