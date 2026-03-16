/*Ý tưởng là đưa phần tử lớn nhất trong mảng nổi bọt ra sau cùng và cứ tương tự như vậy cho đến khi hết mảng, cứ liên tục so sánh 2 cặp số kế nhau để đẩy phần tử lớn nhất ra sau cùng*/

// Độ phức tạp O(n^2)



#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &array);
void printArray(const vector<int> &array);

int main() {
    int arrayLength; cin >> arrayLength;
    vector<int> array(arrayLength);
    for(auto &index : array) cin >> index;

    bubbleSort(array);
    printArray(array);
}

void bubbleSort(vector<int> &array) {
    for(int i = 0; i < array.size() - 1; i++) {
        for(int j = 0; j < array.size() - i - 1; j++) {
            if(array[j] > array[j + 1])
            swap(array[j] , array[j + 1]);
        }
    }

}

void printArray(const vector<int> &array) {
    cout << endl;
    for(int index : array) {
        cout << index << " ";
    }
}
