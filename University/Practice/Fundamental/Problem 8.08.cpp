// Viết chương trình chèn chuỗi s1 vào vị trí k của chuỗi s. 
// Input
// - Dòng đầu tiên là chuỗi s.
// - Dòng thứ 2 là chuỗi s1.
// - Dòng thứ 3 là vị trí k sao cho 0 ≤ k ≤ chiều dài chuỗi s.
// Output
// - Chuỗi sau khi chèn s1 nếu k thỏa điều kiện đã cho.
// - Nếu k không thỏa điều kiện thì xuất ra màn hình chuỗi "Vi tri <k> khong thoa dieu kien."

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	fgets(s, MAX, stdin);
	fgets(s1, MAX, stdin);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else {
        ChenChuoiTaiVitriK(s, s1, k);
    }
}

int myStrlen(char *s, int k) {
    int i = 0;
    while(s[i] != '\0' && s[i] != '\n') 
        i++;
    return i;
}

void myStrcpy(char s[], int vt, char s1[], int k) { }
void mySubstr(char s[], int b, int count, char ss[]) { }
bool myStrcat(char s1[], char s2[]) { return true; }

void ChenChuoiTaiVitriK(char s[], char s1[], int k) {
    // Don dep sach se kkkk
    int lenS = myStrlen(s, k);
    int lenS1 = myStrlen(s1, k);
    
    if(s[lenS] == '\n') {
        s[lenS] = '\0';
    }

    if(s1[lenS1] == '\n') {
        s1[lenS1] = '\0';
    }

    // Doi mang len cho bang kich thuoc nhet mang so 2 vo
    for(int i = lenS; i >= k; i--) {
        s[lenS1 + i] = s[i];
    }

    // Copy mang s1 vo
    for(int i = 0; i < lenS1; i++) {
        s[k + i] = s1[i]; 
    }

    cout << s;
}
