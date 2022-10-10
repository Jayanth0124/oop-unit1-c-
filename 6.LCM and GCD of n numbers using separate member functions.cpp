#include<iostream>
using namespace std;
int lcm(int a,int b)
{
	int max=a>b?a:b;
	while(1)
	{
		if(max%a==0 && max%b==0)
		{
			return max;
			break;
		}
		++max;
	}
}
int gcd(int a,int b)
{
	int min=a<b?a:b;
	while(1)
	{
		if(a%min==0 && b%min==0)
		{
			return min;
			break;
		}
		--min;
	}
}
int main()
{
	int n,a,b;
	int array[10];
	cout<<"N value = ";
	cin>>n;
	cout<<"Number 1 = ";
	cin>>a;
	cout<<"Number 2 = ";
	cin>>b;
	int l=lcm(a,b);
	int g=gcd(a,b);
	for(int i=3;i<=n;i++)
	{
		cout<<"Number "<<i<<" = ";
		cin>>array[i];
		l=lcm(l,array[i]);
		g=gcd(g,array[i]);
	}
	cout<<"LCM = "<<l<<"\n";
	cout<<"GCD = "<<g<<"\n";
	return 0;
}
