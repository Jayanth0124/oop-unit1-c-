#include <iostream>
using namespace std;

int main() {
	int a, b;
	bool isComposite;

	cout << "A= ";
	cin >> a;
	cout << "B=";
	cin >> b;
	cout << "Composite numbers between " << a << " and " << b << ": ";

	for (int i = a; i <= b; i++) {
		isComposite = false;

		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				isComposite = true;
				break;
			}
		}

		if (isComposite) {
			cout << i << " ";
		}
	}

	return 0;
}