#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elemts of array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	cout<<"Sum of array of elements is : "<<sum;
}
