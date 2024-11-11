#include <iostream>
#include <vector>
#include <string>
#include <cmath>

std::string calculateParity(std::vector<std::string> s, int m) {
    long long sum = 0;
    for (const auto& str : s) {
        long long value = 1;
        for (char c : str) {
            value = (value * (long long)pow((int)c, m)) % 1000000007;
        }
        sum = (sum + value) % 1000000007;
    }
    return (sum % 2 == 0) ? "EVEN" : "ODD";
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> s(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> s[i];
    }
    std::cout << calculateParity(s, m) << std::endl;
    return 0;
}