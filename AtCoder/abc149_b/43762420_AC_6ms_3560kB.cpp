#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,k;
	cin>>a>>b>>k;
	if(a>=k)
	{
		cout<<a-k<<" "<<b<<endl;
	}
	else if( k>a+b)
	{
		cout<<0<<" "<<0<<endl;
	}
	else
	{
		k-=a;
		cout<<0<<" "<<b-k<<endl;
	}
	
	return 0;
}