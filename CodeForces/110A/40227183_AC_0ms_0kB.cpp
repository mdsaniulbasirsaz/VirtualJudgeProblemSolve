#include <iostream>
#include <string>

using namespace std;

int main() {
// Read the input number
long long n;
cin >> n;

// Convert the number to a string
string str = to_string(n);

// Count the number of lucky digits in the string
int count = 0;
for (char c : str) {
if (c == '4' || c == '7') {
count++;
}
}

// Check if the count of lucky digits is itself a lucky number
if (count == 4 || count == 7) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}

return 0;
}