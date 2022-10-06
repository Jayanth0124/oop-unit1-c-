#include<iostream> 
#include<math.h> 
using namespace std; 
  
class List { 
    private: 
        int num, sum, temp; 
    public: 
        List() { 
            num = 0; 
            sum = 0; 
            temp = 0; 
        } 
  
        void isPerfectSquare() { 
            for (int i = 1; i <= num; i++) { 
                if (sqrt(i) == (int)sqrt(i)) { 
                    temp = i; 
                    sum = 0; 
                    while (temp > 0) { 
                        sum = sum + temp % 10; 
                        temp = temp / 10; 
                    } 
                    if (sum < 10) { 
                        cout << i << ", "; 
                    } 
                } 
            } 
        } 
  
        void input() { 
            cout << "Enter upper range: "; 
            cin >> num; 
        } 
}; 
  
int main() { 
    List l; 
    l.input(); 
    cout << "List of all perfect squares in the given range whose sum of digits is less than 10: "; 
    l.isPerfectSquare(); 
    return 0; 
}