#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total_sum = (n * (n + 1)) / 2;
    long long sum = 0;

    for (int i = 1; i < n; i++) {
        long long  num;
        cin >> num;
        sum += num;
    }

    long long  missing_number = total_sum - sum;
    cout << missing_number << endl;

    return 0;
}
