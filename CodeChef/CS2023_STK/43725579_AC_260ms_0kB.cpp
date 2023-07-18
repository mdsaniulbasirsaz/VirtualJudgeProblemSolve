#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
       
        long long om=0;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            long long x;cin>>x;
            
            if(x>0)
            {
                om++;
                 ans=max(ans,om);
            }
            else
            {
               
                om=0;
            }
        }
        //cout<<ans<<endl;
       
    long long addy=0;
        long long ans1=0;
        for(int i=0;i<n;i++)
        {
            long long y;cin>>y;
            if(y>0)
            {
                addy++;
                 ans1=max(ans1,addy);
            }
            else
            {
               
                addy=0;
            }
        }
        
      // cout<<ans1<<endl
        if(ans==ans1)
        {
            cout<<"Draw"<<endl;
        }
        else if(ans>ans1)
        {
            cout<<"Om"<<endl;
        }
        else
        {
            cout<<"Addy"<<endl;
        }
        
    }
	return 0;
}
