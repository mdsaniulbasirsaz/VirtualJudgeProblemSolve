
    #include <bits/stdc++.h>
    using namespace std;
    long long n,m,a[300006],b[300006];
    bool ch(long long x,long long y)
    {
        for(int i=1;i<=m;i++)
        {
            if(x==a[i] || y==b[i] || x==b[i] || y==a[i])
            {
                continue;
            }
            if(y==-1)
            {
                return (ch(x,a[i])||ch(x,b[i]));
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
    int main()
    {
        cin>>n>>m;
        for(int i=1;i<=m;i++)
        {
            cin>>a[i]>>b[i];
        }

        if(ch(a[1],-1) || ch(b[1],-1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        //return 0;
    }