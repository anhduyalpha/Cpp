// Viết chương trình chuẩn hóa câu theo dạng họ tên, biết rằng:
// Các tiếng trong câu cách nhau một khoảng trắng
// Đầu câu và cuối câu không có khoảng trắng; (lưu ý)
// Ký tự đầu tiên của mỗi tiếng viết hoa, các ký tự còn lại viết thường.
// Input:
// -      Chuỗi s
// Output:
// -      Chuỗi s đã chuẩn hóa

#include <iostream>
using namespace std;
#define maxindex 300

int myStrlen(char *str);
void normalization(char *str);

int main() {
    char s[maxindex];
    cin.getline(s, maxindex);

    normalization(s);
    cout << s;

}

int myStrlen(char *str) {
    int i = 0;
    while(str[i++] != '\0');
    return i - 1;
}

void normalization(char *str) {
    int length = myStrlen(str);
    int i = 0;
    int j = 0;

    while(str[i] == ' ') {
        i++;
    }

    while(i < length) {
        if(str[i] != ' ')
            str[j++] = str[i++];
        else {
            str[j++] = ' ';
            while(str[i] == ' ')
                i++;
        }
    }

    if(j > 0 && str[j - 1] == ' ')
        j--;

    str[j] = '\0';

    for(int k = 0; k < j; k++) {
        if(k == 0 || str[k - 1] == ' ') {
            if(str[k] >= 'a' && str[k] <= 'z')
                str[k] = toupper(str[k]);
        }
        else {
            if(str[k] >= 'A' && str[k] <= 'Z')
                str[k] = towlower(str[k]);
        }
    }
}

