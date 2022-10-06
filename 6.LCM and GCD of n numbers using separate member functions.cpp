#include<iostream>
using namespace std;

class LCMGCD {
	private:
		int a, b, x, y, t, gcd, lcm;
	public:
		void input() {
			cout<<"Enter two integers: ";
			cin>>x>>y;
		}
		void compute_lcm() {
			a=x;
			b=y;
			while(b!=0) {
				t=b;
				b=a%b;
				a=t;
			}
			gcd=a;
			lcm=(x*y)/gcd;
			cout<<"\nLCM = "<<lcm;
		}

		void compute_gcd() {
			a=x;
			b=y;
			while(b!=0) {
				t=b;
				b=a%b;
				a=t;
			}
			gcd=a;
			cout<<"GCD = "<<gcd;
		}
};

int main() {
	LCMGCD obj;
	obj.input();
	obj.compute_lcm();
	obj.compute_gcd();
	return 0;
}