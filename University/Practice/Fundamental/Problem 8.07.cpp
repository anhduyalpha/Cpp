// Viết chương trình nhập chuỗi ký tự. Nếu chuỗi nhập vào là chuỗi rỗng, chương trình in ra thông báo "Chuoi rong.". Ngược lại, chương trình đảo ngược các tiếng có trong chuỗi (Lưu ý: Các tiếng trong chuỗi cách nhau bởi khoảng trắng).
// Input
// - Chuỗi s.
// Output
// - Thông báo “Chuoi rong.” nếu s rỗng.
// - Ngược lại, xuất ra màn hình chuỗi s đã đảo ngược các tiếng.
          
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
// void myStrcpy(char s[], int vt, char s1[], int k);
// void mySubstr(char s[], int b, int count, char ss[]);
// bool myStrcat(char s1[], char s2[]);
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
    char words[MAX][MAX];
    int num_words = 0;
    int character_index = 0;
    int len = myStrlen(st, 0);

    if(len > 0 && st[len-1] == '\n') {
        st[len-1] = '\0';
        len--;
    }

    for(int i = 0; i <= len; i++) {
        if(st[i] != ' ' && st[i] != '\0') {
            words[num_words][character_index] = st[i];
            character_index++;
        }
        else {
            words[num_words][character_index] = '\0';
            num_words++;
            character_index = 0;
        }
    }

    int index = 0;
    for(int i = num_words - 1; i >= 0; i--) {
        int mat_index = 0;
        while(words[i][mat_index] != '\0') {
            st[index] = words[i][mat_index];
            index++;
            mat_index++;
        }

        if(i > 0) {
            st[index] = ' ';
            index++;
        }
    }
    st[index] = '\0';

}
