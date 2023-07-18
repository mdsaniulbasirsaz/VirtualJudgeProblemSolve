#include<iostream>

using namespace std;

int fun(long int a,long int b)

{

long int count=0;

if(a%b==0){return count;}

else

{

int mod=(a%b);

count=b-mod;

}

return count;

}

int main()

{

long int a,b;

int t;

cin>>t;

for(int i=0;i<t;i++)

{

cin>>a>>b;

cout<<fun(a,b)<<endl;

}

return 0;
}