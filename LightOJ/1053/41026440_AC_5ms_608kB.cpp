#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long a,b,c;cin>>a>>b>>c;
        if((a*a +b*b)==c*c  || (b*b +c*c)==a*a   || (c*c + a*a)==b*b)
        {
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<"no"<<endl;
        }
    }
    return 0;
}