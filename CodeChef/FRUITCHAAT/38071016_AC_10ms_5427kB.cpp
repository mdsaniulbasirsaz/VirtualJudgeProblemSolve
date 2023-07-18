#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int x,y;
	cin>>x>>y;
	int a=x/2;
	if(a>y)
	{
		cout<<y<<endl;
	}
	else
		cout<<a<<endl;
}
return 0;
}