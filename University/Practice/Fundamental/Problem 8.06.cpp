// Viết chương trình nhập chuỗi ký tự. Nếu chuỗi nhập vào là chuỗi rỗng, chương trình in ra thông báo “Chuoi rong.”. Ngược lại, chương trình đảo ngược các ký tự của mỗi tiếng trong chuỗi.
// (Lưu ý: Các tiếng trong chuỗi cách nhau bởi khoảng trắng)
// Input
// - Chuỗi s
// Output
// - Thông báo “Chuoi rong.” nếu s rỗng
// - Ngược lại, xuất ra màn hình chuỗi s đã đảo ngược các ký tự của mỗi tiếng

#include <bits/stdc++.h>
using namespace std;
#define MAX 300

int myStrcmp(char *s1, char *s2);
void myStrrev_word(char *s);
int myStrlen(char *s);

int main() {
    char s[MAX];
    cin.getline(s, MAX);

    if(myStrcmp(s, "") == 0) {
		cout << "Chuoi rong." << endl;
    }
    else {
        myStrrev_word(s);
    }
}

int myStrlen(char *s) {
    int i = 0;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}

int myStrcmp(char *s1, char *s2) {
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0') {
        if(s1[i] != s2[i])
            return s1[i] - s2[i];   
        i++;
    }
    return s1[i] - s2[i];
}

void myStrrev_word(char *s) {
    int len = myStrlen(s);
    int start = 0;

    for(int i = 0; i <= len; i++) {
        if(s[i] == ' ' || s[i] == '\0') {

            int left = start;
            int right = i - 1;

            while(left < right) {
                swap(s[left], s[right]);
                left++; right--;
            }
            start = i + 1;
        }
    }
    cout << s;
}
