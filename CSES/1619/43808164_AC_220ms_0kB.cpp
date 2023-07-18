#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> customers;
    for (int i = 0; i < n; i++) {
        int arrival, leaving;
        cin >> arrival >> leaving;
        customers.push_back({arrival, 1}); // 1 represents arrival
        customers.push_back({leaving, -1}); // -1 represents leaving
    }

    sort(customers.begin(), customers.end());

    int maxCustomers = 0;
    int currentCustomers = 0;

    for (auto customer : customers) {
        currentCustomers += customer.second; 
        // Add or subtract based on arrival or leaving
        //cout<<currentCustomers<<endl;
        maxCustomers = max(maxCustomers, currentCustomers);
        //cout<<maxCustomers<<endl;
    }

    cout << maxCustomers << endl;

    return 0;
}
