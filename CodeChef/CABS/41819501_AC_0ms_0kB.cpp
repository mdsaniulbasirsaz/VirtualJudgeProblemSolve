#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
int a,b;cin>>a>>b;
if(a<b)cout<<"FIRST"<<endl;
else if(a==b)cout<<"ANY"<<endl;
else
cout<<"SECOND"<<endl;
}
	return 0;
}