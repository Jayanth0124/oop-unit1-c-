#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char name[10][50], tname[10][50], temp[50];
	int i, j, n;

	cout<<"Enter the value of n ";
	cin>>n;

	cout<<"Enter "<<n<<" names ";

	for (i=0; i<n; i++) {
		cin>>name[i];
		strcpy(tname[i], name[i]);
	}

	for (i=0; i<n-1; i++) {
		for (j=i+1; j<n; j++) {
			if (strcmp(name[i], name[j])>0) {
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}

	cout<<"\nNames in alphabetical order "<<endl;
	for (i=0; i<n; i++) {
		cout<<name[i]<<endl;
	}

	cout<<"\nNames in reverse alphabetical order "<<endl;
	for (i=n-1; i>=0; i--) {
		cout<<name[i]<<endl;
	}

	return 0;
}