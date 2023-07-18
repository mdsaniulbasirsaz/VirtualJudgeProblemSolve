#include <bits/stdc++.h>
using namespace std;
int main()
{
    
        int n,k;cin>>n>>k;
        vector<long long>v;
        for(int i=0,x;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        //sort(v.begin(),v.end());
        int l=0,r=n-1;
        int ans=0;
        while(l<r)
        {
            if(v[l]+v[r]==k)
            {
               ans=1;
               break;
            }
            else if(v[l]+v[r]<k)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
    return 0;
}