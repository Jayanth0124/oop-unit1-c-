#include<iostream>
using namespace std;
int main() {
	int i,m,n,c;
	cout<<"Enter m and n:";
	cin>>m>>n;
	cout<<"Multiplication table or division table of "<<m<<" is:"<<endl;
	cout<<"Enter your choice:";
	cin>>c;
	switch(c) {
		case 1: {
			for(i=1; i<=n; i++) {
				cout<<m<<"*"<<i<<"="<<m*i<<endl;
			}
			break;
		}
		case 2: {
			for(i=1; i<=n; i++) {
				cout<<m<<"/"<<i<<"="<<m/i<<endl;
			}
			break;
		}
		default: {
			cout<<"Invalid choice";
		}
	}
	return 0;
}