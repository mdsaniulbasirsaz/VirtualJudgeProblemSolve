#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a<b)
	{
		cout<<"0"<<endl;
	}
	else
		cout<<a-b<<endl;
	return 0;
}