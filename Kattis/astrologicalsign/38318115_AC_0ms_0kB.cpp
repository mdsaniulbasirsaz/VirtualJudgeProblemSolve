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
int t;

cin>>t;

while(t--){

string s;

int a;

cin>>a>>s;

map<string, int>mp;

mp["Jan"]=1;

mp["Feb"]=2;

mp["Mar"]=3;

mp["Apr"]=4;

mp["May"]=5; mp["Jun"]=6;

mp["Jul"]=7;

mp["Aug"]=8;

mp["Sep"]=9;

mp["Oct"]=10;

mp["Nov"]=11;

mp["Dec"]=12;

if(mp[s]==1){

if (a<=20) cout<<"Capricorn";

else cout<<"Aquarius";
} if(mp[s]==2){

if (a<=19) cout<<"Aquarius";

else cout<<"Pisces";

}

if(mp[s]==3){

if(a<=20) cout<<"Pisces";
 else cout<<"Aries";

}

if(mp[s]==4){

if (a<=20) cout<<"Aries"; else cout<<"Taurus";

}

if(mp[s]==5){

if(a<=20) cout<<"Taurus";

else cout<<"Gemini";

}

if(mp[s]==6){

if(a<=21) cout<<"Gemini"; else cout<<"Cancer";

}

if(mp[s]==7){

if (a<=22) cout<<"Cancer";

else cout<<"Leo";

}
if(mp[s]==8){

if(a<=22) cout<<"Leo";

else cout<<"Virgo";

} if(mp[s]==9){

if(a<=21) cout<<"Virgo"; else cout<<"Libra";

} if(mp[s]==10){

if (a<=22) cout<<"Libra"; else cout<<"Scorpio";

}

if(mp[s]==11){

if (a<=22) cout<<"Scorpio"; else cout<<"Sagittarius";

}

if(mp[s]==12){

if (a<=21) cout<<"Sagittarius"; else cout<<"Capricorn";

}

cout<<nl;
}
  The_End;
}
