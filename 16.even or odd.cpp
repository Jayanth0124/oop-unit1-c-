#include <iostream>
using namespace std;
class Number {
    int num;
    public:
    Number(int n) {num = n;}
    int check();
};
int Number::check() {
    if (num % 2 == 0) {
        cout<<"Result number: "<<num+2<<endl;
    } else {
        cout<<"Result number: "<<num-2<<endl;
    }
    return 0;
}
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    Number obj(n);
    obj.check();
    return 0;
}