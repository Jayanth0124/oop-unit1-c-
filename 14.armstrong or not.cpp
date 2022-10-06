#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n,t,sum=0,rem;
	cout<<"Enter number: ";
	cin>>n;
	t=n;
	while(n>0) {
		rem=n%10;
		sum=sum+pow(rem,3);
		n=n/10;
	}
	if(t==sum) {
		cout<<"Given number is Armstrong number";
	} else {
		cout<<"Given number is not Armstrong number";
	}

}