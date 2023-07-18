#include<iostream>
#define ll long long
#define str string
using namespace std;

int main() {
	
	ll t;
	cin >> t;
	while (t--) {
		ll a, b, p, q;
		cin >> a >> b >> p >> q;
		ll s1 = a + b, s2 = p + q;
		ll steps = 0;
		if(a == p && b == q) {
			steps = 0;
		} else if(s1 % 2 == 0 && s2 % 2 == 0) {
			steps = 2;
		} else if(s1 % 2 != 0 && s2 % 2 != 0) {
			steps = 2;
		} else if(s1 % 2 == 0 && s2 % 2 != 0) {
			steps = 1;
		} else if(s1 % 2 != 0 && s2 % 2 == 0) {
			steps = 1;
		}

		cout << steps << '\n';

	}
	
	
	return 0;
}