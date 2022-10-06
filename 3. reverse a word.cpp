#include<iostream>
#include<string.h>
using namespace std;

class Word {
	public:
		string word,reverse;
		int i,l;

		Word() {
			word=" ";
			reverse=" ";
			i=0;
			l=0;
		}
		Word(string a) {
			word=a;
			l=a.length();
		}
		void reverseword() {
			for(i=l-1; i>=0; i--) {
				reverse=reverse+word[i];
			}
			cout<<reverse;
		}
};
int main() {
	string s;
	cout<<"Enter a word: ";
	cin>>s;
	Word w(s);
	w.reverseword();
	return 0;
}