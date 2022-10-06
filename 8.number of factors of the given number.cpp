#include <iostream>
using namespace std;

int main() {
	int n,m, count = 0;
	cout << "Enter a positive integer: ";
	cin >> n;
	cout << "N=";
	cin >> m;

	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			count++;
		}
	}

	cout << "Number of factors = " << count;
	return 0;
}