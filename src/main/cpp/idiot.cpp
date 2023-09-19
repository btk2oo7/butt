#include <iostream>

double x = 0;
int main() {
    std::cin >> x;
    for (double i = 1; i < x+1; ++i) {
        std::cout << i << "       %" << (i/x)*100 << "\n";
    }
};