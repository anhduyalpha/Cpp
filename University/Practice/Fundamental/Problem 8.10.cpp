// Giả sử 2 biến s1 và s2 chỉ lưu được tối đa 254 ký tự. Viết chương trình nhập 2 chuỗi ký tự s1 và s2. Viết hàm nối chuỗi s2 vào sau chuỗi s1.
// INPUT                                              
// -   2 chuỗi s1 và s2
// OUTPUT
// -   Chuỗi s1 sau khi đã nối s2 vào cuối nếu dung lượng bộ nhớ cấp phát cho s1 đủ để lưu chuỗi kết quả sau khi nối, hoặc
// -   Thông báo “Khong noi duoc. Khong du bo nho.”  nếu bộ nhớ cấp phát cho s1 không đủ để lưu chuỗi kết quả sau khi nối.


#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	fgets(s1, MAX, stdin);
	fgets(s2, MAX, stdin);
	bool kt = myStrcat(s1, s2);

    switch (kt) {
        case true: cout << s1; break;
        case false: cout << "Khong noi duoc. Khong du bo nho.";
    }
}

int myStrlen(char s[]) {
    int i = 0;
    while(s[i] != '\0') 
        i++;
    return i;
}

bool myStrcat(char s1[], char s2[]) {
    int len1 = myStrlen(s1);
    int len2 = myStrlen(s2);

    if (len1 > 0 && s1[len1 - 1] == '\n') {
        s1[len1 - 1] = '\0';
        len1--; // Giảm độ dài đi 1
    }

    if (len2 > 0 && s2[len2 - 1] == '\n') {
        s2[len2 - 1] = '\0';
        len2--; // Giảm độ dài đi 1
    }

    if(len1 + len2 > MAX) return false;

    for(int i = 0; i < len2; i++) {
        s1[i + len1] = s2[i];
    }

    s1[len1 + len2] = '\0';
    
    return true;
}
