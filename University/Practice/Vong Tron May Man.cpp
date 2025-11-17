// Chào mừng các bạn đã đến với trò chơi "Vòng tròn may mắn". Lời đầu tiên, xin phép em Phan Mạnh Q được gửi đến anh chị một lời chúc sức khỏe và một lời chào trân trọng nhất. *clap clap clap*. Nhân dịp 308 ngày mở shop đồ hồng, em Q xin phép được gửi đến anh chị chương trình khuyến mãi Vòng Tròn May Mắn.
// Em Q có một vòng tròn treo n phiếu thưởng, với mỗi phiếu có một giá trị phần thưởng tương ứng. Khi trò chơi bắt đầu, anh chị comment cho em Q vị trí bắt đầu s mà anh chị muốn bắt đầu trên vòng tròn (0 <= s <= n - 1). Sau đó, em Q sẽ ngẫu nhiên một số nguyên k  tương ứng với số phiếu thưởng mà chúng ta sẽ di chuyển tại vị trí hiện tại trong mỗi lần xoay. Biết rằng, trò chơi sẽ kết thúc nếu vòng quay trở lại vị trí bắt đầu s.
// Các bạn hãy viết chương trình cho biết số lần xoay và tổng phần thưởng nhận được khi vòng quay may mắn kết thúc. 
// Input
// - Dòng đầu tiên gồm 3 số nguyên dương thể hiện:
// + lượng phiếu thưởng trên vòng quay may mắn: n (5 <= n <= 10000).
// + Vị trí bắt đầu mà người chơi comment: s (0 <= s <= n - 1)
// + Số phiếu thưởng (bước nhảy) di chuyển từ vị trí hiện tại ở mỗi lần xoay: k (1 <= k <= 50000)
// - Dòng thứ hai gồm n số nguyên dương thể hiện giá trị của các phiếu thưởng, với mỗi phiếu thưởng có giá trị nằm trong đoạn [0, 10^6].
// Output
// - Số lần xoay và Tổng giá trị giải thưởng nhận được khi trò chơi kết thúc (cách nhau bởi khoảng cách)

#include <bits/stdc++.h>
using namespace std;
#define maxindex 10000

void inputArr(int *, int &, int &, int &);
void countSpin(int *, int , int , int);

int main() {
    int n, s, k;
    int a[maxindex];

    inputArr(a, n, s, k);
    countSpin(a, n, s, k);
}

void inputArr(int *a, int &n, int &s, int &k) {
    cin >> n >> s >> k;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void countSpin(int *a, int n, int s, int k) {
    long long index = s, sum = 0, cnt = 0;
    
    do {
        sum += a[index];
        cnt++;
        index = (index + k) % n;
    } while(index != s);
    cout << cnt << " " << sum;
}
