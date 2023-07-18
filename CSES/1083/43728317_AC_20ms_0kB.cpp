#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
  
    long long int n;
    std::cin >> n;
  
    long long int mis = 0;
    for (int i = 0; i < n - 1; i++) {
        long long int  x;
        std::cin >> x;
        mis += x;
    }
  
    long long int sum = (n * (n + 1)) / 2;
    std::cout << sum-mis<< std::endl;

    return 0;
}
