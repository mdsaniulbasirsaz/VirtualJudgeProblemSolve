#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long kios69;
    cin>>kios69;
    while(kios69--)
    {
        long long n,u,d;
        cin>>n>>u>>d;
        long long a[n];

        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int f=0;
        long long i=1;
        long long c=1;
        int flag=0;
        while(i<n)
        {
            long long diff=a[i]-a[i-1];
            // cout<<a[i]<<" "<<diff<<" "<<-1*diff<<endl;
            if(diff>0)
            {
                // cout<<1<<" ";
                if(diff<=u)
                {
                    // cout<<1<<endl;
                    i++;
                    c++;
                }
                else {
                    // cout<<2<<endl;
                    break;
                }
            }
            else if(diff<0)
            {
                // cout<<2<<" ";
                if((-1*diff)<=d)
                {
                    // cout<<1<<endl;;
                    i++;
                    c++;
                }
                else if(flag==0)
                {
                    // cout<<2<<endl;;
                    i++;
                    c++;
                    flag=1;
                }
                else 
                {
                    // cout<<3<<endl;;
                    break;
                }
            }
            else
            {
                // cout<<3<<endl;
                c++;
                i++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}