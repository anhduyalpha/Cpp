#include <iostream>
using namespace std;
#define MAX 300

void myStrrev(char *s1, char *s2);  // Ham sao chep chuoi s1 vao s2 roi dao nguoc chuoi s2

int main(){
    char s1[MAX], s2[MAX];
    cin.getline(s1, MAX);

    myStrrev(s1, s2);
    cout << s1 << "\n";
    cout << s2;
    return 0;
}

int dodai(char *str) {
    int i = 0;
    while(str[i++] != '\0');
    return i - 1;

}

void myStrrev(char *s1, char *s2) {
    int i = 0, length = dodai(s1);
    
    while(s1[i] != '\0') {
        s2[i] = s1[length - 1 - i];
        i++;
    }
    s2[i] = '\0';
}



