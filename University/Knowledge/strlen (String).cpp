#include <iostream>
using namespace std;
#define MAX 300

int myStrlen(char *);  // Ham lay do dai cua chuoi

int main(){
    char s[MAX];
    cin.getline(s, MAX);
    cout << myStrlen(s);
    return 0;
}

int myStrlen(char *s) {
    int i = 0; 
    while(s[i] != '\0') {
        i++;
    }
    return i;
}