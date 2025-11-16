// Nếu một dãy 10 số tồn tại 3 số có chữ số bắt đầu là chữ số 1 và 1 số bắt đầu bằng chữ số 4 thì có thể giả định rằng dãy số đó tuân thủ theo luật Benford. Hãy viết chương trình kiểm tra dãy số nhập vào có thỏa luật Benford không?
// INPUT
// - Nhập 10 số nguyên dương bất kỳ có giá trị f (f < 99999).
// OUTPUT
// - dãy số đó có 3 con số bắt đầu bằng chữ số 1 và 1 con số bắt đầu bằng chữ số 4 thì xuất ra màn hình ra TRUE.
// - Ngược lại, xuất ra màn hình FALSE.
#include <iostream>
using namespace std;
#define maxindex 10

void inputArr(int *);
void check_index(int *);

int main() {
    int a[maxindex];
    inputArr(a);
    check_index(a);
}

void check_index(int a[]) {
    int unit, cnt1 = 0, cnt4 = 0;
    for(int i = 0; i < 10; i++) {
        while(a[i] > 0) {
            unit = a[i] % 10;
            a[i] /= 10;
        }
        if(unit == 1) cnt1++;
        if(unit == 4) cnt4++;
    }
    if(cnt1 == 3 && cnt4 == 1) cout << "TRUE";
    else{ cout << "FALSE"; }

}


void inputArr(int *a) {
    for(int i = 0; i < 10; i++)
        cin >> a[i];
}
