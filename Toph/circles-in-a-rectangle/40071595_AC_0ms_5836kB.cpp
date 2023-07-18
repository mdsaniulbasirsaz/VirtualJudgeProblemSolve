#include<bits/stdc++.h>
using namespace std;
int main() 
{
int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        double r;
        cin>>r;
        double ans=(8*r*r)-(2*3.1416*r*r);
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}