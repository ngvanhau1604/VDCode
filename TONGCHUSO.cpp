#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    int digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    std::cout << sum;

    return 0;
}
