#include <iostream>
using namespace std;

class Sample
{
	private:
		int i,n,sum,avg,count;
	public:
		void read()
		{
			sum=0;
			count=0;
			cout<<"Enter the 1st number: ";
			cin>>n;
			i=n;
			while(i!=-1)
			{
				sum=sum+i;
				count++;
				cout<<"Enter the "<<count+1<<"th number: ";
				cin>>n;
				i=n;
			}
		}
		void calculate()
		{
			if(i>0)
			{
				avg=sum/count;
				cout<<"The average of positive numbers is: "<<avg;
			}
			if(i<0)
			{
				avg=sum/count;
				cout<<"The average of negative numbers is: "<<avg;
			}
		}
};
int main()
{
	Sample s;
	s.read();
	s.calculate();
	return 0;
}