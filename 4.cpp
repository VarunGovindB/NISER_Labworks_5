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
float sort(int n[],int x)
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
	
            for(int i=0;i<x;i++)
	{
		cout<<n[i]<<" ";
	}
}

int main() 
{
            int x,y;
	cout<<"Enter size of array 1:";
	cin>>x;
	int n1[x];
	cout<<"Enter "<<x<<" numbers:"<<endl;
	for(int i=0;i<x;i++)
	{
		cin>>n1[i];
	}
	cout<<"Enter size of array 2:";
	cin>>y;
	int n2[y];
	cout<<"Enter "<<y<<" numbers:"<<endl;
	for(int i=0;i<y;i++)
	{
		cin>>n2[i];
	}
	int c;
	c=x+y;
	int n[c];
	for(int i=0;i<x;i++)
	{
		n[i]=n1[i];
	}

	for(int i=x,k=0;i<c,k<y;i++,k++)
	{
		n[i]=n2[k];
	}
	sort(n,c);
	cout<<endl;
            cout<<"Largest="<<lar(n,c)<<endl;
	cout<<"Smallest="<<sma(n,c)<<endl;
	return 0;
}
