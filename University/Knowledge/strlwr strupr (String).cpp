
#include <iostream>
using namespace std;
#define MAX 300

int myStrlen(char *);  // Ham lay do dai cua chuoi
void myStrlwr(char *s1, char *s2);  // Ham sao chep chuoi s1 vao s2 roi bien s2 thanh chuoi in thuong.
void myStrupr(char *s1, char *s2);  // Ham sao chep chuoi s1 vao s2 roi bien s2 thanh chuoi in HOA.

int main(){
    char s1[MAX], s2[MAX];
    cin.getline(s1, MAX);
    cout << s1 << "\n";

    myStrlwr(s1, s2);
    cout << s2 << "\n";

    myStrupr(s1, s2);
    cout << s2 << "\n";
    return 0;
}

int myStrlen(char *str) {
    int i = 0; 
    while(str[i] != '\0') 
        i++;
    return i;
}

void myStrlwr(char *s1, char *s2) {
    int i, length = myStrlen(s1);
    for(i = 0; i < length; i++) {
        s2[i] = tolower(s1[i]);
    }
    s2[i] = '\0';

}

void myStrupr(char *s1, char *s2) {
    int i, length = myStrlen(s1);
    for(i = 0; i < length; i++) {
        s2[i] = toupper(s1[i]);
    }
    s2[i] = '\0';

}