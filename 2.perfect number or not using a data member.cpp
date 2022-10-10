#include<iostream>
using namespace std;
class Perfect
{
	int n;
	public:
		void get()
		{
			cout<<"Enter a number "<<endl;
			cin>>n;
		}
		void check()
		{
			int sum=0,i;
			if(n<=0)
			{
				cout<<"Invalid input";
			}
			else
			{
				for(i=1;i<n;i++)
				{
					if(n%i==0)
					{
						sum=sum+i;
					}
				}
				if(sum==n)
				{
					cout<<"Given number is perfect number";
				}
				else
				{
					cout<<"Given number is not a perfect number";
				}
			}
		}
};
int main()
{
	Perfect p;
	p.get();
	p.check();
	return 0;
}
