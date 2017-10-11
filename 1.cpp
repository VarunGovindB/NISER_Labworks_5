#include <iostream>
using namespace std;
int sumofarray(int a[10])
{
  int sum=0;
	for(int i=0;i<10;i++)
	{
	   sum+=a[i];
	}
  cout<<sum;
}
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
	sumofarray(a);
return 0;
}
