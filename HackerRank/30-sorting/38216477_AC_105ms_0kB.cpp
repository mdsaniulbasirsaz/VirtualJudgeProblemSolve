#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n,count;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

       int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                c++;
            }
        }
    }
    cout<<"Array is sorted in "<<c<<" swaps."<<endl;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<"First Element: "<<arr[i]<<endl;
        cout<<"Last Element: "<<arr[n-1]<<endl;
        break;
    }
return 0;
}