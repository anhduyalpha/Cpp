// Nhận vào mảng số nguyên có chiều dài n thể hiện con đường do công chúa phát sinh. Mỗi phần tử trong mảng mang một trong hai giá trị: 0 (không có cạm bẫy) và 1 (cạm bẫy). Biết QMP bắt đầu di chuyển ở đầu con đường và công chúa ở cuối con đường. Ngoài ra, với mỗi bước đi, QMP chỉ được di chuyển 1 hoặc 2 bước. Bạn hãy kiểm tra xem có tồn tại con đường giúp nhân vật QMP đi đến lâu đài của công chúa XX hay không. Một con đường được xem là thành công nếu QMP đi đến lâu đài của công chúa mà không gặp phải bất kỳ cạm bẫy nào.
// Nếu tồn tại con đường đó, hãy in ra tổng số bước nhỏ nhất mà QMP thực hiện để đi hết con đường đó (đường vào S2 em)
// Ngược lại, in ra -1 (đừng vào S2 em)
// Input
// - Dòng đầu tiên là số nguyên dương n  thể hiện chiều dài của con đường do công chúa phát sinh (3 <= n <= 10000)
// - Dòng thứ hai gồm n  số nguyên dương thể hiện: cạm bẫy (giá trị 1) hoặc không có cạm bẫy (giá trị 0)
// Output
// Nếu tồn tại con đường đó, hãy in ra tổng số bước nhỏ nhất mà QMP thực hiện để đi hết con đường đó
// Ngược lại, in ra -1

#include <iostream>
using namespace std;

void play(int* arr, int n);

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    play(arr, n);

    return 0;
}

void play(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0 && arr[i+1] == arr[i]) {
            cout << -1;
            return; 
        }
    }

    long long cnt = 0;
    for(int i = 0; i < n - 1; /* Khong can step */) {
        if(arr[i] == 1) {
            i++;
            cnt++;
        }

        if(arr[i] == 0 && arr[i+2] == 0) {
            i += 2;
            cnt++;    
        }

        else {
            i++;
            cnt++;
        }
    }
    cout << cnt;
}