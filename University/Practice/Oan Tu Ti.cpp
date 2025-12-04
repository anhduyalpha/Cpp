// MQ44 - Nhà cái đến từ Châu Á, đang tổ chức trò chơi Oẳn tù tì để quyên góp tiền ủng hộ đồng bào khu vực miền Trung cũng như các khu vực đang chịu thiệt hại nặng nề do bão lũ. QMP được chịu trách nhiệm lập trình một chương trình chơi oẳn tù tì tự động để mọi người có thể đặt cược. Luật chơi Oẳn tù tì được quy định như sau:

// Ngẫu nhiên một con số N từ 1 đến 50.
// Hai con bot sẽ lần lượt đưa ra lựa chọn của mình ("BAO", "KEO", "BUA")
// Người chiến thắng sẽ được 1 điểm
// Nếu hòa thì không ai được cộng điểm
// Lặp đi lặp lại liên tục đến khi một trong hai chạm mốc N điểm. Lúc đó, ai được N điểm trước sẽ là người chiến thắng.
// Bằng kỹ năng lập trình so vuýp của mình, các bạn hãy giúp QMP lập trình trò chơi này nhé.

// Input
// -       Số nguyên n thể hiện điểm số bắt buộc các người chơi phải đạt được để chiến thắng
// -       Các dòng tiếp theo, mỗi dòng thể hiện lựa chọn của 2 người chơi (cách nhau bằng khoảng trắng:
// "BUA KEO"
// "KEO KEO"
// ...
// Lưu ý: chỉ dừng lại khi tìm ra người chiến thắng
// Output
// -       Người chiến thắng và kết quả theo định dạng  <P1 win/P2 win>: <điểm người 1>-<điểm người 2>

#include <iostream>
#include <string>

using namespace std;
int main() {
    int n;
    cin >> n;
    string p1, p2;
    int score1 = 0;
    int score2 = 0;
    while (score1 < n && score2 < n) {
        cin >> p1 >> p2;
        if (p1 == p2) {
            continue; 
        }
        if ((p1 == "BUA" && p2 == "KEO") ||
            (p1 == "KEO" && p2 == "BAO") ||
            (p1 == "BAO" && p2 == "BUA")) {
            score1++;
        } 
        else {
            score2++;
        }
    }
    if (score1 >= n) {
        cout << "P1 win: " << score1 << "-" << score2;
    } else {
        cout << "P2 win: " << score1 << "-" << score2;
    }
    return 0;
}