#include<iostream>
#include<string>
using namespace std;

class Person
{
    private:
        string ssn;
        int age;
    
    public:
        Person()
        {
            ssn = "000000000";
            age = 0;
        }
        void set_ssn(string ssn)
        {
            if(ssn.length()!= 9)
            {
                cout<<"Invalid SSN"<<endl;
                return;
            }
            for(int i = 0; i < ssn.length(); i++)
            {
                if(!isdigit(ssn[i]))
                {
                    cout<<"Invalid SSN"<<endl;
                    return;
                }
            }
            this -> ssn = ssn;
        }
        string get_ssn()
        {
            return ssn;
        }
        void set_age(int age)
        {
            if(age < 18)
            {
                cout<<"Invalid Input"<<endl;
                return;
            }
            this -> age = age;
        }
        int get_age()
        {
            return age;
        }
        bool check_eligibility()
        {
            if(age >= 18)
            {
                return true;
            }
            return false;
        }
};

int main()
{
    Person obj;
    string ssn;
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    obj.set_age(age);
    
    if(obj.check_eligibility())
    {
        cout<<"Eligible"<<endl;
    }
    else
    {
        cout<<"Not eligible"<<endl;
    }
    
    return 0;
}
