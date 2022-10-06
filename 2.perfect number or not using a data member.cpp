#include<iostream>
using namespace std;
class Perfect {
		int n,i;
	public:
		Perfect(int a) {
			n=a;
		}
		void Perfect_Number() {
			int sum=0;
			for(i=1; i<n; i++) {
				if(n%i==0)
					sum+=i;
			}
			if(sum==n)
				cout<<"Its a Perfect Number.";
			else
				cout<<"Its Not a Perfect Number";
		}
};
int main() {
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	Perfect obj(n);
	obj.Perfect_Number();
	return 0;
}