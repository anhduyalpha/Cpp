// Nhận vào hai chuỗi siêu to khổng lồ s1 và s2. Trong trường hợp lý tưởng, chúng ta có thể bỏ đi (hoặc không làm gì) một (hoặc nhiều) ký tự trong chuỗi s1 để đạt được chuỗi s2.

// Nhận vào chuỗi s2 cần tìm và N chuỗi s1 khác nhau. Bạn hãy kiểm tra xem liệu chúng ta có thể tìm được chuỗi s2 trong chuỗi s1 không nhé.

// -   Nếu có thì in ra "CO"
// -   Ngược lại in ra "KHONG"
// Input
// -   Dòng đầu tiên, số nguyên dương N thể hiện số lượng chuỗi s1 khác nhau sẽ được nhập.
// -   Dòng thứ hai, chuỗi s2 cần tìm.  (0 < len(s2) <= 100000)
// -   N dòng tiếp theo, mỗi dòng tương đương với một chuỗi s1 riêng biệt. (0 < len(s1) <= 100000)
// Output
// -   N dòng, mỗi dòng thể hiện kết quả tìm kiếm chuỗi s2 trong chuỗi s1 tương ứng.

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if (!(cin >> n)) return 0;
    string s2;
    cin >> s2;
    int len2 = s2.length();
    while (n--) {
        string s1;
        cin >> s1; 
        int index2 = 0;
        bool found = false;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] == s2[index2]) {
                index2++; 
            }
            if (index2 == len2) {
                found = true;
                break; 
            }
        }
        if (found) {
            cout << "CO" << "\n";
        } else {
            cout << "KHONG" << "\n";
        }
    }
    return 0;
}