/* Ý tưởng là cho phần tử đầu tiên đã được sắp xếp rồi chọn phần tử tiếp theo là một key, sau đó so sánh key với dãy phần tử trước nó và tìm cách chèn vào sao cho dãy đó vẫn tăng dần*/

// Độ phức tạp O(n^2)



#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &array);
void printArray(const vector<int> &array);

int main() {
    int arrayLength; cin >> arrayLength;
    vector<int> array(arrayLength);
    for(auto &index : array) cin >> index;

    insertionSort(array);
    printArray(array);
}

void insertionSort(vector<int> &array) {
    int pos;
    for(int i = 1; i < array.size(); i++) {
        int key = array[i];
        for(int j = i - 1; j >= 0; j--) {
            if(array[j] > key)
                array[j + 1] = array[j];
            else {
                pos = j;
                break;
            }
        }
        array[pos+1] = key;
    }
}

void printArray(const vector<int> &array) {
    cout << endl;
    for(int index : array) {
        cout << index << " ";
    }
}
