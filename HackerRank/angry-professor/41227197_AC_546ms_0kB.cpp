#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,a;cin>>n>>a;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int negative=0,positive=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0)
            {
                negative++;
            }
            else {
            positive++;
            }
        }
       if(negative <a)
       {
           cout<<"YES"<<endl;
       }else {
       cout<<"NO"<<endl;
       }
    }
    return 0;
}