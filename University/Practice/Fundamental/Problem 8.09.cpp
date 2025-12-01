// Nhập 2 chuỗi ký tự s1 và s2 có chiều dài tối đa 254 ký tự. So sánh 2 chuỗi s1 và s2.
// INPUT                                              
// -   2 chuỗi s1 và s2
// OUTPUT
// -  -1: nếu s1 < s2
// -   0: nếu s1 và s2 giống nhau
// -   1: nếu s1 > s2

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	fgets(s1, MAX, stdin);
	fgets(s2, MAX, stdin);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}

int len(char *s) {
    int i = 0;
    while(s[i] != '\0') 
        i++;
    return i;
}

int myStrcmp(char s1[], char s2[]) {
    int len1 = len(s1);
    int len2 = len(s2);
    int i;

    if(s1[len1] == '\n') s1[len1] = '\0';
    if(s2[len2] == '\n') s2[len2] = '\0';

    while(1) {
        char c1 = s1[i];
        char c2 = s2[i];

        if(c1 != c2) {
            if(c1 > c2) return 1;
            else { return -1; }
        }

        if(c1 == c2) {
            if(c1 == '\0') return 0;
        }

        i++;
    }
}