#include<iostream>
using namespace std;
int main()
{
	int arr[1000];
	int i,n,x;
	cout<<"Enter number of elements in the array:";
	cin>>n;
	cout<<"Enter position to place x:";
	cin>>x;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element"<<i+1<<":";
		cin>>arr[i];
	}
	for(i=x;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=-1;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
