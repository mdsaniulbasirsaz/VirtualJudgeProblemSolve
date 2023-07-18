#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int c;
	for(int i=1;i<=3;i++)
	{
		if(i==1)
		{
			c=a*b*i;
			if(c%2!=0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
			break;
		}
		if(i==2)
		{
			c=a*b*i;
			if(c%2!=0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
			break;
		}
		if(i==3)
		{
		c=a*b*i;
			if(c%2!=0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
			break;
		}
	}
	return 0;
}