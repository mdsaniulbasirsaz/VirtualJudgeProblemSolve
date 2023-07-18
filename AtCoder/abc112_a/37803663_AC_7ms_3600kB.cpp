#include<iostream>
using namespace std;
int main() {
    int n,a,c=0;
    cin>>n;
    if(n==1)
    {
        cout<<"Hello World"<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            c+=a;
        }
        cout<<c<<endl;
    }
    return 0;
}