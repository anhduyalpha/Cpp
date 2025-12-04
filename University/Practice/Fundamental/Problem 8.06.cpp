// Viết chương trình nhập chuỗi ký tự. Nếu chuỗi nhập vào là chuỗi rỗng, chương trình in ra thông báo “Chuoi rong.”. Ngược lại, chương trình đảo ngược các ký tự của mỗi tiếng trong chuỗi.
// (Lưu ý: Các tiếng trong chuỗi cách nhau bởi khoảng trắng)
// Input
// - Chuỗi s
// Output
// - Thông báo “Chuoi rong.” nếu s rỗng
// - Ngược lại, xuất ra màn hình chuỗi s đã đảo ngược các ký tự của mỗi tiếng

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	fgets(s, MAX, stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

int myStrlen(char s[], int k) {
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

int myStrcmp(char s1[], char s2[]) {
    int i = 0;

    while(1) {
        char c1 = s1[i];
        char c2 = s2[i];

        if(c1 == '\n') c1 = '\0'; 
        if(c2 == '\n') c2 = '\0';
        
        if(c1 != c2) return c1 - c2;
        if(c1 == '\0') return 0;
        i++;
    }
}

void StringReverse(char st[]) {
    
    int cnt = 0;
    while(st[cnt] != '\0') {
        if(st[cnt] == '\n') {
            st[cnt] = '\0';
            break;
        }
        cnt++;
    }
    
    int len = myStrlen(st, 0);
    int start = 0;
    
    for(int i = 0; i <= len; i++) {
        if(st[i] == ' ' || st[i] == '\0') {
            int left = start;
            int right = i - 1;
            
            while(left < right) {
                swap(st[left], st[right]);
                left++; right--;
            }
            start = i + 1;
        }
    }
}
