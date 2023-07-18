#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n;
		int arr[100000];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n;i=i+2)
		{
			if(arr[i]!=arr[i+1])
			{
				c=arr[i];
				break;
			}
		}
		cout<<c<<endl;
	}
	return 0;

}