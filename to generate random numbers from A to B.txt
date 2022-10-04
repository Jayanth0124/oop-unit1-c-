#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
   public:
    int a, b, n;
    int arr[100];
    void get() {
        cout << "Enter A Value: ";
        cin >> a;
        cout << "Enter B Value: ";
        cin >> b;
        cout << "Enter number of elements: ";
        cin >> n;
    }
    void generate() {
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            arr[i] = a + rand() % (b - a + 1);
        }
    }
    void print() {
        cout << "Randomized list is: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    Random obj;
    obj.get();
    obj.generate();
    obj.print();
    return 0;
}