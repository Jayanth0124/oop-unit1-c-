#include<iostream>
#include<string.h>
using namespace std;
class palindrome {
		char str[20];
	public:
		void read();
		void check();
};
void palindrome::read() {
	cout<<"Enter a string=";
	cin>>str;
}
void palindrome::check() {
	int i,l;
	l=strlen(str);
	for(i=0; i<l/2; i++) {
		if(str[i]!=str[l-i-1]) {
			cout<<"Given string is not a palindrome";
			return;
		}
	}
	cout<<"Given string is a palindrome";
}
int main() {
	palindrome p;
	p.read();
	p.check();
	return 0;
}