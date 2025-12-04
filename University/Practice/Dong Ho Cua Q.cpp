// Để giúp các bạn sinh viên có thể đạt điểm cao trong kỳ thi cuối kỳ, Q thường suy nghĩ các bài tập thú vị để giúp các bạn có hứng khởi trong quá trình làm bài. Và vì ở nhà không có đồng hồ, Q không để ý giờ giấc và thường ngủ muộn dẫn đến đau lưng, mỏi gối, tê tay. Để giảm thiểu tình trạng này, Q quyết định tới shop đồ hồng để sắm sửa cho bản thân một chiếc đồng hồ (thay vì ghé tiệm thuốc để mua Tâm Bình).

// Tuy nhiên, một tình huống khá trớ trêu là đồng hồ mà Q mua chỉ hiển thị giờ theo định dạng AM/PM:

// Nửa đêm đến trưa: từ 12:00:00 AM đến 11:59:59 AM
// Trưa đến nửa đêm: từ 12:00:00 PM đến 11:59:59 PM
// Trong khi đó, Q thì không biết xem giờ theo AM/PM mà chỉ biết xem giờ theo định dạng 24 giờ (từ 00:00:00 đến 23:59:59). Bằng kỹ thuật lập trình thượng hạng của mình, các bạn hãy giúp Q lập trình lại chiếc đồng hồ để có thể hiển thị thời gian theo định dạng 24 giờ nhé.
// Input
// -        Chuỗi ký tự thể hiện thời gian theo định dạng AM/PM
// Output
// -       Chuỗi ký tự thể hiện thời gian theo định dạng 24 giờ

#include <iostream>
using namespace std;

int main() {
    char s[20];
    cin >> s; 
    int hh = (s[0] - '0') * 10 + (s[1] - '0');
    char type = s[8];
    if (type == 'P') {
        if (hh != 12) {
            hh = hh + 12;
        }
    } else if (type == 'A') {
        if (hh == 12) {
            hh = 0;
        }
    }
    if (hh < 10) {
        cout << "0";
    }
    cout << hh;
    for (int i = 2; i <= 7; i++) {
        cout << s[i];
    }
    cout << endl;
    return 0;
}