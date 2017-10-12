#include <iostream>
using namespace std;
int klar(int n[],int x,int k)
{
float t;
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(n[j]>n[j+1])
			{
				t=n[j];
				n[j]=n[j+1];
				n[j+1]=t;
			}
		}
	}
	cout<<"The sorted array is";
	for(int i=0;i<x;i++)
	{
		cout<<endl<<n[i];
	}
	return n[k-1];
}
int main() 
{
    int x,k;
	cout<<"Enter size of array:"<<endl;
	cin>>x;
	int n[x];
	cout<<"Enter "<<x<<" numbers:"<<endl;
	for(int i=0;i<x;i++)
	{
		cin>>n[i];
	}
	cout<<"Enter k:"<<endl;
	cin>>k;
	int y;
	y=klar(n,x,k);
	cout<<endl;
	cout<<k<<" largest:"<<y;
	return 0;
}
