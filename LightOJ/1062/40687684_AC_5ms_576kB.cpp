/* Md Saniul Basir Saz 
   Department Of Computer Science and Engineering 
   Jashore University Of Scinece and Technology 
   Student Id: 200103 
   Email: saniul.cse.just@gmail.com
   Mobile: 01306032236 */
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<bits/stdc++.h>
#include<string>
#define The_End return 0
#define nl '\n'
#define YSSS cout<<"YES"<<nl
#define NOOO cout<<"NO"<<nl
#define ysss cout<<"Yes"<<<nl
#define nooo cout<<"No"<<nl
#define ll long long 
#define fli(i,a,n) for(int i=a;i<n;i++)
#define flj(j,a,n) for(int j=a;j<n;j++)
#define flri(i,a,n) for(int i=n;i>=a;i--)
#define flrj(j,a,n) for(int j=n;j>=a;j--)
#define mod 1000000007
#define st(n) fixed<<setprecision(n)
#define my_code ios_base::sync_with_stdio(0);cout.tie(0);
using namespace std;
int main()
{
  my_code
  int t,k=1;
  cin>>t;
  while(t--)
  {
    double a,b,c,z,ans;

    cin>>a>>b>>c;
    double x=0;
    double y=min(a,b);
    double h;
    while(x<y)
    {
        h=(x+y)/2.00;
        z=sqrt(b*b-h*h);
        double p=sqrt(a*a-h*h);
        double q=(z*p)/(z+p);


        if(abs(q-c)<0.000000001)
        {
            ans=h;
            break;
        }
        if(q>c)
        {
            x=h;
        }
        else
        {
            y=h;
        }
    }
    cout<<st(10)<<"Case "<<k++<<": "<<ans<<nl;
  }
  The_End;
}
