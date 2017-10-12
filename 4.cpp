#include <iostream>
using namespace std;

float sort(int n[],int x)
{
float t=0.0;
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
	
	for(int k=0;k<x;k++)
	{
		cout<<n[k]<<" ";
	}


	
}

int main() 
{
	int x,y;
	cout<<"Enter sizes of arrays:"<<endl;
	cin>>x>>y;
	int n1[x],n2[y];
	cout<<"Enter "<<x<<" elements of array 1:";
	for(int i=0;i<x;i++)
	{
		cin>>n1[i];
		cout<<" ";
	}
	cout<<"Enter "<<y<<" elements of array 2:";
	for(int j=0;j<y;j++)
	{
		cin>>n2[j];
		cout<<" ";
	}
	cout<<endl;
	cout<<"Sorted array 1: ";
	sort(n1,x);
	cout<<endl;
	cout<<"Sorted array 2: ";
	sort(n2,y);
	return 0;
}
