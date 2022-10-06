#include <iostream>
using namespace std;

class Perfect {
	private:
		int n;
	public:
		Perfect(int x)  {
			n = x;
		}
		void displayPerfect();
};

void Perfect::displayPerfect() {
	int sum = 0;

	cout<<"First "<< n <<" perfect numbers are: \n";
	for(int i=1; i<=n; i++) {
		for(int j=1; j<i; j++) {
			if(i%j == 0) {
				sum = sum + j;
			}
		}

		if (sum == i) {
			cout<<i<<"\t";
		}

		sum = 0;
	}
}

int main() {
	int num;
	cout<<"Enter the value of n: ";
	cin>>num;

	Perfect p(num);

	p.displayPerfect();

	return 0;
}