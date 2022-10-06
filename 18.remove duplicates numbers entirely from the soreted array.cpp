#include <iostream>
using namespace std;

int remove_duplicate(int arr[], int n) {
	if (n==0 || n==1)
		return n;

	int temp[n];

	int j = 0;
	for (int i=0; i<n-1; i++)
		if (arr[i] != arr[i+1])
			temp[j++] = arr[i];

	temp[j++] = arr[n-1];

	for (int i=0; i<j; i++)
		arr[i] = temp[i];

	return j;
}

int main() {
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"array : ";
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int m = remove_duplicate(arr, n);

	cout<<"Sorted Array:";
	for (int i=0; i<m; i++)
		cout<<arr[i]<<" ";

	return 0;
}