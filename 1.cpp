#include <iostream>
using namespace std;
int main()
{
	int a[10];
	cout<<"Enter 10 numbers";
	for(int i=0;i<10;i++)
	{
	   cout<<i<<"-";
	   cin>>a[i];
	   cout<<endl;
	}
	int sum=0;
	for(int i=0;i<10;i++)
	{
	   sum+=a[i];
	}
	cout<<sum;
return 0;
}
