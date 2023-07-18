#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		vector<int>s;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			s.push_back(x);
		}
		int a=0,b=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]<=9||s[i]>=80)
			{
				a++;
			}
			else
			{
				b++;
			}
		}
		int c,e;
			if(a%d==0)
			{
				c=a/d;
			}
			else
			{
				c=(a/d)+1;
			}

			if(b%d==0)
			{
				e=b/d;
			}
			else
			{
				e=(b/d)+1;
			}
		cout<<e+c<<endl;
	}
	return 0;
}