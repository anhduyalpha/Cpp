// Giả sử mỗi câu trong chuỗi được kết thúc bởi dấu dấu chấm (.). Nguyên tắc viết dấu chấm câu là trước dấu chấm câu không có khoảng trắng và sau dấu chấm câu có 1 khoảng trắng. Hãy viết chương trình chuẩn hóa dấu chấm câu theo nguyên tắc trên.
// Lưu ý: hàm void myStrcpy(char s[], int vt, char s1[], int k); có tác dụng sao chép mảng ký tự, trong đó s1 là chuỗi nguồn và s là chuỗi đích, k là vị trí bắt đầu trong chuỗi nguồn và vt là vị trí bắt đầu trong chuỗi đích.
// Input:
// -      Chuỗi s
// Output:
// -      Dạng chuẩn hóa của chuỗi s

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];

	fflush(stdin);
	fgets(s,MAX,stdin);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}

int myStrlen(char s[], int k) {
	int len = 0;
	while (s[k + len] != '\0') {
		len++;
	}
	return len;
}

void myStrcpy(char s[], int vt, char s1[], int k) {
	int i = 0;
	while (s1[k + i] != '\0') {
		s[vt + i] = s1[k + i];
		i++;
	}
	s[vt + i] = '\0';
}

void ChenChuoiTaiVitriK(char s[], char s1[], int k) {
	int lenS = myStrlen(s, 0);
	int lenS1 = myStrlen(s1, 0);

	for (int i = lenS; i >= k; i--) {
		s[i + lenS1] = s[i];
	}

	for (int i = 0; i < lenS1; i++) {
		s[k + i] = s1[i];
	}
}

void Chuanhoa(char s[]) {
	int len = myStrlen(s, 0);
	if (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
		s[len - 1] = '\0';
		len--;
	}

	int i = 0;
	while (s[i] != '\0') {
		if (s[i] == '.') {
			while (i > 0 && s[i - 1] == ' ') {
				int j = i - 1;
				while (s[j] != '\0') {
					s[j] = s[j + 1];
					j++;
				}
				i--;
			}

			if (s[i + 1] != '\0') {
				if (s[i + 1] != ' ') {
					char space[] = " ";
					ChenChuoiTaiVitriK(s, space, i + 1);
				}
				else {
					while (s[i + 1] == ' ' && s[i + 2] == ' ') {
						int j = i + 1;
						while (s[j] != '\0') {
							s[j] = s[j + 1];
							j++;
						}
					}
				}
			}
		}
		i++;
	}
}