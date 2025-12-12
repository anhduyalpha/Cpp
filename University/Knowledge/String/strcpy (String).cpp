#include <iostream>
using namespace std;
#define MAX 300

void myStrcpy(char *s1, char *s2);  // Ham copy chuoi s1 vao chuoi s2

int main(){
    char s1[MAX], s2[MAX];
    cin.getline(s1, MAX);
    myStrcpy(s1, s2);
    cout << s2;
    return 0;
}

void myStrcpy(char *s1, char *s2) {
    int i = 0;
    while(s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }    
    s2[i] = '\0';

}

