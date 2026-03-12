#include <iostream>


int main()
{
    double a;
    int n;
    std::cin >> a >> n;

    long long ans = (long long)(a * n + 0.5);
    long long final = ans / n;
    long long number = ans % n;

    if(number == 0) std::cout << final;
    else {
        std::cout << final << " " << number << "/" << n;
    }
}