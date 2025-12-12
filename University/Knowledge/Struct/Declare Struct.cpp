#include <bits/stdc++.h>
using namespace std;

int main() {

    // Method 1
    struct Point {
        float x, y;
    };
    struct Point A;
    Point B;

    
    // Method 2
    struct Ngay_Sinh {
        int ngay, thang, nam;
    };
    struct Ngay_Sinh date; /* Có thể có Ngay_Sinh hoặc không */
    Ngay_Sinh DoB;


    // Method 3
    typedef struct {
        string ten;
        string gender;
    } Nhan_Vien;

    Nhan_Vien nv1;

}