// Viết chương trình nhập chuỗi ký tự. Nếu chuỗi nhập vào là chuỗi rỗng, chương trình in ra thông báo “Chuoi rong.”. Ngược lại, chương trình đếm số lần xuất hiện của từng tiếng trong chuỗi.
// Input
// - Chuỗi s.
// Lưu ý:
// Các tiếng cách nhau bởi khoảng trắng.
// Trình biên dịch hiện tại của hệ thống wecode đối với hàm fgets(s, MAX, stdin) sẽ lấy luôn ký tự '\n' hoặc '\r' từ bàn phím.
// Output
// - Số lần xuất hiện của từng tiếng trong chuỗi s
// Lưu ý: Các chuỗi ký tự đầu vào có thể chứa các khoảng trắng thừa ở đầu chuỗi, giữa các ký tự với nhau, hoặc cuối chuỗi.

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}

int myStrlen(char s[], int k) {
    int i = 0;
    while(s[i] != '\0')
        i++;
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

void DemTieng(char s1[]) {
    int n = myStrlen(s1, 0);
    if(n > 0 && s1[n - 1] == '\n') {
        s1[n - 1] = '\0'; 
        n--;
    }

    int left = 0;
    int right = 0;

    while(left < n && s1[left] == ' ') {
        left++;
    }

    while(left < n) {
        if(s1[left] != ' ') {
            s1[right] = s1[left];
            left++; right++;
        }
        else {
            s1[right] = ' ';
            right++;
            while(s1[left] == ' ') left++;
        }
    }

    if(right > 0 && s1[right - 1] == ' ') right--;
    s1[right] = '\0';
    
    // Dem tu bang mang 2 chieu dang a[tu so n][so luong ki tu]
    char words[MAX][MAX];
    int num_words = 0;
    int index = 0;

    for(int i = 0; i <= right; i++) {
        if(s1[i] == ' ' || s1[i] == '\0') {
            words[num_words][index] = '\0';
            num_words++;
            index = 0;
        }
        else {
            words[num_words][index++] = s1[i];
        }
    }

    // Mot vong de check tu hien tai, mot vong chay het mang    
    for(int i = 0; i < num_words; i++) {

        bool is_checked = false;
        for(int j = 0; j < i; j++) {
            if(myStrcmp(words[i], words[j]) == 0) {
                is_checked = true;
                break;
            }
        }

        if(is_checked == true) continue;

        int count = 1;
        for(int k = i + 1; k < num_words; k++) {
            if(myStrcmp(words[i], words[k]) == 0) 
                count++;
        }

        cout << words[i] << ": " << count << endl;

    }
}

void myStrcpy(char s[], int vt, char s1[], int k) { }
void myMemmove(char s[], int vt, int k) { }
int myStrstr(char s[], char s1[]) {return 0;}
void mySubstr(char s[], int b, int count, char ss[]) { }
bool myStrcat(char s1[], char s2[]) {return false;}