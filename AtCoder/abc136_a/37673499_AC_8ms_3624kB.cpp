#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=a-b;
    if(d<=c)
    {
        cout<<c-d<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;

}