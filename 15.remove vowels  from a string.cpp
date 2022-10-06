#include<iostream>
#include<string>
using namespace std;
class RemoveVowels {
		string str;
	public:
		RemoveVowels(string s) {
			str=s;
		}
		void remove() {
			for(int i=0; i<str.length(); i++)
				if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
					str.erase(i,1);
			cout<<str;
		}
};
int main() {
	string s;
	cout<<"Enter a string: ";
	getline(cin,s);
	RemoveVowels r(s);
	cout<<"\n Output \nstring without vowels is: ";
	r.remove();
	return 0;
}