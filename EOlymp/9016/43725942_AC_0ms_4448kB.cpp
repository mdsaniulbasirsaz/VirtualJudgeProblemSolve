#include <iostream>
#include <vector>

int bsearch(const std::vector<int>& v, int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (v[m] == x) {
            return m;
        }
        if (v[m] > x) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int n, q;
    std::cin >> n >> q;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    for (int i = 0; i < q; i++) {
        int x;
        std::cin >> x;
        int ans = bsearch(v, 0, n - 1, x);
        if (ans != -1) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
