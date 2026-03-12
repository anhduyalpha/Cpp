#include <iostream>
using namespace std;

// --- 1. NHÓM CƠ BẢN ---
int my_strlen(const char *s);
void my_strcpy(char *dest, const char *src);
void my_strcat(char *dest, const char *src);
int my_strcmp(const char *s1, const char *s2);

// --- 2. NHÓM BIẾN ĐỔI ---
void my_strrev(char *s);             // Đảo ngược
void my_strupr(char *s);             // Viết hoa toàn bộ
void my_strlwr(char *s);             // Viết thường toàn bộ
int my_atoi(const char *s);          // Chuyển chuỗi thành số nguyên

// --- 3. NHÓM TÌM KIẾM (Nâng cao) ---
char* my_strchr(char *s, char c);    // Tìm ký tự c trong s
char* my_strstr(char *s, char *sub); // Tìm chuỗi con sub trong s

int main() {
    // Cấp phát bộ nhớ đủ lớn để test nối chuỗi
    char s1[100] = "hello"; 
    char s2[] = "WORLD";
    char s3[] = "12345";
    char s4[] = "ban A dang hoc C++ rat cham chi";

    cout << "--- DEMO CAC HAM ---" << endl;
    
    // 1. Co ban
    cout << "Do dai s1: " << my_strlen(s1) << endl;
    
    // 2. Noi chuoi
    my_strcat(s1, " "); // Nối dấu cách
    my_strcat(s1, s2);  // Nối s2 vào
    cout << "Noi chuoi (strcat): " << s1 << endl; // "hello WORLD"

    // 3. Bien doi Hoa/Thuong
    my_strlwr(s2);
    cout << "Viet thuong s2 (strlwr): " << s2 << endl; // "world"
    
    my_strupr(s1);
    cout << "Viet hoa s1 (strupr): " << s1 << endl;   // "HELLO WORLD"

    // 4. Dao nguoc
    my_strrev(s1);
    cout << "Dao nguoc s1 (strrev): " << s1 << endl; // "DLROW OLLEH"

    // 5. Chuyen chuoi thanh so (atoi)
    int number = my_atoi(s3);
    cout << "Chuyen '" << s3 << "' thanh so + 1: " << number + 1 << endl;

    // 6. Tim kiem chuoi con (strstr) - RẤT QUAN TRỌNG
    // Tìm chữ "hoc" trong câu s4
    char *kq = my_strstr(s4, (char*)"hoc");
    if (kq != NULL) {
        cout << "Tim thay 'hoc' tai vi tri: " << kq - s4 << endl; // Trừ địa chỉ để ra index
        cout << "Chuoi tu vi tri tim thay: " << kq << endl;
    } else {
        cout << "Khong tim thay!" << endl;
    }

    return 0;
}

// ========================================================
//              ĐỊNH NGHĨA CHI TIẾT CÁC HÀM
// ========================================================

// 1. Độ dài
int my_strlen(const char *s) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

// 2. Copy (Gán dest = src)
void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// 3. Nối (Thêm src vào đuôi dest)
void my_strcat(char *dest, const char *src) {
    int i = my_strlen(dest); // Tìm vị trí cuối của dest
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Đừng quên cái này!
}

// 4. So sánh
int my_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}

// 5. Đảo ngược
void my_strrev(char *s) {
    int len = my_strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }
}

// 6. Viết hoa (Chỉ đổi a-z thành A-Z)
void my_strupr(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
    }
}

// 7. Viết thường (Chỉ đổi A-Z thành a-z)
void my_strlwr(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
}

// 8. Chuyen chuoi sang so (String to Int) -> Hay gặp trong đề thi
int my_atoi(const char *s) {
    int res = 0;
    int sign = 1; // Dấu (âm hay dương)
    int i = 0;

    // Bỏ qua khoảng trắng đầu (nếu có)
    while (s[i] == ' ') i++;

    // Xử lý dấu
    if (s[i] == '-') { sign = -1; i++; }
    else if (s[i] == '+') { i++; }

    // Duyệt qua các ký tự số
    while (s[i] >= '0' && s[i] <= '9') {
        // Công thức: Số cũ * 10 + số mới
        // '0' trong ASCII là 48. Muốn ra số nguyên phải trừ '0'
        res = res * 10 + (s[i] - '0');
        i++;
    }
    return res * sign;
}

// 9. Tìm ký tự trong chuỗi (Trả về con trỏ tới vị trí tìm thấy)
char* my_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) return s; // Trả về địa chỉ hiện tại
        s++;
    }
    return NULL; // Không thấy
}

// 10. Tìm chuỗi con trong chuỗi mẹ (Quan trọng nhất phần nâng cao)
char* my_strstr(char *s, char *sub) {
    if (*sub == '\0') return s; // Chuỗi con rỗng

    while (*s != '\0') {
        // Nếu ký tự đầu trùng, bắt đầu kiểm tra các ký tự sau
        if (*s == *sub) {
            char *ptrS = s;
            char *ptrSub = sub;
            
            // Duyệt tiếp xem có trùng hết không
            while (*ptrS != '\0' && *ptrSub != '\0' && *ptrS == *ptrSub) {
                ptrS++;
                ptrSub++;
            }
            
            // Nếu duyệt hết chuỗi con (tức là trùng hoàn toàn)
            if (*ptrSub == '\0') return s;
        }
        s++;
    }
    return NULL; // Không thấy
}