// Viết chương trình nhập chuỗi ký tự. Nếu chuỗi nhập vào là chuỗi rỗng, chương trình in ra thông báo “Chuoi rong.”. Ngược lại, chương trình đếm số lần xuất hiện của từng ký tự trong chuỗi.
// Thứ tự in của các ký tự tuân theo thứ tự mà lần đầu các ký tự đó xuất hiện trong chuỗi. Ví dụ: Chuỗi "acbcbc" thì in theo thứ a -> c -> b vì a xuất hiện trước c và c xuất hiện trước b.
// Input:
// -      Chuỗi s
// Output:
// -      Số lần xuất hiện của từng ký tự trong chuỗi s

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);	//Nhap chuoi s	
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

void DemKyTu(char s[]) {
    int k, count[MAX];
    int length = myStrlen(s, k);

    for(int i = 0; i < length; i++) {
        bool is_appear = false;
        
        for(int j = 0; j < i; j++) {
            if(s[i] == s[j]) {
                is_appear = true;
                break;
            }
        }

        if(is_appear == true) {
            continue;
        }

        int count = 0;
        for(int k = 0; k < length; k++) {
            if(s[k] == s[i])
                count++;
        }
        cout << s[i] << ": " << count << endl << "\n";
    }
}

int myStrcmp(char s1[MAX], char s2[MAX]) {
    int i = 0;

    while(1) {
        char c1 = s1[i];
        char c2 = s2[i];

        // MẸO: Ép ký tự xuống dòng thành ký tự kết thúc chuỗi
        if (c1 == '\n' || c1 == '\r') c1 = '\0';
        if (c2 == '\n' || c2 == '\r') c2 = '\0';

        if(c1 != c2) {
            return c1 - c2;
        }
        if(c1 == '\0') {
            return 0;
        }
        i++;
    }
    return s1[i] - s2[i];
}

int myStrlen(char s[], int k) {
    int i = 0;
    while(s[i] != '\0' && s[i] != '\n' && s[i] != '\r') {
        i++;
    }
    return i;
}
