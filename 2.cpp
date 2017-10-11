#include <iostream>
using namespace std;
int lar(int n[10])
{
	int max;
	max=n[0];
	for(int i=0;i<10;i++)
	{
		if(max<n[i+1])
		max=n[i+1];
	}
	return max;
}

int sma(int n[10])
{
	int min;
	min=n[0];
	for(int i=0;i<9;i++)
	{
		if(min>n[i+1])
		min=n[i+1];
	}
	return min;
}

float mean(int n[10])
{
	float mean,sum;
	for(int i=0;i<10;i++)
	{
	       sum+=n[i];
	}
	mean=sum/10;
	return mean;
}

int main() 
{
	int n[10];
	cout<<"Enter 10 numbers:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>n[i];
	}
	cout<<"Largest="<<lar(n)<<endl;
	cout<<"Smallest="<<sma(n)<<endl;
	cout<<"Mean="<<mean(n)<<endl;
	return 0;
}
