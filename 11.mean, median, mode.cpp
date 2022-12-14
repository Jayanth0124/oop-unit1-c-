#include<iostream>
using namespace std;

class Array {
		int arr[10];
		int size;
	public:
		Array(int s) {
			size = s;
			for (int i = 0; i < size; i++) {
				cin >> arr[i];
			}
		}
		int mean() {
			int mean = 0;
			for (int i = 0; i < size; i++) {
				mean += arr[i];
			}
			return mean/size;
		}
		int median() {
			int mid;
			if (size % 2 == 0) {
				mid = (arr[(size - 1)/2] + arr[size/2])/2;
			} else {
				mid = arr[size/2];
			}
			return mid;
		}
		int mode() {
			int count = 1, max_count = 1, curr = arr[0], max_num = arr[0];
			for (int i = 1; i < size; i++) {
				if (arr[i] == curr) {
					count++;
				} else {
					if (count > max_count) {
						max_count = count;
						max_num = curr;
					}
					count = 1;
					curr = arr[i];
				}
			}
			if (count > max_count) {
				max_count = count;
				max_num = curr;
			}
			return max_num;
		}
};
int main() {
	cout << "array of elements:";
	Array a(7);
	cout << "Mean = " << a.mean() << endl;
	cout << "Median = " << a.median() << endl;
	cout << "Mode = " << a.mode();
	return 0;
}