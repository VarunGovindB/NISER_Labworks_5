#include <iostream>
using namespace std;
int lar(int n[],int x)
{
	int max;
	max=n[0];
	for(int i=0;i<(x-1);i++)
	{
		if(max<n[i+1])
		max=n[i+1];
	}
	return max;
}

int sma(int n[],int x)
{
	int min;
	min=n[0];
	for(int i=0;i<(x-1);i++)
	{
		if(min>n[i+1])
		min=n[i+1];
	}
	return min;
}

float mean(int n[],int x)
{
	float mean,sum;
	for(int i=0;i<x;i++)
	{
	       sum+=n[i];
	}
	mean=sum/x;
	return mean;
}

float median(int n[],int x)
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
	float med;
	if(x%2==0)
	med=(n[x/2]+n[(x-2)/2])/2;
	else
	med=n[(x-1)/2];
	return med;
}

int main() 
{
            int x;
	cout<<"Enter size of array:";
	cin>>x;
	int n[x];
	cout<<"Enter "<<x<<" numbers:"<<endl;
	for(int i=0;i<x;i++)
	{
		cin>>n[i];
	}
	cout<<"Largest="<<lar(n,x)<<endl;
	cout<<"Smallest="<<sma(n,x)<<endl;
	cout<<"Mean="<<mean(n,x)<<endl;
	cout<<"Median="<<median(n,x);
	return 0;
}
