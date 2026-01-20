#include <bits/stdc++.h>
using namespace std;

void rotate_1();
void rotate_n();

int main() {
    while(1) {
        cout << "Please choose mode" << endl;
        cout << "1. Rotate 1 time" << endl;
        cout << "2. Rotate n time" << endl;
        cout << "3. Out" << endl;
        
        int select; cin >> select;
        cout << "==========================================================" << endl;
        if(select == 3) break;
        switch (select) {
            case 1: rotate_1(); break;
            case 2: rotate_n(); break;
        }

    }
}

void rotate_1() {
    int size; cout << "Enter the number of num you want to rotate: "; cin >> size;
    cout << "Enter " << size << " number seprate by a space: " << endl;

    int *a = new int[size];
    for(int i = 0; i < size; i++) cin >> a[i];
    
    int *result = new int[size];
    for(int i = 0; i < size; i++) result[i] = a[(i - 1 + size) % size];
    cout << "After sort 1 time: ";

    for(int i = 0; i < size; i++) cout << result[i] << " ";
    cout << endl;
    cout << "==========================================================" << endl;

    delete[] a;
}

void rotate_n() {
    int size, times; cout << "Enter the number of num you want to rotate: "; cin >> size;
    cout << "Enter the rep you want to make: "; cin >> times;
    cout << "Enter " << size << " number seprate by a space: " << endl;

    times %= size;

    int *a = new int[size];
    for(int i = 0; i < size; i++) cin >> a[i];
    
    int *result = new int[size];
    for(int i = 0; i < size; i++) result[i] = a[(i - times + size) % size];
    cout << "After sort " << times << " times: ";

    for(int i = 0; i < size; i++) cout << result[i] << " ";
    cout << endl;
    cout << "==========================================================" << endl;

    delete[] a;
}