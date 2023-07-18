#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,s=0;
        scanf("%d%d",&n,&k);
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<n; i++)
        {
            arr[i]=arr[i]+k;
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]%7==0)
                s++;
        }
        printf("%d\n",s);
    }
    return 0;
}