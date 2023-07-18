#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    long long int n,k,s,i;
	    cin >> n >> k >> s;
	    for(i=1;i<=(2*n)-1;i=i+2)
	    {
	        long long int p=n*n + (k-1)*i;
	        if(s==p)
	        {
	            break;
	        }
	    }
	    cout << i << endl;
	    t--;
	}
	return 0;
}