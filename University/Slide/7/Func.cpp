#include <iostream>
using namespace std;
#define maxindex 100


void inputArr(int* , int &);
void exArr(int [], const int &);
int sumArr(int , int);


void inputArr(int *a, int &n) {
    cout << "Enter length of arr 0 till 100: " << endl;
    cin >> n;
    for(int i = 0; i <= n - 1; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

}

void exArr(int *a, const int &n) { // int *a and int a[] is the same
    cout << "Arr included: ";
    for(int i = 0; i <= n - 1; i++) {
        cout << a[i] << " ";
    }
}

int sumArr(int a[maxindex], int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        s += a[i];
    }
    return s;
}

int main() {
    int a[maxindex], n;
    inputArr(a, n);
    exArr(a, n);
    cout << endl << " Sum is: " << sumArr(a, n);
}