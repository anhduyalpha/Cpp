/*Ý tưởng là dùng một vòng lặp duyệt từ đầu mảng đến phần n-1 lưu vị trí của p.tu đầu tiên và đặt nó là phần tử nhỏ nhât, dùng một lặp nữa để duyệt từ đầu đến cuối mảng và tìm phần tử nhỏ nhất mà nhỏ hơn phần tử ban đầu và lưu lại vị trí của phần tử vào biến min sau đó swap phần tử i hiện tại và phần tử tại min*/

// Độ phức tạp O(n^2)

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &array);
void printArray(const vector<int> &array);

int main() {
    int arrayLength; cin >> arrayLength;
    vector<int> array(arrayLength);
    for(auto &index : array) cin >> index;

    selectionSort(array);
    printArray(array);
}

void selectionSort(vector<int> &array) {
    int min_pos;
    for(int i = 0; i < array.size() - 1; i++) {
        min_pos = i;
        for(int j = i + 1; j < array.size(); j++) {
            if(array[j] < array[min_pos]) 
                min_pos = j;
        }
        swap(array[i], array[min_pos]);
    }
}

void printArray(const vector<int> &array) {
    cout << endl;
    for(int index : array) {
        cout << index << " ";
    }
}
