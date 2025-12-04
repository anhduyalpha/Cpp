// Lịch của Q
// Sau khi mua chiếc đồng hồ thì Q mới chợt nhận ra là nó chỉ xem được giờ chứ không thể xem ngày tháng năm. Ngay lập tức, Q ghé cửa hàng gần nhà để mua một cái lịch treo tường điện tử.

// Lại thêm một tình huống khá trớ trêu là cái lịch mà Q mua chỉ hiển thị ngày tháng năm theo định dạng dd/mm/yyyy (ví dụ: 02/09/2017). Trong khi đó, Q đang học AV1 nên muốn đổi sang chế độ hiển thị ngày tháng năm theo tiếng Anh để cải thiện trình độ ngoại ngữ của mình (ví dụ: 02/09/2017 -> September 2nd, 2017).

// Các bạn hãy giúp Q lập trình lại lịch điện tử để có thể hiển thị ngày tháng năm theo định dạng mong muốn.
// Input
// -        Chuỗi ký tự thể hiện ngày tháng năm theo dạng dd/mm/yyyy
// Output
// -       Chuỗi ký tự thể hiện ngày tháng năm theo định dạng Q mong muốn

#include <iostream>
using namespace std;

int main() {
    char s[20];
    cin >> s;
    int day = (s[0] - '0') * 10 + (s[1] - '0');
    int month = (s[3] - '0') * 10 + (s[4] - '0');
    switch (month) {
        case 1: cout << "January"; break;
        case 2: cout << "February"; break;
        case 3: cout << "March"; break;
        case 4: cout << "April"; break;
        case 5: cout << "May"; break;
        case 6: cout << "June"; break;
        case 7: cout << "July"; break;
        case 8: cout << "August"; break;
        case 9: cout << "September"; break;
        case 10: cout << "October"; break;
        case 11: cout << "November"; break;
        case 12: cout << "December"; break;
    }
    cout << " "; 
    cout << day;
    if (day == 11 || day == 12 || day == 13) {
        cout << "th";
    } else {
        int lastDigit = day % 10;
        switch (lastDigit) {
            case 1: cout << "st"; break;
            case 2: cout << "nd"; break;
            case 3: cout << "rd"; break;
            default: cout << "th"; break; 
        }
    }
    cout << ", ";
    cout << s[6] << s[7] << s[8] << s[9];
    return 0;
}