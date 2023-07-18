#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    //left-shift
	    string s;
	    cin>>s;
	    string str=s+s;
	    string l=str.substr(1,s.length());
	    
	    //rigth-shift
	   string r=str.substr(s.length()-1, s.length());
	   
	   if(l==r){
	       cout<<"YES"<<endl;
	   }
	   else{
	       cout<<"NO"<<endl;
	   }
	}
	return 0;
}
